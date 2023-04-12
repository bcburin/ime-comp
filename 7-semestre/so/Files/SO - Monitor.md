
# Monitor

Um monitor é definido como uma classe ou objeto que encapsula um recurso compartilhado, juntamente com os métodos que acessam e modificam esse recurso. Quando uma thread deseja acessar o recurso compartilhado, ela deve primeiro obter acesso exclusivo ao monitor. Se outro thread já tiver adquirido o monitor, a thread solicitante é colocada em um estado de espera até que o monitor esteja disponível.

Uma vez que uma thread tenha adquirido o monitor, ela pode executar as operações necessárias no recurso compartilhado. Quando a thread terminar de usar o recurso, ela deve liberar o monitor para permitir que outras threads possam acessá-lo.

```c
monitor monitor-name {
	// declarações de variáveis compartilhadas
	procedure p1(...) {...}
	. . .
	procedure pn(...) {...}
	
	{
	// código de inicialização
	}
}
```


## Variável de Condição

Variáveis de condição são objetos utilizados em conjunto com monitores para permitir que as threads esperem por uma determinada condição de maneira eficiente.

Em um monitor, as threads que desejam acessar um recurso compartilhado devem primeiro adquirir o monitor. No entanto, pode haver situações em que uma thread precise esperar até que uma determinada condição seja atendida antes de continuar a executar. Por exemplo, uma thread pode precisar esperar até que um buffer esteja cheio antes de começar a processar seus dados.

Nessas situações, uma variável de condição é usada para colocar a thread em um estado de espera até que a condição desejada seja atendida. A thread libera o monitor e espera na variável de condição. Quando a condição é atendida, outra thread que possui o monitor notifica as threads em espera usando a variável de condição, permitindo que elas retomem a execução.

Por exemplo, em um programa de produtor-consumidor, onde uma thread produtora adiciona itens a um buffer e uma thread consumidora os retira, a thread consumidora pode esperar na variável de condição até que haja pelo menos um item no buffer. A thread produtora notifica a thread consumidora quando um item é adicionado ao buffer, permitindo que a thread consumidora retome a execução e retire o item.

![[Pasted image 20230412113402.png]]

Se `x` é uma variável de condição, então podem ser realizadas as operações

- `x.wait()` - suspende processo que invocou a operação
- `x.signal()` - continua um dos processos que chamou `x.wait()`, se existir

Ver [[SO - Problema dos Filósofos na Mesa de Jantar#Solução usando monitor|solução do problema dos filósofos na mesa de jantar usando monitor]].

#so

