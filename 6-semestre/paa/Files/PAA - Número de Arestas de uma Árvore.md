
# Número de arestas de uma Árvore

---

### Teorema

Se $G=(V,E)$ é uma [[PAA - Árvore|árvore]], então $|E| = |V| - 1$

---

### Demonstração

Prova por indução no número de vértices $n = |V|$.

Se $n=1$, então $G$ não possui arestas $(|E|=0)$, logo o teorema vale.

Suponha que o teorema seja válido para todas as árvores com menos de $n$ vértices.

Seja $G$ uma árvore com $V(G)=n>1$ e considere uma aresta $(v,w)\in E(G)$. Então o grafo $G-\{(v,w)\}$ possui exatamente dois [[PAA - Componente Conexo|componentes conexos]], pois a aresta $(v,w)$ é o único caminho entre $v$ e $w$^[[[PAA - Caracterização de Árvore (Número de Caminhos)]]]. Sejam $G_1$ e $G_2$ os componentes conexos. Como $V(G_1) < n$, $V(G_2) < n$ e $V(G) = V(G_1) + V(G_2)$, então

$$
|E(G)| = |E(G_1)| + |E(G_2)| + 1 = V(G_1) - 1 + V(G_2) - 1 + 1
$$
Portanto
$$
|E(G)| = V(G) - 1
$$
O que completa a indução.

---

### Corolário

Toda árvore $G=(V,E)$ com $|V| > 1$ possui pelo menos duas folhas.

---

Tags: #paa

