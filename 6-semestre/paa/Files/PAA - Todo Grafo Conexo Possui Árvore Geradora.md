
# Todo Grafo Conexo Possui Árvore Geradora

---

### Teorema

Todo [[PAA - Grafo Conexo|grafo conexo]] possui uma [[PAA - Árvore Geradora|árvore geradora]].

---

### Demonstração

Seja o grafo conexo $G=(V,E)$ com $E=(v_1,\dots,v_m)$. Defina a sequência $(G_1,\dots,G_m)$ dada por $G_1=G$ e

$$
G_{i+1} = 

\begin{cases}
& G_i - e, \quad &&\text{se } G_i - e \text{ for conexo} \\
& G_i, \quad &&\text{caso contrário}
\end{cases}
$$

para $1\leq i \leq m-1$. Por construção, $G_m$ é conexo e possui apenas as arestas de corte. Portanto $G_m$ é uma [[PAA - Árvore|árvore]]^[[[PAA - Caracterização de Árvore (Arestas de Corte)]]]. Além disso, como $G_m$ contém todos os vértices de $G$, então ele é um [[PAA - Subgrafo Gerador|subgrafo gerador]]. Logo, $G_m$ é a árvore geradora de $G$.

---

### Corolário

Se $G=(V,E)$ for um grafo conexo, então $|E| \geq |V| - 1$

##### Demonstração

Se $G$ é um grafo conexo, então ele possui uma árvore geradora $T$ tal que, da definição de [[PAA - Subgrafo Gerador|subgrafo gerador]]

- $V(T) = V(G) \implies |V(T)| = |V(G)|$
- $E(T) \subseteq E(G) \implies |E(T) \leq E(G)|$

Além disso, como $T$ é uma [[PAA - Árvore|árvore]], seu número de arestas é dado por ^[[[PAA - Número de arestas de uma Árvore]]]

$$
|E(T)| = |V(T)| - 1
$$

Donde segue o corolário.



---

Tags: #paa

