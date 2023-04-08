
# Semáforo

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

Para resolver o problema da espera 

#so

