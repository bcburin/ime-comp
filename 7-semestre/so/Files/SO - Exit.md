
# Exit


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

### Exemplo

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

