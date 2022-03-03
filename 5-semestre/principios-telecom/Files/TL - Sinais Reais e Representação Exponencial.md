# Sinais Reais

---

### Teorema

Seja $g$ um sinal **real** que atenda às [[TL - Representação do sinal por série de Fourier#Condições de Dirichlet|condições de Dirichlet]]. Então, sendo $G_n$ os coeficientes de sua [[TL - Série de Fourier Exponencial|representação exponencial]], valerá a relação

$$
G_n = G_{-n}^*
$$

Isto é, o [[TL - Espectros de Amplitude e Fase#Definição|espectro de amplitude]] $|G_n|\,\times\, f$ será uma função par, e o [[TL - Espectros de Amplitude e Fase#Definição|espectro de fase]] $\mathrm{arg}(G_n) \,\times\, f$ será uma função ímpar.

---

### Demonstração

Como $g$ é um sinal real, então seus coeficientes $a_n$ e $b_n$ de sua [[TL - Representação do sinal por série de Fourier|série de Fourier]] também o serão. Como $G_n$ e $G_{-n}$ são definidos conforme a seguir

$$
G_n = \frac{a_n-jb_n}{2} \quad\quad\quad G_{-n} = \frac{a_n+jb_n}{2}
$$

Então teremos

$$
G_{-n}^* = \frac{a_n-jb_n}{2} = G_n
$$

Assim, 

$$
\begin{align*}
	& |G_{-n}| = |G_{-n}^*| = |G_n| \\\\
	& \mathrm{arg}(G_{-n}) = -\mathrm{arg}(G_{-n}^*) = -\mathrm{arg}(G_n)
\end{align*}
$$

---

Tags: #principios-telecom 