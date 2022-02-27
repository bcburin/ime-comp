# Série de Fourier Exponencial

---

### Teorema

Dado um sinal $g(t)$ que atende às [[TL - Representação do sinal por série de Fourier#Condições de Dirichlet|condições de Dirichlet]], ele pode ser expresso como uma série da forma a seguir

$$
g(t) = \sum\limits_{n=-\infty}^{\infty} G_n e^{j 2\pi f nt}
$$

---

### **Demonstração**

Tomando a representação em [[TL - Representação do sinal por série de Fourier|Série de Fourier]] e fazendo as substituições
 
$$
\begin{align*}
&\cos{\theta} = \frac{e^{j \theta} + e^{-j \theta}}{2}\\
&\sin{\theta} = \frac{e^{j \theta} - e^{-j \theta}}{2j} 
\end{align*}
$$

Obtemos

$$

\begin{align*}
&g(t) = a_0 + \sum\limits_{n=1}^\infty \left[ a_n \left(\frac{e^{j2\pi fn t} + e^{-j2\pi fnt}}{2}\right) + b_n j\left(-\frac{e^{j2\pi fn t} + e^{-j2\pi fnt}}{2}\right) \right] \\\\
&g(t) = a_0 + \sum\limits_{n=1}^\infty \left[ e^{j2\pi fnt} \left(\frac{a_n - jb_n}{2}\right) + e^{-j2\pi fnt} \left(\frac{a_n + jb_n}{2}\right) \right]
\end{align*}
$$

---

### Exemplo

Onda quadrada de período $T_0$ e amplitudes $0$ e $A$. A amplitude é não nula durante o tempo $T < T_0$.

$$
G_n = \frac{AT}{T_0} \mathrm{sinc} (fnT)
$$

*Obs*

$$
\mathrm{sinc}(x) = \frac{\sin(\pi x)}{\pi x}
$$

---

Tags: #principios-telecom 