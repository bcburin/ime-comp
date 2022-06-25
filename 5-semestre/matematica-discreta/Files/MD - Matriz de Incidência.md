# Matriz de Incidência

---

### Definição

Seja $G=(V,E)$ um [[MD - Multigrafo|multigrafo]] não dirigido com $V=\{v_1,v_2,\dots,v_n\}$ e arestas  $E=\{e_1,e_2,\dots,e_m\}$. Define-se a **matriz de incidência** $M=(m_{ij})\in M_{n\times m}(\mathbb{Z}_+)$ tal que

$$
m_{ij} = 
\begin{cases}
1, \quad & \text{se $m_j$ incide sobre $v_i$ } \\\\ 
0, \quad & \text{caso contrário } \\ 
\end{cases}
$$

*Obs: como cada aresta incide em, no máximo, dois vértices, cada coluna de $M$ tem, no máximo, dois valores $1$.*

---

Tags: #mat-discreta 