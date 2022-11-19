
# Heurística Consistente

---

### Definição

Uma heurística é **consistente** (ou monotônica) se, para cada nó $n$ e para cada sucessor $n'$ de $n$ gerado por qualquer ação $a$, então

$$
h(n) \leq c(n,a,n') + h(n')
$$

---

### Condição sobre a função de avaliação

Se $h$ é consistente, então temos

$$
\begin{align*}
f(n') 
& = g(n') + h(n') \\
& = g(n) + c(n, a, n') + h(n') \\
& \geq g(n) + h(n) \\
& = f(n)
\end{align*}
$$

Logo, $f(n)$ é **não-decrescente** ao longo de qualquer caminho.

---

Tags: #inteligencia-artificial

