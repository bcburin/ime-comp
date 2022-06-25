# União de Grafos Complementares

---

### Teorema

Se $G=(V,E)$ é um [[MD - Grafo|grafo]] com $|V|=n$ e $G'=(V,E')$ é seu [[MD - Grafo Complementar|grafo complementar]], então

$$
G \cup G' = K_n
$$

Em que $K_n$ é o [[MD - Grafo Completo|grafo completo]] com $n$ vértices.

---

### Demonstração

Pela definição de [[MD - União de Grafos|união de grafos]], $G \cup G' = (V, E \cup E')$. Da definição de [[MD - Grafo Completo#Definição|grafo completo]], percebe-se que queremos provar

$$
u,v \in V \quad\implies\quad uv \in E \cup E'
$$

Para tanto, tome $u,v \in V$ quaisquer. Temos dois casos a considerar

- $uv \in E$ => nesse caso, tem-se direto $uv \in E \cup E'$
- $uv \not\in E$ => como define-se $E'=\{v_1v_2 \;\big|\; v_1v_2 \not\in E\}$, então $uv \in E'$ e $uv \in E \cup E'$

Portanto, $u,v \in V \quad\implies\quad uv \in E \cup E'$ e

$$
G=(V,E \cup E') = K_n
$$

Como queriamos provar.

---

Tags: #mat-discreta 