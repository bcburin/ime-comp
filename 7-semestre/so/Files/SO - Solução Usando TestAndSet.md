
# Solução Usando TestAndSet

## Instrução TestAndSet

A função recebe um ponteiro para uma variável booleana `target` e retorna um valor booleano que indica se a variável `target` estava definida como `true` ou `false` antes de ser definida como `true` pela função.

```c
boolean TestAndSet (boolean *target) {
	boolean temp = *target;
	*target = true;
	return temp;
}
```

A função Test-and-Set é uma das primitivas de sincronização de hardware mais simples e eficientes, que pode ser implementada em hardware ou software. É usada para garantir exclusão mútua em ambientes de programação concorrente, como um método para impedir que várias threads ou processos acessem a mesma seção crítica simultaneamente.

## Uso

```c
do {
	while (TestAndSet(&lock))
		;
	// Seção crítica
	lock = false;
	// Restante do programa
} while (1);
```

- A variável booleana `lock` é inicializada como `false` e é usada como um semáforo binário para indicar se a seção crítica está sendo acessada ou não. 
- A thread ou processo que deseja acessar a seção crítica chama a função Test-and-Set passando o endereço da variável `lock` como argumento. 
- A função retorna `true` se a variável `lock` já estava definida como `true`, o que significa que a seção crítica já está sendo acessada por outra thread ou processo. 
- Nesse caso, a thread ou processo entra em um loop de espera ativa, verificando constantemente a variável `lock` até que ela seja definida como `false`. 
- Quando a variável `lock` é atribuída como `false`, a thread ou processo entra na seção crítica, executa o código desejado, atribui a variável `lock` como `false` e continua com o restante do programa.

#so

