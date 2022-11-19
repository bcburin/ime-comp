
# Dominação Assintótica de Funções Logarítmicas

---

### Teorema

Se $b,c \in \mathbb{R}$ e $b > 1$ e $c > 1$, então

$$
O(\log_b{n}) = O(\log_c{n})
$$
---

### Demonstração

Se $b=c$, o resultado é trivial. Consideremos, pois, o caso $b \neq c$. Sabe-se que

$$
\log_b{n} =\frac{\log_c{n}}{\log_c{b}}  = \left(\frac{1}{\log_c{b}}\right) \cdot \log_c{n}
$$
Como tanto $b$ quanto $c$ são maiores que $1$, então a constante $(\log_c{b})$ e seu inverso são positivas, e essa relação vale, em particular, para todo $n \geq 2$. Portanto, $\log_b n \in O(\log_c{n})$. Então $O(\log_b{n}) \subseteq O(\log_c{n})$ ^[[[PAA - Subconjunto do Conjunto O]]]. Analogamente, demonstra-se $O(\log_c{n}) \subseteq O(\log_b{n})$, donde segue o resultado desejado.

---

Tags: #paa

