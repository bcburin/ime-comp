
# Wait e Waitpid

```c
#include <sys/wait.h>

pid_t wait(int *status);
pid_t waitpid(pid_t pid, int *status, int options);

```

A função `wait()` retorna o PID do processo filho que terminou a execução ou -1 em caso de erro. O status do processo filho é armazenado em `status`, que é um ponteiro para um inteiro. O status pode ser interpretado com as macros fornecidas em `sys/wait.h`.

A função `waitpid()` tem três argumentos: `pid`, `status` e `options`. O argumento `pid` é o PID do processo filho para o qual a função deve esperar. O argumento `status` é um ponteiro para um inteiro usado para armazenar o status de saída do processo filho. O argumento `options` é um inteiro que controla o comportamento da função.

## Macros

As macros relacionadas a essas funções em `sys/wait.h` incluem:

-   `WIFEXITED(status)`: retorna verdadeiro se o processo filho terminou normalmente.
-   `WEXITSTATUS(status)`: retorna o código de saída do processo filho se ele terminou normalmente.
-   `WIFSIGNALED(status)`: retorna verdadeiro se o processo filho terminou devido a um sinal.
-   `WTERMSIG(status)`: retorna o número do sinal que causou a terminação do processo filho.
-   `WIFSTOPPED(status)`: retorna verdadeiro se o processo filho foi parado por um sinal.
-   `WSTOPSIG(status)`: retorna o número do sinal que parou o processo filho.
-   `WIFCONTINUED(status)`: retorna verdadeiro se o processo filho foi continuado após uma parada.
- `WCOREDUMP(status)`: verifica se o processo filho gerou um arquivo core dump (arquivo que contém o estado da memória do processo após ele ter sido encerrado de forma anormal) durante sua terminação. Se a macro retornar um valor diferente de zero, indica que um arquivo core dump foi gerado.

Essas macros permitem que o programa que espera o término do processo filho determine o status de saída do processo e tome ações apropriadas com base nesse status.

## Opções

-   `WNOHANG`: retorna imediatamente se nenhum processo filho estiver disponível, ao invés de bloquear. Nesse caso, a função retorna 0 e o valor do status de saída não é alterado.
-   `WUNTRACED`: considera processos que foram interrompidos por um sinal, mas cujo status de saída ainda não está disponível. Esses processos são relatados como se tivessem sido parados por um sinal.
-   `WCONTINUED`: considera processos que foram continuados após terem sido parados por um sinal.

## Implementação das macros

As macros definidas em `sys/wait.h` são implementadas como expressões em C, usando os bits do status de saída do processo filho para determinar seu significado.

Por exemplo, a macro `WIFEXITED(status)` é implementada da seguinte maneira:

```c
#define WIFEXITED(status)    (((status) & 0xff) == 0)
```

Essa macro verifica se os bits menos significativos do status são iguais a zero, o que indica que o processo filho terminou normalmente.

Da mesma forma, a macro `WEXITSTATUS(status)` é implementada da seguinte maneira:

```c
#define WEXITSTATUS(status)  (((status) >> 8) & 0xff)
```

Essa macro extrai o código de saída do processo filho do byte do status de saída à esquerda do byte zero, onde o código de saída é armazenado.

As outras macros são implementadas de maneira semelhante, usando os bits do status de saída do processo filho para determinar seu significado.

#so

