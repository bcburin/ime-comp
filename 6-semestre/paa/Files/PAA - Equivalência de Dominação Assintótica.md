
# Equivalência de Dominação Assintótica

---

### Teorema

Seja $\mathcal{F}$ o conjunto das funções de $\mathbb{N}$ e em $\mathbb{R}$. A [[MD - Relação sobre um conjunto|relação]] $\equiv$ sobre $\mathcal{F}$ das funções que [[PAA - Dominação Assintótica|dominam assintoticamente]] uma à outra é uma [[MD - Relação de Equivalência|relação de equivalência]]

$$
 f \equiv g \iff f \in O(g) \text{ e } g \in O(f)
$$

---

### Demonstração

- **Reflexiva** - tomando $m=1$ e $n=1$, temos que $f(n) \leq m \cdot f(n)$ para todo $n \geq k$. Logo $f$ domina assintoticamente $f$ e $f \equiv f$
- **Simétrica** - segue direto da definição
- **Transitiva** - sejam $f \equiv g$ e $g \equiv h$, então $f$ é dominada por $g$ e $g$ é dominada por $h$. Da [[PAA - Transitividade e Reflexividade da Dominação Assintótica|transitividade]], $f$ é dominada assintoticamente por $h$. Seguindo o caminho inverso, chegamos a que $h$ é dominada assintoticamente pot $f$. Logo $f \equiv h$.


---

Tags: #paa

