
# IPC Memória Compartilhada

- Uma área de memória compartilhada entre processos que desejam se comunicar
- A comunicação está sob o controle dos processos dos usuários e não do SO
- Os principais objetivos é prover mecanismos que irão permitir os processos de usuários sincronizarem suas ações quando acessam a memória compartilhada

## POSIX

- `shm_open()`:

```c
int shm_open(const char *name, int oflag, mode_t mode);
```    

A função `shm_open()` cria ou abre um objeto de memória compartilhada com o nome `name`. O parâmetro `oflag` especifica as opções de abertura do objeto, como `O_CREAT` para criar o objeto se ele não existir ou `O_RDWR` para abrir o objeto para leitura e gravação. O parâmetro `mode` especifica as permissões de acesso ao objeto se ele for criado. A função retorna um descritor de arquivo para o objeto de memória compartilhada ou -1 em caso de erro.

-   `ftruncate()`:

```c    
int ftruncate(int fd, off_t length);
```    

A função `ftruncate()` redimensiona o objeto de memória compartilhada referenciado pelo descritor de arquivo `fd` para o tamanho `length`. Se `length` for menor do que o tamanho atual do objeto, os dados além do novo limite serão perdidos. Se `length` for maior do que o tamanho atual do objeto, o espaço adicional será preenchido com zeros. A função retorna 0 em caso de sucesso ou -1 em caso de erro.
    
-   `mmap()`:

```c   
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
```

A função `mmap()` mapeia uma região de memória do objeto de memória compartilhada referenciado pelo descritor de arquivo `fd` no espaço de endereçamento do processo chamador. O parâmetro `addr` especifica o endereço de início da região mapeada ou NULL para deixar o sistema escolher um endereço adequado. O parâmetro `length` especifica o tamanho da região mapeada. O parâmetro `prot` especifica as permissões de acesso à região, como `PROT_READ` para permitir leitura ou `PROT_WRITE` para permitir gravação. O parâmetro `flags` especifica as opções de mapeamento, como `MAP_SHARED` para compartilhar o mapeamento entre processos ou `MAP_ANONYMOUS` para criar uma região mapeada sem um arquivo associado. O parâmetro `offset` especifica o deslocamento no objeto de memória compartilhada a partir do qual os dados devem ser mapeados. A função retorna um ponteiro para a região mapeada em caso de sucesso ou -1 em caso de erro.

-   `shm_unlink()`:

```c
int shm_unlink(const char *name);
```

A função `shm_unlink()` remove o objeto de memória compartilhada com o nome `name`. O objeto só é realmente removido quando o último processo que o utiliza o fecha ou termina. A função retorna 0 em caso de sucesso ou -1 em caso de erro.

## Exemplo - Produtor e Consumidor

**buffer.h**

```c
#include <semaphore.h>

#define BUFFER_SIZE 5
#define SHM_NAME "/shm_buffer"

typedef struct {
    int data[BUFFER_SIZE];
    int in;
    int out;
    sem_t mutex;
    sem_t empty;
    sem_t full;
} Buffer;
```

**produtor.c**

```c
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "buffer.h"

int main() {
    int shm_fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, 0666);
    ftruncate(shm_fd, sizeof(Buffer));
    Buffer *buffer = (Buffer *) mmap(NULL, sizeof(Buffer), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    close(shm_fd);

    int count = 0;
    while (1) {
        sem_wait(&buffer->empty);
        sem_wait(&buffer->mutex);

        buffer->data[buffer->in] = count++;
        printf("Produzindo: %d\n", buffer->data[buffer->in]);
        buffer->in = (buffer->in + 1) % BUFFER_SIZE;

        sem_post(&buffer->mutex);
        sem_post(&buffer->full);

        sleep(1);
    }

    return 0;
}
```

**consumidor.c**

```c
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "buffer.h"

int main() {
    int shm_fd = shm_open(SHM_NAME, O_RDWR, 0666);
    Buffer *buffer = (Buffer *) mmap(NULL, sizeof(Buffer), PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    close(shm_fd);

    while (1) {
        sem_wait(&buffer->full);
        sem_wait(&buffer->mutex);

        int data = buffer->data[buffer->out];
        printf("Consumindo: %d\n", data);
        buffer->out = (buffer->out + 1) % BUFFER_SIZE;

        sem_post(&buffer->mutex);
        sem_post(&buffer->empty);

        sleep(2);
    }

    return 0;
}
```

Compile e execute os dois programas em terminais distintos. O produtor ficará responsável por escrever na memória compartilhada, enquanto o consumidor ficará responsável por ler os valores e consumi-los.

```bash
$ gcc -o produtor produtor.c -lrt -pthread
$ gcc -o consumidor consumidor.c -lrt -pthread
$ ./produtor
```

Em outro terminal:

```bash
$ ./consumidor
```

#so

