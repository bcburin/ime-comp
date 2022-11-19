
# Heurística Admissível Implica Busca em Árvore Ótima

---

### Teorema

Se a heurística $h(n)$ é [[IA - Heurística Admissível|admissível]], então $A^*$ usando **busca em árvore** é ótima.

---

### Demonstração

Seja $G$ um **nó objetivo não ótimo** pertencente à borda e seja $C^*$ o custo da solução ótima. Como $G$ é não ótimo então $f(G) > C^*$.Seja um nó qualquer $n$ da borda que está num caminho de solução ótima. Como $h$ é admissível

$$
h(n) \leq h^*(n) \implies g(n) + h(n) \leq g(n) + h^*(n) = C^*
$$

Logo, $f(n) = g(n) + h(n) \leq C^* \leq f(G)$, de modo que o nó objetivo não ótimo não será expandido. Portanto, o algoritmo só poderá retornar uma solução ótima.

---

Tags: #inteligencia-artificial

