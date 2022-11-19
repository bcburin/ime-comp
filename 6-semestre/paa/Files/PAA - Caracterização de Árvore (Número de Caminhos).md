
# Caracterização de Árvore por Número de Caminhos

---

### Teorema

Um [[PAA - Grafo|grafo]] $G$ é uma [[PAA - Árvore|árvore]] se e só se existir um único caminho entre cada par de vértices distintos de $G$.

---

### Demonstração

**(IDA)** Seja $G$ uma árvore e sejam $v,w \in V(G)$. Como $G$ é conexo, então existe um [[PAA - Caminho|caminho]] entre $v$ e $w$ em $G$. Suponha, por absurdo, que dois caminhos $P_1$ e $P_2$ entre $v$ e $w$ sejam distintos. Sejam $s_1$ e $s_2$ dois vértices pertencentes a $P_1 \cap P_2$ tal que não todos os vértices internos ao trecho $s1$ -> $s_2$ em $P_1$ e $P_2$ sejam distintos (veja que $s_1$ e $s_2$ sempre existem, pois, no pior caso, faz-se $s_1 =v$ e $s_2=w$). Nesse caso, os trechos $s1$ -> $s_2$ em $P_1$ e $P_2$ definem um ciclo, o que é um absurdo, já que $G$ é uma árvore. Logo, $P_1=P_2$.

**(VOLTA)** Seja $G$ um grafo tal que, entre cada par de vértices distintos em $G$, exista um único caminho. Portanto, é direto que $G$ é [[PAA - Grafo Conexo|conexo]]. Suponha, por absurdo, que $G$ possua um [[PAA - Ciclo|ciclo]] $C$. Sejam $v$ e $w$ dois vértices de $G$. A partir do ciclo $C$, podem-se definir dois caminhos distintos entre $v$ e $w$, o que é um absurdo, pois contradiz a hipótese. Logo, $G$ é [[PAA - Grafo Acíclico|acíclico]]. Como $G$ é conexo e acíclico, então $G$ é uma árvore.

---

Tags: #paa

