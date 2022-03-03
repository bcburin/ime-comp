# Representação do sinal por série de Fourier

---

### Condições de Dirichlet

Todo sinal $g(t)$ com [[TL - Sinais periódicos e aperiódicos|período]] $T$ que satisfaça as condições abaixo *(condições de Dirichlet)* pode ser representado com combinação linear de senóides e cossenóides com frequências múltuplas de $f=1/T$

- $g$ deve possuir um número finito de máximos e mínimos
- $g$ deve possuir um número finito de descontinuidades
- $g$ deve ser absolutamente integrável
- $g$ deve ser limitada

---

### Série de Fourier

Representação de sinais periódicos por série de Fourier

$$
\boxed{
g(t) = a_0 + \sum_{n=1}^\infty \big[ a_n cos(2\pi n f t) + b_n \sin (2\pi n f t) \big] 
}
$$

Em que

$$
\begin{align*}
&\boxed{
a_0 = \frac{1}{T} \int_{-T/2}^{T/2}g(t)\,\mathrm{d}t
}\\\\
&\boxed{
a_n = \frac{2}{T} \int_{-T/2}^{T/2}g(t)\cos(2\pi n f t)\,\mathrm{d}t
}\\\\
&\boxed{
a_n = \frac{2}{T} \int_{-T/2}^{T/2}g(t)\sin(2\pi n f t)\,\mathrm{d}t
}
\end{align*}
$$

---

Tags: #principios-telecom 