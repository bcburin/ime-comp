
# Caracterização de Aresta de Corte

---

### Teorema

Uma aresta do [[PAA - Grafo|grafo]] $G=(V,E)$ é [[PAA - Aresta de Corte|aresta de corte]] se e só se não houver ciclo de $G$ que a contenha.

---

### Demonstração


**(IDA)** Seja $e=(v,w) \in E$ uma aresta de corte de $G$. Suponha, por absurdo, que exista algum ciclo que contenha $e$. Nesse caso, no grafo $G-e$ ainda existiria um caminho ligando $v$ e $w$, de modo que o número de [[PAA - Componente Conexo|componentes conexos]] permaneceria inalterado, o que é um absurdo. Portanto, não existe ciclo contendo $e$.

**(VOLTA)** Suponha que não há ciclo contendo a aresta $e \in G$. Se $e$ não for uma aresta de corte, então existe um caminho $P$ ligando $v$ e $w$ em $G-e$. Assim, $P + e$ seria um ciclo em $G$, o que é um absurdo. Logo, $e$ é uma aresta de corte.

---

Tags: #paa

