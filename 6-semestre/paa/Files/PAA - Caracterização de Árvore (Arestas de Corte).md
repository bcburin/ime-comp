
# Caracterização de Árvore por Arestas de Corte

---

### Teorema

Seja um [[PAA - Grafo Conexo|grafo conexo]] $G=(V,E)$. $G$ é uma [[PAA - Árvore|árvore]] se e só se todas suas arestas forem [[PAA - Aresta de Corte|arestas de corte]].

---

### Demonstração

**(IDA)** Seja $G$ uma árvore. Logo, $G$ é conexo e [[PAA - Grafo Acíclico|acíclico]] por definição. Logo, nenhuma aresta de $G$ pertence a algum ciclo. Portanto, todas as arestas de $G$ são arestas de corte^[[PAA - Caracterização de Árvore (Arestas de Corte)]].


**(VOLTA)** Suponha que todas as arestas de $G$ sejam arestas de corte. Logo, nenhuma aresta está contida em algum ciclo^[[PAA - Caracterização de Árvore (Arestas de Corte)]]. Portanto, $G$ é acíclico (caso houvesse ciclo, esse ciclo conteria alguma aresta de $G$). Como $G$ é conexo, por hipótese, e acíclico, então $G$ é uma árvore.

---

Tags: #paa

