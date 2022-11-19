
# Caracterização de Árvore (Grafo Acíclico)

---

### Teorema

Se $G=(V,E)$ é um [[PAA - Grafo Acíclico|acíclico]] tal que $|E| = |V| - 1$, então $G$ é uma [[PAA - Árvore|árvore]].

---

### Demonstração

Suponha que $G$ seja [[PAA - Grafo Conexo|desconexo]]. Sejam $G_1,\dots,G_k$ os [[PAA - Componente Conexo|componentes conexos]] de $G$, com $G_i=(V_i,E_i)$ para $1 \leq i \leq k$, $|V_i|=n_i$ e $|E_i|=m_i$, $\sum_{i=1}^k n_i = n$ e $\sum_{i=1}^k m_i = m$. Como G é acíclico, então todos os $G_i$ são acíclicos e, portanto, árvores, de modo que

$$
m_i = n_i - 1, \quad \forall 1 \leq i \leq k
$$

Assim


$$
n-1 = m = \sum\limits_{i=1}^k m_i = \sum\limits_{i=1}^k(n_i-1)=n-k
$$

Se $k\neq 1$, temos um absurdo. Portanto $G$ é conexo e, assim, uma árvore.

---

Tags: #paa

