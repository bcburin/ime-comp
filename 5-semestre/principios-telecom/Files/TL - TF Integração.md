# Diferenciação

---

### Teorema

Se $g(t) \leftrightarrow G(f)$, então

$$
{
\int_{-\infty}^t g(\tau)\,\mathrm{d}\tau \leftrightarrow \frac{1}{j\,2\pi f}\,G(f) + \frac{1}{2}G(0)\delta(f)
}
$$

Em que $\delta$ é o [[TL - Delta de Dirac|Delta de Dirac]].

---

### Demonstração

Primeiramente, encontremos a [[TL - Transformada de Fourier|transformada]] da função $\mathrm{sgn}(t)$, definida como

$$
\mathrm{sgn}(t) = u(t) - u(-t) =

\begin{cases}
	 1, \quad &t > 0 \\
	 0, \quad &t = 0 \\
	-1, \quad &t<0
\end{cases}
$$

Assim, pode-se escrever

$$
\mathrm{sgn}(t) = \lim_{a \to 0}\Big[e^{-a}u(t) - e^{-a}u(-t)\Big]
$$

Tendo em vista [[TL - Transformada de Fourier#Exemplo 3|este exemplo]], temos que a transforma dessa função pode ser calculada como

$$
\begin{align*}
\mathcal{F}[\mathrm{sgn}(t)] 
&= \lim_{a \to 0} \left( \frac{1}{a+j\,2\pi f} - \frac{1}{a - j\,2\pi f}\right) \\
&= \lim_{a \to 0} \left(\frac{-j\,4\pi f}{a^2 + 4\pi^2f^2}\right) \\
&= \frac{1}{j\,\pi f}
\end{align*}
$$

Esse resultado nos permite calcular a transformada da função degrau unitário, uma vez que

$$
u(t) = \frac{1}{2} + \frac{1}{2}\,\mathrm{sgn}(t)
$$

De modo que, por [[TL - TF Linearidade|linearidade]]

$$
\mathcal{F}[u(t)] = \frac{1}{2}\,\delta(f) + \frac{1}{j\,2\pi f}
$$

Para uma função $g$, note que sua integral pode ser expressa como uma convolução com o [[TL - Delta de Dirac|Delta de Dirac]]

$$
\int_{-\infty}^t g(\tau)\,\mathrm{d}\tau = \int_{-\infty}^{\infty} g(\tau) u(t - \tau) \mathrm{d}\,\tau = g(t) * u(t)
$$

De modo que

$$
\begin{align*}
\int_{-\infty}^t g(\tau)\,\mathrm{d}\tau &\leftrightarrow G(f)\left( \frac{1}{j\,2\pi f} + \frac{1}{2} \delta(t) \right) \\\\
& \leftrightarrow \frac{G(f)}{j\,2\pi f} + \frac{1}{2} G(f) \delta(f) \\\\
& \leftrightarrow \frac{G(f)}{j\,2\pi f} + \frac{1}{2}G(0) \delta(f)
\end{align*}
$$

O  que completa a demonstração.

---

Tags: #principios-telecom 