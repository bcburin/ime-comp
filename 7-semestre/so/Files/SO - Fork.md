
# Fork

- Quando um processo é *forked* (bifurcado), um novo processo é criado
- O segmento de dados e códigos do novo processo é o mesmo do original
- Um novo [[SO - Bloco de Controle do Processo|PCB]] é criado para o novo processo
- **Valor de retorno:**
	- ZERO no processo filho
	- O ID do processo filho (PID) no processo pai

![[Pasted image 20230401162352.png]]

## Exemplo

```c
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	int pid;
	pid = fork();
	if (pid==0) {
		printf(“Eu sou o filho\n”);
	} else {
		printf(“Eu sou o pai\n”);
	}
}
```

#so

