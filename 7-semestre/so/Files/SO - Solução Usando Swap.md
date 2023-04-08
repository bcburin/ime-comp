
# Solução Usando Swap

## Instrução Swap

```c
void Swap (boolean *a, boolean *b) {
	boolean temp = *a;
	*a = *b;
	*b = temp;
}
```

## Uso

- Variável booleana compartilhada `lock`, inicializada com `false`
- Cada processo possui uma variável local booleana `key`

```c
do {
	key = true;
	while (key == true)
		Swap (&lock, &key );
	// critical section
	lock = false;
	// remainder section
} while (true);
```

O algoritmo funciona da seguinte forma:

1.  A thread define `key` como `true`, indicando sua intenção de entrar na seção crítica.
2.  A thread entra em um loop enquanto `key` é `true`.
3.  Dentro do loop, a thread tenta trocar os valores de `lock` e `key` usando a função `Swap`. Se outra thread já está na sua seção crítica, ambas variáveis contiu
4.  A thread executa a seção crítica.
5.  A thread define `lock` como `false`, indicando que ela saiu da seção crítica.
6.  A thread executa a seção de restante do programa.

#so

