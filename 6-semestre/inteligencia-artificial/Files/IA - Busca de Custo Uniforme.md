
# Busca de Custo Uniforme

---

### Definição

Expande o nó não expandido que tenha o caminho de menor custo

**Implementação** - fila prioritária dos nós ordenada pelos custos dos caminhos

---

### Propriedades

- **Completa?** Sim, se o custo de cada passo $\geq \varepsilon > 0$
- **Tempo?** Número de nós com $g(x) \leq$ custo da solução ótima, $O(b^{\lceil C^* / \varepsilon \rceil})$, onde $C^*$ é o custo da solução ótima
- **Espaço?** Número de nós com $g(x) \leq$ custo da solução ótima, $O(b^{\lceil C^* / \varepsilon \rceil})$
- **Ótima?** Sim, pois os nós são expandidos em ordem crescente de custo total


*Obs:*
- $g(x)$ -> custo do caminho até $x$

---

Tags: #inteligencia-artificial

