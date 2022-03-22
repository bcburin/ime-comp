# Delta de Dirac

---

### Definição

O **Delta de Dirac** é definido como tendo as seguintes propriedades

$$
\begin{align*}
& \delta(t) = 0, \quad t \neq 0\\\\
& \int_{-\infty}^\infty \delta(t)\,\mathrm{d}t = 1
\end{align*}
$$

---

### Propriedades

- Relação com a função degrau unitário
   $$
  \begin{align*}
	& \int_{-\infty}^t \delta(t) \,\mathrm{d}t = u(t) \\\\
	& \delta(t) = \frac{\mathrm{d}u)t}{\mathrm{d}t}
  \end{align*} 
  $$

- Quando é fator de um integrando
   $$
   \int_{-\infty}^\infty \delta(t-t_0)g(t)\,\mathrm{d}t = g(t_0)
   $$
   
- Da propriedade acima,
  $$
  g(t)*\delta(t) = \int_{-\infty}^\infty \delta(t-\tau)g(\tau)\,\mathrm{d}\tau = g(t)
  $$
  
- Usando a propriedade da [[TL - TF Convolução|covolução]] para transformadas de Fourier,
  $$
  \mathcal{F}[\delta(t)] = 1
  $$
  
 - Da [[TL - TF Dualidade|dualidade]], temos os seguintes resultados
	 - Sinal DC 
	 	$$1 \leftrightarrow \delta(f)$$
	 - Função exponencial complexa 
	   $$e^{j\,2\pi f_c t} \leftrightarrow \delta(f-f_c)$$
	 - Funções senoidais
	   $$ \cos(2\pi f_c t) \leftrightarrow \frac{\delta(f-f_c)+\delta(f+f_c)}{2} $$
	     
---

Tags: #principios-telecom 