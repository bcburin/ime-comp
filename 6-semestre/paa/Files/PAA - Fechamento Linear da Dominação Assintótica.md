
# Fechamento Linear da Dominação Assintótica

---

### Teorema

O [[PAA - Notação O grande|conjunto]] $O(g)$ é fechado sob combinações lineares de seus elementos, isto é

- $f \in O(g), c > 0 \implies cf \in O(g)$
- $f,h \in O(g) \implies (f+h)\in O(g)$

---

### Demonstração

- Se $f \in O(g)$ então existem constantes positivas $m$ e $k$ tais que $f(n) \leq m \cdot g(n)$ para todo $n \geq k$. Então $cf(n) \leq cm \cdot g(n)$ para todo $n \geq k$, ou seja, $cf \in O(g)$.
- Se $f,g \in O(g)$, então existem constantes $m_1, k_1, m_2, k_2$ tais que
	$$
	\begin{align*}
		& f(n) \leq m_1 \cdot g(n), \quad \forall n \geq k_1 \\
		& h(n) \leq m_2 \cdot g(n), \quad \forall n \geq k_2
    \end{align*}	
  $$
  Portanto, $f(n) + h(n) \leq (m_1 + m_2) \cdot g(n)$ para todo $n \geq \max\{k_1, k_2\}$, ou seja, $(f + h) \in O(g)$ 

---

Tags: #paa

