
# Algoritmo com Variável de Turno

Em um processo com `n` threads `Ti`, a variável compartilhada `turn` armazena de qual é a thread que pode executar sua seção crítica

- `int turn`
- inicialmente, `turn = 0`
- `turn == i` ->  `Ti` pode entrar em sua seção crítica

Satisfaz [[SO - Seção Crítica#Problema da seção crítica|exclusão mútua]], mas **não** satisfaz [[SO - Seção Crítica#Problema da seção crítica|progresso]].

## Implementação

Para a thread `Ti`

```c
do {
	while (turn != i)
		;
	// seção crítica
	turn = j;
	// restante do programa
} while (1);
```

## Problema

Esse algoritmo não satisfaz a condição de progresso.

**TODO** por quê?

#so

