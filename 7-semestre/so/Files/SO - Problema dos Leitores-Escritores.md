
# Problema dos Leitores-Escritores

O problema dos leitores-escritores consiste em garantir a sincronização entre threads que precisam acessar um recurso compartilhado, onde múltiplos leitores podem acessar o recurso simultaneamente, mas apenas um escritor pode acessá-lo por vez. O desafio está em garantir a consistência dos dados compartilhados e evitar conflitos de acesso.

## Estrutura da solução

- Banco de dados
- Inteiro `readcount` inicializado com 0
- [[SO - Semáforo Mutex|Semáforo mutex]] inicializado com 1
- [[SO - Semáforo Mutex|Semáforo wrt]] inicializado com 1

**Escritor**

```c
while(true) {
	acquire(wrt);
		// Escrita é realizada
	relase(wrt);
}
```

**Leitor**

```c
while (true) {
	acquire(mutex);
	readcount++;
	if (readcount == 1) acquire(wrt);
	release(mutex)
		// leitura é realizada
	acquire(mutex) ;
	readcount - - ;
	if (readcount == 0) release(wrt) ;
	release(mutex) ;
}
```

## Análise da solução

-   Há um semáforo de exclusão mútua (`mutex`) que é usado pelos leitores para proteger a variável `readcount` e garantir que apenas um leitor por vez possa modificar `readcount`.
-   O semáforo `wrt` é usado para garantir que os escritores tenham exclusão mútua, ou seja, apenas um escritor por vez pode escrever no banco de dados. Quando um escritor adquire o semáforo `wrt`, ele tem exclusão mútua garantida e pode realizar a escrita necessária. Após a escrita, o escritor libera o semáforo `wrt`, permitindo que outros escritores possam escrever.
-   Quando um leitor adquire o semáforo `mutex`, ele incrementa o contador de leitores `readcount`. Se `readcount` é igual a 1, significa que este é o primeiro leitor a chegar e que nenhum outro leitor está atualmente lendo. Nesse caso, o leitor adquire o semáforo `wrt` para evitar que qualquer escritor entre na seção crítica. O leitor então libera o semáforo `mutex`, permitindo que outros leitores possam ler.
-   Após a leitura, o leitor adquire o semáforo `mutex` novamente e decrementa o contador de leitores `readcount`. Se `readcount` é igual a 0, significa que este é o último leitor a sair da seção crítica e que nenhum outro leitor está atualmente lendo. Nesse caso, o leitor libera o semáforo `wrt`, permitindo que os escritores possam escrever novamente.

#so

