# Conjunto de Todas as Expressões com Sequência de Formação

---

### Teorema

A [[LG - PROP|PROP]] é o conjunto de todas as expressões que têm [[LG - Sequência de Formação|sequência de formação]].

---

### Demonstração

Seja $F$ o conjunto de todas as expressões que possuem sequência de formação. Toda proposição de $PROP$ possui sequência de formação ^[[[LG - Toda Proposição tem Sequência de Formação]]], de modo que $PROP \subset F$. Por outro lado, suponha que $\phi \in F$ possua sequência de formação $\phi_0, \dots, \phi_n$. Demonstremos, por indução sobre $n$, que $\phi \in PROP$.

1. $n = 0$: por definição de sequência de formação $\phi_0$  é uma proposição atômica, então $\phi = \phi_0 \in PROP$;
2. Suponha que todas as expressões com sequência de formação com comprimento $m < n$ estejam na $PROP$;
3. Por definição, $\phi_n = (\phi_i \;\square\; \phi_j)$ para $i,j < n$ ou $\phi_n = (\neg \phi_i)$ para $i < n$. No primeiro caso, $\phi_i$ e $\phi_j$ possuem comprimentos $i$ e $j$ menores que $n$, então $\phi_i, \phi_j \in PROP$. No segundo, $\phi_i$ tem comprimento $i$ menor que $n$, de modo que $\phi_i \in PROP$. Em ambos casos, das propriedades da $PROP$, conclui-se que $\phi_n \in PROP$, ou seja, $\phi \in PROP$, o que comleta a indução.

Disso, obtemos que $\phi \in PROP$ e $F \subset PROP$. Portanto, segue-se que $F = PROP$.

---

Tags: #logica 