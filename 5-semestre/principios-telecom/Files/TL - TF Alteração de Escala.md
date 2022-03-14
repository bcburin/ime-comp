# Alteração de Escala

---

### Teorema

Se $g(t) \leftrightarrow G(f)$, então para um $a \in \mathbb{R}^*$

$$
g(at) \leftrightarrow \frac{1}{|a|}G\left(\frac{f}{a}\right)
$$

- $|a|>1$ => **compressão** no tempo e **dilatação** na frequência
- $|a|<1$ => **dilatação** no tempo e **compressão** na frequência

Para $a=-1$, tem-se $g(-t) \leftrightarrow G(-f)$.

---

### Demonstração

Se $g(t) \leftrightarrow G(f)$, da definição de [[TL - Transformada de Fourier|transformada de Fourier]] segue-se que

$$
\mathcal{F}[g(at)] = \int_{-\infty}^{\infty} g(at)e^{-j\,2\pi ft}\,\mathrm{d}t
$$

Fazendo a mudança $u=at \;\longrightarrow\; \mathrm{d}u = a\, \mathrm{d}t$

$$
\mathcal{F}[g(at)] =

\begin{cases}
& \frac{1}{a}\int_{-\infty}^{\infty} g(u)e^{-j\,2\pi \frac{f}{a}u}\,\mathrm{d}u, \quad a > 0 \\\\

& \frac{1}{a}\int_{\infty}^{-\infty} g(u)e^{-j\,2\pi \frac{f}{a}u}\,\mathrm{d}u, \quad a < 0 \\
\end{cases}
$$

Ou, simplesmente

$$
\mathcal{F}[g(at)] = \frac{1}{|a|}\int_{-\infty}^{\infty} g(u)e^{-j\,2\pi \frac{f}{a}u}\,\mathrm{d}u \\
$$

Mas

$$
G(f) = \int_{-\infty}^{\infty} g(u)e^{-j\,2\pi fu}\,\mathrm{d}u
$$

De modo que

$$
\mathcal{F}[g(at)] = \frac{1}{|a|} G(\frac{f}{a})
$$

Completando a demonstração.

---

Tags: #principios-telecom 