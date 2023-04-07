
# Solução de Peterson

Esse algoritmo combina as variáveis compartilhadas do [[SO - Algoritmo com Variável de Turno|algoritmo com variável de turno]] e do [[SO - Algoritmo com Flags de Pronto|algoritmo com flags de pronto]].

- **Variável de turno**
	- `int turn`
	- inicialmente, `turn = 0`
	- `turn == i` ->  `Ti` pode entrar em sua seção crítica
- **Flags de pronto**
	- `boolean flag[n]`
	- inicialmente `flag[i] = false`
	- `flag[i] == true` -> `Ti` está pronto para entrar em sua seção crítica

Ele satisfaz os três requisitos do [[SO - Seção Crítica#Problema da seção crítica|problema da seção crítica]].

## Implementação

```c
do {
	flag[i] = true;
	turn = j;
	while ((flag[j] == true) and (turn == j))
		;
	// seção crítica
	flag[i] = false;
	// restante do programa
} while (1);
```


#so

