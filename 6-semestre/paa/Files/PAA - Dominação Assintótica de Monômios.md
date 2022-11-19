
# Dominação Assintótica de Monômios

---

### Teorema

Sejam $c,d \in \mathbb{R}$ tais que $0 < c \leq d$, então $O(n^c) \subseteq O(n^d)$ e $O(n^c) = O(n^d)$ se e só se $c=d$.

---

### Demonstração

O resultado $O(n^c) \subseteq O(n^d)$ é trivial para o caso $c=d$, então tomemos $c \neq d$. Seja o polinômio em $n$
$$h(n) = n^d - n^c = n^c \cdot(n^{d-c} - 1)$$
Como $d > c > 0$, então $n^{d-c} \geq 1$ para todo $n \geq 1$. Logo, $h(n) \geq 0$ para $n \geq 1$, de modo que
$$
n^c \leq 1 \cdot n^d, \quad \forall n \geq 1
$$
O que implica $n^c \in O(n^d)$ e, portanto, $O(n^c) \subseteq O(n^d)$ ^[[[PAA - Subconjunto do Conjunto O]]]. 

Mostremos que $O(n^c)=O(n^d) \iff c =d$. Se $c=d$, $O(n^c)=O(n^d)$ é trivial. Suponha, agora, que $O(n^c) = O(n^d)$. Em particular, temos que $O(n^d) \subseteq O(n^c)$, de modo que $n^d \in O(n^c)$ e existem $m$ e $k$ positivos tais que $n^d \leq m \cdot n^c$ para todo $n \geq k$. Assim, o polinômio

$$
p(n) = m \cdot n^c - n^d = m \cdot n^c \cdot (1 - n^{d-c})
$$
é sempre positivo para $n \geq k$. Como $m$ e $n^c$ são positivos ($n$ é natural), então para todo $n \geq k$ vale

$$
1 - n^{d-c} \geq 0 \implies n^{d-c} \leq 1
$$

No entanto, essa relação só vale se $n = 1$ ou se $d-c=0$. A primeira não pode ocorrer porque a relação deve ser válida para todo $n \geq k$, $k$ positivo. Assim, só pode ser que $d - c = 0$, ou seja, $c = d$.

---

Tags: #paa

