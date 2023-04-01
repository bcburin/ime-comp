
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

#so

