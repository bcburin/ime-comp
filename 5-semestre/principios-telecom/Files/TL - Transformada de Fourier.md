# Par de Transformadas de Fourier

---

### Definição

As funções $g(t) \leftrightarrow G(f)$ de um dado sinal formam um **par de transformadas de Fourier**. Uma pode ser obtida a partir da outra por meio das equações de síntese e de análise, conforme a seguir.

$$
\begin{align*}
&\boxed{
G(f) = \int_{-\infty}^{\infty} g(t) e ^ {-j\,2\pi f t}\,\mathrm{d}t
} \quad && \text{(Equação de análise)}\\\\
&\boxed{
g(t) = \int_{-\infty}^\infty G(f)e^{j\,2\pi f t} \,\mathrm{d}t
} && \text{(Equação de síntese)}
\end{align*}
$$

Além disso, diz-se que

- $G(f)$ => representação do sinal no domínio da frequência, obtida pela transformada **direta** de Fourier

- $g(t)$ => representação do sinal no domínio do tempo, obtida pela transformada **inversa** de Fourier


---

### Notação

Se $g(t)$ representa um sinal no domínio do tempo, então sua transformada de Fourier no domínio da frequência  $G(f)$ é representada da seguinte maneira

$$
\mathcal{F}[g(t)] = G(f)
$$

Similarmente, sua transformada inversa é denotada por

$$
\mathcal{F}^{-1}[G(f)] = g(t)
$$

---

### Exemplo 1

Seja o sinal determístico e aperiódico $g$, dado no domínio do tempo por $g(t) = u(t)\,e^{-at}$. Nesse caso

$$
\begin{align*}
\mathcal{F}[g(t)]
&= \int_{-\infty}^{\infty} u(t)e^{-(at+j\,2\pi ft)}\,\mathrm{d}t
= \int_{0}^{\infty} e^{-(at+j\,2\pi ft)}\,\mathrm{d}t\\
&= -\frac{e^{-(a+j\,2\pi f)t}}{a+j\,2\pi f}\Big|_0^\infty 
= \frac{1}{a + j\,2\pi f} = G(f)
\end{align*}
$$

Assim, a representação do sinal no domínio da frequência é complexa, e tem-se

$$
\begin{align*}
& |G(f)| = \frac{1}{\sqrt{a^2+4\pi^2f^2}}\\\\
& \mathrm{arg\big(G(f)\big)} = - \arctan \frac{2\pi f}{a}
\end{align*}
$$

---

*Obs: a função $u(t)$ é a **função degrau unitário**, definida por*

$$
u(t) = 
\begin{cases}
	0, \quad t < 0 \\\\
	1, \quad t \geq 0 
\end{cases}
$$

---

### Exemplo 2

Seja o sinal determístico e aperiódico $g$, dado no domínio do tempo por $g(t) = u(-t)\,e^{at}$. Nesse caso

$$
\begin{align*}
\mathcal{F}[g(t)]
&= \int_{-\infty}^{\infty} u(-t)e^{(a-j\,2\pi f)t}\,\mathrm{d}t
= \int_{-\infty}^{0} e^{(a-j\,2\pi f)t}\,\mathrm{d}t\\
&= \frac{e^{(a-j\,2\pi f)t}}{a-j\,2\pi f}\Big|_{-\infty}^0 
= \frac{1}{a - j\,2\pi f} = G(f)
\end{align*}
$$

Assim, a representação do sinal no domínio da frequência é complexa, e tem-se

$$
\begin{align*}
& |G(f)| = \frac{1}{\sqrt{a^2+4\pi^2f^2}}\\\\
& \mathrm{arg\big(G(f)\big)} = \arctan \frac{2\pi f}{a}
\end{align*}
$$

---

### Exemplo 3

Seja o sinal determístico e aperiódico $g$, dado no domínio do tempo por $g(t) = u(-t)\,e^{at} + u(t)e^{-at} = e^{-a|t|}$. Nesse caso, por [[TL - TF Linearidade|linearidade]]

$$
\begin{align*}
\mathcal{F}[g(t)] 
&= \mathcal{F}[u(-t)e^{at}] + \mathcal{F}[u(t)e^{-at}] \\
&= \frac{1}{a - j\,2\pi f} + \frac{1}{a + j\,2\pi f}\\
&=  \frac{2a}{a^2 + 4\pi^2f^2}
\end{align*}
$$

---

Tags: #principios-telecom 