
# Número de Ciclos a partir de Árvore Geradora

---

### Teorema

Seja $G$ um [[PAA - Grafo|grafo]] e $T$ sua [[PAA - Todo Grafo Conexo Possui Árvore Geradora|árvore geradora]]. Se $e \in E(G) - E(T)$, então $T + e$ possui exatamente um ciclo.

---

### Demonstração

Seja $e=(v,w)$. Como $T$ é uma [[PAA - Árvore|árvore]], então existe um único caminho $P$ de $v$ a $w$ em $T$^[[[PAA - Caracterização de Árvore (Número de Caminhos)]]]. Então $P + e$ é um [[PAA - Ciclo|ciclo]] em $T+e$. Ademais, qualquer ciclo em $T+e$ deve passar por $e$, pois $T$ é [[PAA - Grafo Acíclico|acíclico]]. Logo existe unicamente o ciclo $P+e$ em $T+e$.

---

Tags: #paa

