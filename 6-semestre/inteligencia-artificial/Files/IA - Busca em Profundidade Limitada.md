
# Busca em Profundidade Limitada

---

### Definição

[[IA - Busca em Profundidade|Busca em profundidade]] com limite de profundidade $L$, isto é, nós com profundidade $L$ não tem sucessores. Útil quando se tem algum conhecimento sobre os limites de profundidade a partir da descrição do problema (*e.g.* se se trata de achar o menor caminho em um grafo, a profundidade não pode ser maior que o diâmetro do grafo)

**Implementação recursiva**

---

### Propriedades

- **Completa?**
	- Não, a busca pode ter terminado sem ter achado a solução, que pode estar a uma profundidade maior que $L$
- **Tempo** - $O(b^L)$
- **Espaço** - $O(bL)$
- **Ótima?** Não

---

Tags: #inteligencia-artificial

