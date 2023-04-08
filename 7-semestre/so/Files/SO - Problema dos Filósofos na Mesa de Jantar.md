
# Problema dos Filósofos na Mesa de Jantar

O problema dos filósofos na sala de jantar é um problema clássico da computação concorrente que envolve cinco filósofos que compartilham uma mesa redonda e um prato de espaguete. Cada filósofo passa seu tempo alternando entre pensar e comer. A mesa tem cinco garfos para pegar o espaguete. Para comer, um filósofo precisa de dois garfos, um à sua esquerda e outro à sua direita. O problema consiste em garantir que os filósofos possam comer sem entrar em um estado de impasse (deadlock), no qual cada filósofo segura um garfo e espera pelo outro.

![[Pasted image 20230408185801.png]]

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

Essa solução pode gerar deadlock, caso todos os filósofos executem `adquire(chopStick[i])`.

## Soluções sem deadlock

- Permitir no máximo quatro filósofos sentados na mesa
- Só permitir que um filósofo pegue os garfos se ambos estiverem disponíveis
- Usar uma solução assimétrica

## Análise das soluções sem deadlock

- A solução de permitir no máximo quatro filósofos sentados na mesa pode evitar o deadlock, pois garante que nenhum ciclo completo de cinco filósofos pegando garfos ao mesmo tempo possa ocorrer, evitando assim o deadlock, mas limita o número de filósofos que podem jantar ao mesmo tempo.
- A solução de só permitir que um filósofo pegue os garfos se ambos estiverem disponíveis é uma solução simples e eficaz, mas pode levar a [[SO - Starvation|estagnação]] de um ou mais filósofos.
- A solução assimétrica envolve fazer com que alguns filósofos peguem o garfo da esquerda primeiro, enquanto outros pegam o garfo da direita primeiro. Isso evita o deadlock, mas pode levar à inanição se um filósofo nunca conseguir o garfo que precisa para comer.

#so

