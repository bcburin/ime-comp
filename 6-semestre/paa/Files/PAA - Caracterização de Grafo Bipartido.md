
# Caracterização de Grafo Bipartido

---

### Teorema

Um [[PAA - Grafo|grafo]] $G$ é [[PAA - Grafo Bipartido|bipartido]] se e só se todos os [[PAA - Ciclo|ciclos]] de $G$ possuem comprimento par.

---

### Demonstração

**(IDA)** Seja $G$ bipartido e $C=(v_1,\dots,v_k, v_1)$ um ciclo de $G$ e $V_1 \cup V_2 = V(G)$ a bipartição de $G$ tal que $v_i \in V_1$ para $i$ ímpar e $v \in V_2$ para $i$ par. Como $(v_k, v_1) \in E(G)$ e $v_1 \in V_1$, então $v_k \in V_2$, de modo que $k$ é par.

**(VOLTA)** Seja $G$ tal que todos seus ciclos tenham comprimento par. Suponha que $G$ seja conexo. Se não for, trabalhar com cada componente conexo. Seja $v \in V(G)$ um vértice qualquer. Definem-se
$$
\begin{align*}
& V_P(v) = \{w \in V(G)\;|\; d(v,w) \text{ par}\}\\
& V_I(v) = \{w \in V(G)\;|\; d(v,w) \text{ ímpar}\}
\end{align*}
$$
Como $d(v,v)=0$, então $v \in V_P(v)$, de modo que $V_P(c) \cup V_I(v) = V(G)$. Basta provar que não arestas entre dois vértices de $V_P(v)$ ou entre dois vértices de $V_I(v)$. Sejam $a,b \in V_P(v)$ e sejam $P_a$ e $P_b$ os caminhos mínimos entre $v$ e $a$ e entre $v$ e $b$, respectivamente. Seja $s$ o vértice de $P_a \cap P_b$ mais distante de $v$ (podendo ser $s=v$ para caminhos disjuntos fora $v$). 

Os trechos $v$ -> $s$ de $P_a$ e $P_b$ devem ter o mesmo comprimento, pois $P_a$ e $P_b$ são mínimos. Como os comprimentos de $P_a$ e $P_b$ têm ambos a mesma paridade, então os comprimentos dos trechos $s$ -> $a$ e $s$ -> $b$ também terão o mesmo comprimento, pois serão decrescidos do mesmo valor. Assim, a existência da aresta $(a,b)$ implicaria a existência de um ciclo de comprimento ímpar, o que nega a hipótese sobre $G$. Portanto, não há aresta entre os vértices de $V_P(v)$. Analogamente, demonstra-se que não há arestas entre os vértices de $V_I(v)$. Assim, $G$ é bipartido por $V_P(v)$ e $V_I(v)$.


---

Tags: #paa

