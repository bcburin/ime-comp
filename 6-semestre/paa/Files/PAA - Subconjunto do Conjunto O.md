
# Subconjunto do Conjunto O

---

### Teorema

A função $f$ é $O(g)$ se e só se $O(f) \subseteq O(g)$.

---

### Demonstração

**(IDA)** Seja $f \in O(g)$, então existem $m_1$ e $k_1$ tais que $f(n) \leq m_1 \cdot g(n)$ para todo $n \geq k_1$. Tome $h \in O(f)$, então existem $m_2$ e $k_2$ tais que $h(n) \leq m_2 \cdot f(n)$ para todo $n \geq k_2$. Portanto, $h(n) \leq m_2m_1 \cdot g(n)$ para todo $n \geq \max\{k_1, k_2\}$, ou seja, $h \in O(g)$. Note que esse resultado também seria direto da [[PAA - Transitividade e Reflexividade da Dominação Assintótica|transitividade da dominação assintótica]]. Assim, segue-se que $O(f) \subseteq O(g)$.

**(VOLTA)** Seja $O(f) \subseteq O(g)$. Note que, para $m=1$ e $k=1$, vale $f(n) \leq m \cdot f(n)$ para todo $n \geq k$, portanto $f \in O(f)$. Esse resultado é o mesmo da [[PAA - Transitividade e Reflexividade da Dominação Assintótica|reflexividade da dominação assintótica]]. Com isso, temos que $f \in O(g)$.

---

### Corolário

$f$ é $O(g)$ e $g$ é $O(f)$ se e só se $O(f)=O(g)$

---

Tags: #paa