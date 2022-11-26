---
alias: DFS
---

# Busca em Profundidade

---

### Definição

Uma [[PAA - Busca Geral em Grafo|busca geral]] na qual a cada iteração se escolhe o vértice mais recentemente alcançado pela busca.

Para isso, costuma-se utilizar a estrutura de dados **pilha**.

**Complexidade de pior caso:** $O(n+m)$

---

### Pseudocódigo

```
procedimento DFS(G,s)
    procedimento P(v)
        marcar v
        inserir v na pilha Q
        para w em Adj(v) faça
	        se w não marcado então
		        visitar (v,w)
		        P(w)
		    senão
			    se w em Q e v,w não são consecutivos em Q então
				    visitar (v,w)
		remover v e Q
	desmarcar todos os vértices e arestas
	definir pilha vazia Q
	P(s)
```

---

Tags: #paa

