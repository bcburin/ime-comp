
# Algoritmo de Prim

---

### Pseudocódigo

```
procedimento PRIM(G,w)
	B = {v} onde v vértice arbitrário 
	E(T) = {}
	enquanto B != V faça
		achar e = (x,y) aresta de peso mínimo tal que x in B e y in V-B
		E(T) = E(T) union {E}
		B = B union {y}
	retornar E(T)
```


---

Tags: #paa

