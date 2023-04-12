---
alias: Busca A*
---

# Busca A*

---

### Definição

**Ideia** - a função de avaliação deve evitar expandir caminhos que já são caros

**Função de avaliação** $f(n) = g(n) + h(n)$
- $g(n)$ -> custo desde o nó inicial até o nó $n$
- $h(n)$ -> custo estimado do nó $n$ até o nó objetivo
- $f(n)$ -> custo estimado da solução de menor custo passando por $n$

---

### Propriedades

- **Completa?** Sim
- **Tempo?** Exponencial, no pior caso
- **Espaço?** Mantém todos os nós na memória
- **Ótima?** Sim, a primeira solução encontrada é ótima
- **Otimamente eficiente**
	- Nenhum outro algoritmo de busca ótimo tem garantia de expandir um número de nós menor que $A^*$. Isso porque qualquer algoritmo que não expande todos os nós com $f(n) < C^*$ corre risco de omitir uma solução ótima

---

Tags: #inteligencia-artificial

