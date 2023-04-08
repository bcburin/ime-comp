
# Semáforo

## Implementação simples

Um semáforo é uma variável inteira que pode ser acessada por várias threads simultaneamente. Podem ser acessados a penas a partir duas operações indivisíveis (atômicas) que modificam o semáforo: `adquire()` e `release()`.

**`adquire()`**

```c
acquire(S) {
	while S <= 0
		; // nenhuma operação
	S--;
}
```

**`release()`**

```c
release(S) {
	S++;
}
```

## Implementação sem espera ocupada

Os semáforos, como apresentados acima possuem um problema: espera ocupada. Uma thread que não pode acessar a seção crítica acaba desperdiçando muitos ciclos de CPU fazendo nada, ao invés de dar vez à outra thread para ela finalizar sua seção crítica.

Para resolver o problema da espera ocupada, modifica-se a implementação do semáforo de modo que a cada semáforo esteja associada uma fila de espera.

```c
typedef struct {
	int value;
	struct process *list;
} semaphore;
```

Além disso, usam-se duas operações.

- `block` -> coloca o thread/processo que chamou a operação no estado de espera.
- `wakeup` -> passa o thread/processo para o estado de pronto

Dessa forma, as novas implementações do `adquire()` e do `release()` são

**`adquire()`**

```c
acquire (S) {
	S->value--;
	if (S->value < 0) {
		// adicionar este processo à S->list
		block(); 
	}
}
```

**`release()`**

```c
release (S) {
	S->value++;
	if (S->value <= 0) {
		// remover um processo P de S->list
		wakeup(P); 
	}
}
```

**Problemas com essa abordagem**

Essa implementação de semáforo apresentada acima precisa garantir que dois threads/processos não executem `adquire()` e `release()` em um mesmo semáforo ao mesmo tempo. Isso se torna um problema de seção crítica, sendo resolvido com alguma das outras soluções. No entanto, dessa forma, passa a haver espera ocupada na implementação da seção crítica para o `adquire()` e `release()`. Ainda assim, o código de implementação é curto e haverá pouca espera ocupada se a seção crítica raramente for ocupada.

#so

