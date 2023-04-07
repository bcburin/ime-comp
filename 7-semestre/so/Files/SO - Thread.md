
# Thread

Thread é uma sequência de execução dentro de um processo, ou seja, é uma forma de *executar múltiplas tarefas* dentro de um mesmo programa *de forma concorrente*. Cada thread *compartilha o mesmo espaço de memória* do processo e pode acessar *as mesmas variáveis* e estruturas de dados. As threads podem ser usadas para realizar tarefas em segundo plano, realizar tarefas simultâneas, melhorar o desempenho de programas e outras aplicações.

## Processo Multithread

![[Pasted image 20230407164237.png]]


Um thread ou processo leve (LWP – lightweight process) é uma unidade básica da utilização da CPU; ele consiste em:

- ID
- contador de programa e registradores
- pilha

Compartilha com outros threads pertencentes ao mesmo
processo:

- seção de código e de dados
- recursos do sistema operacional (arquivos abertos)

## Vantagens sobre múltiplos processos

- **Capacidade de resposta**
- **Economia**
	- Menor tempo de criação/terminação para threads
	- Menor tempo de troca de contexto entre threads de um mesmo processo
- **Compartilhamento de recursos** - threads de um mesmo processo compartilham memória e arquivos, então podem se comunicar sem invocar o kernel
- **Escalabilidade** - utilização de arquiteturas multiprocessadas

#so

