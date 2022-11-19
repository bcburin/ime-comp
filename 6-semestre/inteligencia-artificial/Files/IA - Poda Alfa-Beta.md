
# Poda $\alpha-\beta$ 

---

Na [[IA - Estratégia Minimax|Estratégia Minimax]], o número de setados do jogo é exponencial em relação ao número de movimento. Usa a **Poda** $\alpha-\beta$ como uma *otimização* para calcular a decisão correta sem percorrer todos os nós da árvore.

- Supor a árvore de jogo gerada em profundidade
- Se, depois de gerar o valor de alguns dos sucessores do nó $n$, for possível provar que $n$ não é relevante para a solução, não é necessário gerar ou avaliar outros sucessores de $n$
- Dois tipos de poda
	- Poda em nó Max -> $\alpha$-corte
	- Poda em nó min -> $\beta$-corte

---

### $\alpha$-corte

Para um nó $n$ Max com pai $p$ Min
- Seja $\beta$ o menor valor minimax dos irmão de $n$ examinados até o momento
- Seja $\alpha$ o maior valor minimax dos filhos de $n$ examinados até o momento

Se, em algum momento, chega-se a  $\alpha \geq \beta$, pode-se parar de expandir os filhos de $n$, já que $n$ nunca será escolhido.

---

### $\beta$-corte

Para um nó $n$ Min com pai $p$ Max
- Seja $\alpha$ o maior valor minimax dos irmão de $n$ examinados até o momento
- Seja $\beta$ o menor valor minimax dos filhos de $n$ examinados até o momento

Se, em algum momento, chega-se a  $\alpha \geq \beta$, pode-se parar de expandir os filhos de $n$, já que $n$ nunca será escolhido.

---

Tags: #inteligencia-artificial

