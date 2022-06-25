# Isomorfismo entre Grafos

---

### Definição

Sendo $G_1=(V_1,E_1)$ e $G_2=(V_2,E_2)$ [[MD - Grafo|grafos]], eles são ditos **isomorfos** se e só se existe uma bijeção $\phi: V_1 \to V_2$ tal que, para todo $u,v \in V_1$

$$
u \sim_{1} v \quad\iff\quad \phi(u) \sim_{2} \phi(v)
$$

Ou seja, se dois vértices em $V_1$ são adjacentes se e só se suas imagens são adjacentes em $V_2$. Quando há isomorfismo, denota-se $G_1 \cong G_2$.

---

### Condições necessárias

- Os dois grafos têm o mesmo número de vértices
- Os dois grafos têm o mesmo número de arestas
- Os dois grafos têm o mesmo número de vertices de [[MD - Grau de um Vértice|grau]] $n$, para $0 \leq n \leq |V_1|$.

---

Tags: #mat-discreta 