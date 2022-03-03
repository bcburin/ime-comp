# Série de Fourier Exponencial

---

### Teorema

Dado um sinal $g(t)$ que atende às [[TL - Representação do sinal por série de Fourier#Condições de Dirichlet|condições de Dirichlet]], ele pode ser expresso como uma série da forma a seguir

$$
g(t) = \sum\limits_{-\infty}^{\infty} G_n e^{j\,2\pi nft}
$$

Em que os coeficientes $G_n$ são dados por

$$
G_n = \frac{1}{T} \int_{-T/2}^{T/2}g(t)\,e^{-j\,2\pi nft}\,\mathrm{d}t
$$

---

### **Demonstração**

Tomando a representação em [[TL - Representação do sinal por série de Fourier#Série de Fourier|Série de Fourier]] e fazendo as substituições
 
$$
\begin{align*}
&\cos{\theta} = \frac{e^{j \theta} + e^{-j \theta}}{2}\\
&\sin{\theta} = \frac{e^{j \theta} - e^{-j \theta}}{2j} 
\end{align*}
$$

Obtemos

$$

\begin{align*}
&g(t) = a_0 + \sum\limits_{n=1}^\infty \left[ a_n \left(\frac{e^{j2\pi fn t} + e^{-j2\pi fnt}}{2}\right) + b_n j\left(\frac{-e^{j2\pi fn t} + e^{-j2\pi fnt}}{2}\right) \right] \\\\
&g(t) = a_0 + \sum\limits_{n=1}^\infty \left[ e^{j2\pi fnt} \left(\frac{a_n - jb_n}{2}\right) + e^{-j2\pi fnt} \left(\frac{a_n + jb_n}{2}\right) \right]
\end{align*}
$$

Definindo

$$
G_n = \frac{a_n-jb_n}{2} \quad\quad\quad G_{-n} = \frac{a_n+jb_n}{2}
$$

Assim,

$$
\begin{align*}
&g(t) = a_0 + \sum\limits_{n=1}^{\infty} G_n e^{j2\pi f nt} + \sum\limits_{n=1}^{\infty} G_{-n} e^{-j2\pi f nt}\\
\implies\quad & \boxed{g(t) = \sum\limits_{-\infty}^{\infty} G_n e^{j\,2\pi f nt}}
\end{align*}
$$

com $G_0 = a_0$. Ademais, note que

$$
\begin{align*}
G_n &= \frac{a_n-jb_n}{2} = \frac{1}{2} \frac{2}{T} \int_{-T/2}^{T/2}g(t)\big[\cos(2\pi fnt) - j\sin(2\pi fnt)\big]\,\mathrm{d}t\\\\
  & = \frac{1}{T} \int_{-T/2}^{T/2}g(t)\,e^{-j2\pi nft}\,\mathrm{d}t\\\\
G_{-n} &= \frac{a_{-n}+jb_{-n}}{2} = \frac{1}{2} \frac{2}{T} \int_{-T/2}^{T/2}g(t)\big[\cos(2\pi fnt) + j\sin(2\pi fnt)\big]\,\mathrm{d}t\\\\
   & = \frac{1}{T} \int_{-T/2}^{T/2}g(t)\,e^{-j2\pi (-n)ft}\,\mathrm{d}t\\\\
G_0 & = a_0 = \frac{1}{T} \int_{-T/2}^{T/2} g(t)\,\mathrm{d}t
\end{align*}
$$

De modo que, para qualquer caso

$$
\boxed{
G_n = \frac{1}{T} \int_{-T/2}^{T/2}g(t)\,e^{-j\,2\pi nft}\,\mathrm{d}t
}
$$

---

### Exemplo

Seja um sinal $g$ periódico com período $T_0$ e $T<T_0$, de modo que

$$
g(t) = 
\begin{cases}
	A, \quad -\frac{T}{2} < t < \frac{T}{2} \\\\
	0, \quad -\frac{T_0}{2} < t < -\frac{T}{2} \text{ ou } \frac{T}{2} < t < \frac{T_0}{2}
\end{cases}
$$

Nesse caso, 

$$
\begin{align*}
G_n 
&= \frac{1}{T_0} \int_{-T_0/2}^{T_0/2}g(t)e^{-j\,2\pi nft}\,\mathrm{d}t
= \frac{A}{T_0} \int_{-T/2}^{T/2}e^{-j \, 2\pi nft}\,\mathrm{d}t\\\\
&= \frac{A}{T_0} \left( -\frac{e^{-j\,\pi nfT}}{j\,2\pi nf} +  \frac{e^{j\,\pi nfT}}{j\,2\pi nf}\right)
= \frac{AT}{T_0} \frac{1}{\pi nfT}\left(\frac{e^{j\,\pi nfT}-e^{-j\,\pi nfT}}{2j}\right)\\\\
&= \frac{AT}{T_0} \frac{\sin(\pi nft)}{\pi nfT}
\end{align*}
$$

Logo, 

$$
\boxed{ G_n = \frac{AT}{T_0} \mathrm{sinc} (\frac{nT}{T_0}) }
$$

Pois $f=1/T_0$.

---

### Funçao $\mathrm{sinc}$

$$
\mathrm{sinc}(x) = \frac{\sin(\pi x)}{\pi x}
$$

---

Tags: #principios-telecom 