# Homomorfismo

---

### Definição

Os grupos $(G,\oplus)$ e $(H,\otimes)$ são **homomorfos** se existe $\varphi: G \to H$ tal que, para todo $g_1,g_2 \in G$

$$
\varphi(g_1 \oplus g_2) = \phi(g_1) \otimes \phi(g_2) 
$$

Nesse caso, $\varphi$ é dito seu **homomorfismo**.

---

### Teoremas

Sejam $(G,\otimes)$ e $(G',\otimes)$ homomorfos com $\varphi$, então

- $\varphi(\varepsilon) = \varepsilon'$
- $\varphi(x^{-1}) = \big(\varphi(x)\big)^{-1}$


---

### Exemplo

A função $\varphi:(\mathbb{Z}_2,\oplus_2) \to (\mathbb{Z}_4,\oplus_4)$ tal que $\varphi(0) = 0$ e $\varphi(1) = 2$ é um homomorfismo. De fato

$$
\begin{cases}
	& \varphi(0 \oplus_2 1) = \varphi(1) = 2 \\\\
	& \varphi(0) \oplus_4 \varphi(1) = 0 \oplus_4 2 = 2
\end{cases}
$$


$$
\begin{cases}
	& \varphi(1 \oplus_2 1) = \varphi(0) = 0 \\\\
	& \varphi(1) \oplus_4 \varphi(1) = 2 \oplus_4 2 = 0
\end{cases}
$$

---

Tags: #mat-discreta 