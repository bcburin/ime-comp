
# Busca em Profundidade

---

### Definição

Expande o nó não-expandido mais profundo na borda atual.

**Implementação** - colocando as folhas a serem expandidas em uma **pilha**.

---

### Propriedades

- **Completa?** 
	- Não, falha em espaços com profundidade infinita ou espaços com loops
- **Tempo** - $O(b^m)$
	- péssimo quando $m$ (comprimento máximo de qualquer caminho no espaço de estados) é muito maior que $d$ (profundidade do nó objetivo menos profundo)
	- Se há muitas soluções, pode ser mais eficiente que a busca em extensão
- **Espaço** - $O(bm)$
	- Espaço linear para espaços finitos ($bm+1$ nós armazenados)
- **Ótima?** Não



---

Tags: #inteligencia-artificial

