
# Processo

Um **programa** é um código passivo armazenado na memória, que se torna um **processo** ao ser carregado na memória, cuja alocação inclui

- **Seção de texto** - contendo código do programa (instruções ao processador)
- **Seção de dados** - contendo as variáveis globais
- **Heap** - contendo memória alocada dinamicamente durante a execução
- **Pilha** - contendo dados temporários, como
	- parâmetros de função
	- variáveis de retorno
	- variáveis locais
- **Atividade corrente** - contador de programa e estado de outros registradores

![[Pasted image 20230401115329.png]]

*Obs: um programa pode estar relacionado a vários processos, basta executá-lo mais de uma vez. Assim, cada execução receberá uma alocação distinta na memória, executando independentemente uns dos outros.*

## Representação em Linux

```c
struct task_struct {
	pid t_pid; /* process identifier */
	long state; /* state of the process */
	unsigned int time_slice /* scheduling information */
	struct task_struct *parent; /* this process’s parent */
	struct list_head children; /* this process’s children */
	struct files_struct *files; /* list of open files */
	struct mm_struct *mm; /* address space of this process */
};
```

#so

