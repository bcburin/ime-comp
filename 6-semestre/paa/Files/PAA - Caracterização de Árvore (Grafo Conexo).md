
# Caracterização de Árvore (Grafo Conexo)

---

### Teorema

Se $G=(V,E)$ é um [[PAA - Grafo Conexo|grafo conexo]] tal que $|E| = |V| - 1$, então $G$ é uma [[PAA - Árvore|árvore]].

---

### Demonstração

Suponha que exista um ciclo $C$ em $G$. Seja $e \in E$ uma aresta em $C$ e $n=|V|$. Então o grafo $G-e$ é conexo contendo $n$ vértices e $n-2$ arestas, o que é um absurdo ^[[[PAA - Todo Grafo Conexo Possui Árvore Geradora#Corolário]]]. Logo, $G$ é acíclico. Como $G$ também é conexo, então $G$ é uma árvore.


---

Tags: #paa

