
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

Suponha duas threads `T0` e `T1` e suponha que, fora da seção crítica, a thread `T0` faça uma chamada bloqueante de E/S. Quando a thread `T1` terminar de executar, ela cederá seu turno a `T0`. No entanto, `T0` não está pronto para executar. Como consequência, `T1` ficará também bloqueada até que `T0` seja desbloqueada e execute sua seção crítica.

#so

