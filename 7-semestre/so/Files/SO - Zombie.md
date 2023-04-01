
# Zombie

-   Um processo zombie é um processo que terminou de executar, mas ainda possui uma entrada na tabela de processos do sistema operacional.
-   O processo zombie é criado quando um processo pai não aguarda a finalização do processo filho usando a chamada de sistema `wait()` ou `waitpid()`.
-   Quando um processo filho termina, o sistema operacional envia um sinal `SIGCHLD` para o processo pai, informando que o filho terminou de executar.
-   Se o processo pai não tratar o sinal `SIGCHLD` e não chamar a função `wait()` ou `waitpid()` para aguardar a finalização do processo filho, o processo filho se torna um processo zombie.
-   O processo zombie ocupa uma entrada na tabela de processos do sistema operacional, mas não ocupa recursos de processamento, como CPU ou memória.
-   Para remover um processo zombie, o processo pai deve chamar a função `wait()` ou `waitpid()` para obter o status de saída do processo filho e liberar seus recursos.
-   Em sistemas Unix/Linux, o comando ps mostra uma lista de todos os processos em execução, incluindo os processos zombies. O estado do processo zombie é mostrado como "Z" na coluna `STAT`.
- `init` ([[SO - Árvore de Processos|processo raiz]]) é escrito de forma que quando um de seus filhos termina, `init` chama `wait()`

## Exemplo

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int pid;
	pid = fork();
	if (pid==0) {
		printf(“I am child. I become a zombie now.\n”);
		exit (0); ß processo filho termina aqui
	} else {
		printf(“I am parent. I loop here. My child pid is [%d]\n”, pid);
		while(1); ß processo pai continua executando
	}
	return 0;
}
```

#so

