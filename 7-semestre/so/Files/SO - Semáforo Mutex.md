---
alias: Semáforo Binário, Mutex Locks
---

# Semáforo Mutex (Semáforo Binário)

Uma **semáforo mutex** é um [[SO - Semáforo|semáforo]] que assume os valores `0` e `1`. Também são conhecidos como **mutex locks**. Eles fornecem [[SO - Seção Crítica#Problema da seção crítica|exclusão mútua]].

```c
Semaphore mutex; // inicializado com 1
acquire(mutex);
	// Seção Crítica
release(mutex);
```

## Exemplo

![[Pasted image 20230408164750.png]]

#so

