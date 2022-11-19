
# Estratégia Minimax

---

Estratégia para uma busca competitiva com **dois** agentes: Min e Max, que agem alternadamente.

- Construir uma árvore de jogo completa
- Raiz da árvore é o **estado inicial**
- Arestas são possíveis movimentos, levando a novos estados
- Rotular os nós terminais $t$ com uma **função de utilidade** $U(t)$
- Subindo pela árvore, rotular os nós não terminais de acordo com o algoritmo Min-Max

---

### Algoritmo

Para cada nó $n$ da árvore

$$
\mathrm{Valor-Minimax}(n) = 
\begin{cases}
 & U(n), \quad && n \text{ é terminal}  \\
 & \max_{x \in Succ(n)}{\mathrm{Valor-Minimax}(n) }, \quad && n \text{ é Max}   \\
 & \min_{x \in Succ(n)}{\mathrm{Valor-Minimax}(n) }, \quad &&n \text{ é Min}  \\
\end{cases}
$$

*Obs: A árvore deve ter profundidade finita para poder rotular os nós*

---

### Propriedades

Equivale a uma [[IA - Busca em Profundidade|busca em profundidade]] na árvore do jogo
- $m$ - profundidade máxima da árvore
- $b$ - movimentos válidos em cada caso

- **Completo?** Sim (se a árvore é finita)
- **Ótimo?** Sim (contra um oponente ótimo)
- **Complexidade de tempo?** $O(b^m)$
- **Complexidade de espaço?** $O(bm)$

*Obs: para xadrez $b \approx 35$ e $m \approx 100$*


---

Tags: #inteligencia-artificial

