---
alias: MST, Minimum Spanning Tree
---

# Árvore Geradora Mínima

---

### Problema

Para um [[PAA - Grafo Conexo|grafo conexo]] $G=(V,E)$ com pesos definidos $w(e) \geq 0$ para todo $e \in E$, o **problema da árvore geradora mínima** consiste em encontrar um subconjunto $E(T) \subseteq E$ tal que $T=(V,E(T))$ seja uma [[PAA - Árvore Geradora|árvore geradora]] de $G$ e que a soma dos pesos das arestas seja a menor possível.

Note que, segundo [[PAA - Todo Grafo Conexo Possui Árvore Geradora|este teorema]], todo grafo conexo possui uma árvore geradora mínima.

*Obs: a solução não necessariamente é única. Podem existir duas árvores geradoras distintas, ambas com a soma de pesos mínima.*

---

### Algoritmos

- [[PAA - Algoritmo de Prim]]
- [[PAA - Algoritmo de Kruskal]]

---

Tags: #paa

