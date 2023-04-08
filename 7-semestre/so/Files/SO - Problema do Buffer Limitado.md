
# Problema do Buffer Limitado

O problema do buffer limitado ocorre quando vários processos ou threads compartilham um buffer com tamanho limitado para trocar informações ou dados entre si. O buffer pode ser uma área de memória ou uma fila, e o número de elementos que ele pode conter é fixo.

## Estrutura da solução

- Buffer limitado de tamanho `BUFFER_SIZE` 
- [[SO - Semáforo Mutex|Semáforo mutex]] inicializado com 1
- [[SO - Semáforo de Contagem|Semáforo]] **full** inicializado com 0
- [[SO - Semáforo de Contagem|Semáforo]] **empty** inicializado com `BUFFER_SIZE`

Os semáforos e o buffer são utilizados nos threads/processos [[SO - IPC Memória Compartilhada#Exemplo - Produtor e Consumidor|produtor e consumidor]].

**Estrutura do produtor**

```c
while (true) {
	// produz um item
	acquire(empty); // empty-- // empty == 0 => bloqueado
	acquire(mutex);
	Buffer[in] = item;
	in = (in+1) % BUFFER_SIZE;
	release(mutex);
	release(full); // full++
}
```


**Estrutura do consumidor**

```c
while (true) {
	acquire(full); // full-- // full == 0 => bloqueado
	acquire(mutex);
	item = Buffer[out];
	out = (out+1) % BUFFER_SIZE;
	release(mutex);
	release(empty); // empty--
	// consome o item removido
}
```

## Análise da solução

O *semáforo mutex* é utilizado para *garantir exclusão mútua* na seção crítica em que o produtor e o consumidor acessam o buffer. O semáforo é inicializado com o valor 1, o que significa que o recurso está disponível para uso. Quando um dos threads adquire o semáforo mutex, ele garante exclusão mútua no acesso à seção crítica. Ao liberar o semáforo mutex, ele sinaliza que a seção crítica está disponível para o próximo thread.

O *semáforo full* é utilizado para indicar *quantos slots do buffer estão ocupados*. Ele é inicializado com o valor 0, o que significa que não há slots ocupados no início. Quando o produtor insere um item no buffer, ele adquire o semáforo empty para verificar se há um slot vazio disponível. Se o semáforo empty for 0, o *produtor fica bloqueado* até que um slot *esteja disponível*. Ao liberar o semáforo full, o produtor sinaliza que um slot foi preenchido.

O *semáforo empty* é utilizado para indicar *quantos slots do buffer estão vazios*. Ele é inicializado com o valor `BUFFER_SIZE`, o que significa que todos os slots estão vazios no início. Quando o consumidor remove um item do buffer, ele adquire o semáforo full para verificar se há um slot preenchido disponível. Se o semáforo full for 0, o *consumidor fica bloqueado* até que um slot *esteja preenchido*. Ao liberar o semáforo empty, o consumidor sinaliza que um slot está vazio.

#so

