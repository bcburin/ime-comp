
# Problema dos Filósofos na Mesa de Jantar

O problema dos filósofos na sala de jantar é um problema clássico da computação concorrente que envolve cinco filósofos que compartilham uma mesa redonda e um prato de espaguete. Cada filósofo passa seu tempo alternando entre pensar e comer. A mesa tem cinco garfos para pegar o espaguete. Para comer, um filósofo precisa de dois garfos, um à sua esquerda e outro à sua direita. O problema consiste em garantir que os filósofos possam comer sem entrar em um estado de impasse (deadlock), no qual cada filósofo segura um garfo e espera pelo outro.

## Estrutura da solução com deadlock

**Filósofo `i`**

```c
while (true) {
	// apanha garfo da esquerda
	acquire(chopStick[i]);
	// apanha garfo da direita
	acquire(chopStick[(i + 1) % 5]);
	eating();
	// devolve garfo da esquerda
	release(chopStick[i]);
	// devolve garfo da direita
	release(chopStick[(i + 1) % 5]);
	thinking();
}
```

#so

