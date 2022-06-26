# Maior e Menor Elemento

---

### Menor elemento

Sendo $(A,\leq)$ um [[MD - Conjunto Parcialmente Ordenado|poset]], $m \in A$ é o **menor elemento** de $A$ se e só se, para todo $a \in A$

$$
m \leq a 
$$

---

### Maior elemento

Sendo $(A,\leq)$ um [[MD - Conjunto Parcialmente Ordenado|poset]], $m \in A$ é o **maior elemento** de $A$ se e só se, para todo $a \in A$

$$
a \leq m 
$$

---

### Comparação com minimal e maximal

- Os elementos [[MD - Maximal e Minimal de um Poset|minimal e maximal]] não necessariamente são comparáveis a todos os elementos de um poset
- Os elementos minimal e maximal não necessariamente são únicos
- O maior elemento é maximal, e o menor elemento é minimal
- Um elemento maximal não necessariamente é maior elemento, e um elemento minimal não necessariamente é menor elemento
- Um poset finito sempre possui maximal e minimal, mas não tem necessariamente maior e menor elementos

---

### Unicidade

Suponha que, no poset $(A,\leq)$, $m_1,m_2 \in A$ sejam menores elementos, logo

- $m_1 \leq m_2$, pois $m_1$ é menor elemento
- $m_2 \leq m_1$, pois $m_2$ é menor elemento

Da propriedade [[MD - Relação Antissimétrica|antissimétrica]], $m_1=m_2$, ou seja, o menor elemento é único.

De forma análoga, prova-se que o maior elemento é, também, único.

---

Tags: #mat-discreta 