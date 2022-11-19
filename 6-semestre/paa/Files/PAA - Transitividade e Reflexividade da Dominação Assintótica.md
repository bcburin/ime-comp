
# Transitividade e Reflexividade da Dominação Assintótica

---

### Teorema

Seja $\mathcal{F}$ o conjunto das funções de $\mathbb{N}$ e em $\mathbb{R}$. A [[MD - Relação sobre um conjunto|relação]] $R$ sobre $\mathcal{F}$ de [[PAA - Dominação Assintótica|dominação assintótica]] como dada abaixo é [[MD - Relação Reflexiva|reflexiva]] e [[MD - Relação Transitiva|transitiva]]

$$R = \{(f,g) \in \mathcal{F} \times \mathcal{F} \;|\; f \in O(g)\}$$
Isto é
- **Reflexiva** - $f \in O(f)$
- **Transitiva** - $f \in O(g), g \in O(h) \implies f \in O(h)$

---

### Demonstração

- **Reflexiva** - tomando $m=1$ e $n=1$, temos que $f(n) \leq m \cdot f(n)$ para todo $n \geq k$. Logo $f$ domina assintoticamente $f$ e $(f,f) \in R$
- **Transitiva** - sejam $(f,g),(g,h) \in R$, então existem constantes positivas $m_1, k_1, m_2, k_2$ tais que
	$$
	\begin{align*}
	& f(n) \leq m_1 \cdot g(n), \quad \forall n \geq k_1\\
	& g(n) \leq m_2 \cdot h(n), \quad \forall n \geq k_2
    \end{align*}
  $$
  Logo, $f(n) \leq m_1m_2 \cdot h(n), \quad \forall n \geq \max\{k_1, k_2\}$, de modo que $(f,h) \in R$.

---

Tags: #paa

