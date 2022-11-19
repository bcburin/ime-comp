
# Subgrafo Induzido

---

### Definição

O [[PAA - Grafo|grafo]] $G_2=\big(V(G_2), E(G_2)\big)$ é dito **subgrafo induzido** do grafo $G_1=\big(V(G_1), E(G_1)\big)$ se e só se $G_2$ é [[PAA - Subgrafo|subgrafo]] de $G_1$ e

$$
\forall v,w \in V(G_2), \quad (v,w) \in E(G_1) \implies (v,w) \in E(G_2)
$$

ou seja, todas as arestas que conectam vértices de $G_2$ em $G_1$ também estão em $G_2$. Nesse caso, fazendo $V=V(G_2) \subseteq V(G_1)$, diz-se que $G_2$ é o **subgrafo induzido** pelo pelo conjunto $V$ de $G_1$ e denota-se $G_2 = G_1[V]$. 

---

### Subgrafo induzido por arestas

Se $G_1=\big(V(G_1), E(G_1)\big)$ e $F \subset E(G_1)$ o **subgrafo induzido** por $F$ é o subgrafo $G_2=\big(V(G_2), E(G_2)\big)$ tal que $E(G_2) = F$ e $V(G_2) \subset V(G_1)$ é o conjunto dos vértices incidentes às [[PAA - Aresta|arestas]] em $F$.

---

### Notação

- $(G - v)$ significa $G[V(G) - \{v\}]$
- $(G-V')$ significa $G[V(G) - V']$, em que $V' \subset V(G)$ 

---

Tags: #paa

