
# Busca em Largura

---

### Definição

Expandir o nó mais próximo da raiz. Em geral, todos os nós na mesma profundidade são expandidos, antes dos nós do nível seguinte.

**Implementação** - colocando as folhas a serem expandidas em uma **fila**, o que permite uma travessia em nível.

---

### Propriedades

- **Completa?** Sim, se $b$ é finito
- **Tempo?** $1 + b + b^2 + \cdots + b^d = O(b^{d+1})$
- **Espaço?** $O(b^{d+1})$ (mantém todos os nós na memória)
- **Ótima?** Sim, se todas as ações tiverem o mesmo custo

---

Tags: #inteligencia-artificial

