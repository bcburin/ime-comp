
# Término de Processo

## Unix

- `exit()` processo filho executa sua instrução final e pede ao sistema operacional que o termine
- `wait()` no processo pai para esperar término do processo filho e receber dados enviados pelo filho em `exit()`
- Os recursos do processo filho são desalocados pelo sistema operacional
- `abort()` usado pelo processo pai para terminar a execução dos processos filhos
	- O filho excedeu recursos alocados
	- Tarefa atribuída ao filho não é mais necessária
	- Pai está terminando

### Tipos de término

- **Término normal**
	- retornando de `main`
	- chamada de sistema `exit()`
- **Término anormal**
	- término por *sinal*
	- chamada de sistema `abort()`

### Exit

```c
#include <stdlib.h>
int exit(int status);
```

- `exit` realiza alguma limpeza e em seguida retorna
- tem um argumento inteiro, o *exit status*
- retornar um valor inteiro da função main é equivalente a chamar exit com o mesmo valor.
- o processo que está terminando notifica ao seu pai como ele terminou passando o exit status como argumento da função exit.
- Em um término anormal, o kernel gera um status de terminação
- O processo pai obtém o status de terminação através
da função `wait()` ou `waitpid`

### Criação e término de processo


```c
#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv) {
	int pid;
	/* cria outro processo */
	pid = fork();
	if (pid < 0) { /* ocorreu erro na execução do Fork */
		fprintf(stderr, “Falha no Fork ");
		exit(-1);
	}
	else if (pid == 0) { /* processo filho */
		execlp("/bin/ls","ls",NULL);
		exit(1);
	}
	else { /* processo pai */
		wait(NULL); /* pai espera o término do filho */
		printf(“Filho terminou ");
		exit(0);
	}
}
```

#so

