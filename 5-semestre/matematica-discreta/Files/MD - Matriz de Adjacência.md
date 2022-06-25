# Matriz de Adjacência

---

### Definição

Seja $G=(V,E)$ um [[MD - Multigrafo|multigrafo]] com $V=\{v_1,v_2,\dots,v_n\}$. Define-se a **matriz de adjacência** $A=(a_{ij})\in M_{n\times n}(\mathbb{Z}_+)$ tal que

$$
a_{ij} = \big|\{ v_{xy} \in E \;\big|\; v_x = v_i, v_y=v_j \}\big|
$$

Ou seja, $a_{ij}$ é o número de arestas conectando os vétices $v_i$ e $v_j$.

---

### Para grafos simples

Para [[MD - Grafo|grafos simples]], a matriz de adjacência se reduz a uma matriz booleana tal que

$$
a_{ij} = 
\begin{cases}
	1, \quad & v_iv_j \in E \iff v_i \sim v_j\\\\
	0 , \quad & v_iv_j \not\in E \iff v_i \not\sim v_j
\end{cases}
$$

---

### Para grafos não orientados

- Grafos não orientados, incluindo grafos simples e multigrafos não orientados, são representados por matrizes de adjacência simétricas.  
- Nesse caso, a soma de uma coluna (ou linha) representam o [[MD - Grau de um Vértice|grau]] do vértice relativo àquela coluna (ou linha).

---

Tags: #mat-discreta 