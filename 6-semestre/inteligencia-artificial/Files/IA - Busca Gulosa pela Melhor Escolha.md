
# Busca Gulosa pela Melhor Escolha

---

### Definição

- A **função de avaliação** $f(n)=h(n)$ (heurística) é uma estimativa do **custo** desde o nó $n$ até o nó objetivo.
- A **busca gulosa pela melhor escolha** expande o nó que **parece** mais próximo do objetivo segundo a função heurística $h(n)$

*Obs: em um grafo cujos nós representam pontos de um mapa, a função de heurística $h(n)$ poderia ser, por exemplo, a distância em linha reta do nó $n$ ao nó destino*

---

- **Completa?** 
	- Não, pode ficar presa em loops
- **Tempo?**
	- $O(b^m)$ no pior caso, mas uma boa função heurística pode levar a uma redução substancial
- **Espaço?**
	- $O(b^m)$, pois mantém todos os nós na memória
- **Ótima?**
	- Não, pois é uma escolha heurística (gulosa)

---

Tags: #inteligencia-artificial

