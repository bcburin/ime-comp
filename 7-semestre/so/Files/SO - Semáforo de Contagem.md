
# Semáforo de Contagem

Um **semáforo de contagem** é um [[SO - Semáforo|semáforo]] cujo valor inteiro pode variar de forma ilimitada. Ele geralmente é utilizado para controlar o acesso a um recurso em quantidade limitada, e é inicializado com a quantidade do recurso disponível.

```c
Semaphore S; // inicializado com quantidade do recurso
acquire(S);
	// Usa o recurso
release(S);
```

## Exemplo

![[Pasted image 20230408165200.png]]

#so

