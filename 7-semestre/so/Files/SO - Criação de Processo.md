
# Criação de Processo

Um processo pai cria processos filhos, que, por sua vez, criam outros processos, formando uma [[SO - Árvore de Processos|árvore de processos]].

## Unix

- `fork` cria um novo processo que é uma duplicata do pai
- `exec` chamada de sistema  usada após um `fork` para substituir o espaço de memória do processo por um novo programa
- Os processos pai e filho executam concorrentemente, mas o pai pode usar a chamada `wait` para esperar o filho terminar

![[Pasted image 20230401161826.png]]

### Fork

- Quando um processo é “forked” (bifurcado), um novo processo é criado
- O segmento de dados e códigos do novo processo é o mesmo do original
- Um novo [[SO - Bloco de Controle do Processo|PCB]] é criado para o novo processo
- **Valor de retorno:**
	- ZERO no processo filho
	- O ID do processo filho (PID) no processo pai

![[Pasted image 20230401162352.png]]

**Exemplo**

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

### Exec

Substituir o espaço de memória do processo por um novo programa.

![[Pasted image 20230401162331.png]]


#so

