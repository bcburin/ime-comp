# Grafo Bipartido

---

### Definição

Um [[MD - Grafo|grafo]] é dito **bipartido** se existe uma partição do conjunto de seus vértices em dois conjuntos disjuntos tal que quaisquer dois elementos no mesmo conjunto não sejam adjacentes.

---

### Condição necessária e suficiente

Um é bipartido se e só se

- é acíclico; ou
- todos os seus [[MD - Ciclo de um Grafo|ciclos]] têm comprimento par.

*Obs: essa condição pode ser verificada, na prática, vendo se é possível colorir o gráfico com duas cores.*  

---

### Grafo bipartido completo

Um grafo $K_{m,n}=(V_{m,n},E)$ é um grafo **bipartido completo** se existe uma partição $\{V_m,V_n\}$ de $V_{m,n}$, com $|V_m|=m$ e $|V_n|$, que satisfaz as condições abaixo

- $v_i,v_j \in V_m \quad\implies\quad v_i \not\sim v_j$
- $v_i,v_j \in V_n \quad\implies\quad v_i \not\sim v_j$
- $v_i \in V_m, v_j \in V_n \quad\implies\quad v_i \sim v_j$

*Obs: as duas primeiras condições garantem que ele é bipartido, a última, que ele é bipartido completo.*

---

Tags: #mat-discreta 