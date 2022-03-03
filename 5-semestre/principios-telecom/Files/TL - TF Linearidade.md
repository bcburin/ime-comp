# Linearidade

---

### Teorema

Seja $g(t) = c_1 g_1(t) + c_2 g_2(t)$, com $c_1, c_2 \in \mathbb{R}$, e $\mathcal{F}[g_1(t)] = G_1(f)$ e $\mathcal{F}[g_2(t)] = G_2(f)$. Então a [[TL - Transformada de Fourier|transformada de Fourier]] de $g(t)$ existe e é igual a

$$
\mathcal{F}[g(t)] = c_1 G_1(f) + c_2 G_2(f)
$$

---

### Demonstração

$$
\begin{cases}
	& \mathcal{F}[g_1(t)] = \int_{-\infty}^\infty g_1(t)e^{-j\,2\pi ft} \mathrm{d}t = G_1(f) \\\\
	& \mathcal{F}[g_2(t)] = \int_{-\infty}^\infty g_2(t)e^{-j\,2\pi ft} \mathrm{d}t = G_2(f)
\end{cases}
$$

Por linearidade das integrais, converge

$$
\int_{-\infty}^\infty [c_1g_1(t)e^{-j\,2\pi ft} + c_2g_2(t)e^{-j\,2\pi ft}] \,\mathrm{d}t 
= \int_{-\infty}^\infty g(t)e^{-j\,2\pi ft} \mathrm{d}t
= \mathcal{F}[g(t)]
$$

---

Tags: #principios-telecom 