
# POSIX Threads


## Pthread

-  API do padrão POSIX para criação e sincronismo de threads
- API especifica comportamento da biblioteca; a implementação cabe ao desenvolvedor
- Comum nos sistemas operacionais UNIX (Solaris, Linux, Mac OS X)

## Exemplo

```c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int sum; /* esses dados são compartilhados pela(s)

Thread(s) */

void *runner(void *param); /* a thread*/
	int main(int argc, char **argv) {/
	pthread_t tid; /* o identificador da Thread */
	pthread_create(&tid,NULL,runner,argv[1]); /* cria a
	thread */
	
	/* agora espera que o fluxo termine */
	pthread_join(tid,NULL);
	printf(“soma = %d\n",sum);
	exit(0);
}

void *runner(void *param) {
	int upper = atoi(param);
	int i;
	sum = 0;
	if (upper > 0) {
	for (i = 1; i <= upper; i++)
	sum += i;
	}
	pthread_exit(0);
}
```


#so

