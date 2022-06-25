# Quantização não Uniforme

---

### Por meio de compressão

A quantização não uniforme é feita ao aplicar um quantizador uniforme no sinal de entrada após ele ter passado por um compressor. Existem dois padrões de compressão muito utilizados

- Lei $\mu$
- Lei $A$

---

### Lei $\mu$ (padrão americano)

$$
|v| = \frac{\mathrm{log}(1+\mu|m|)}{\mathrm{log}(1+\mu)}
$$

---

### Lei $A$ (padrão europeu)

$$
|v| = 

\begin{cases}
	\frac{A|m|}{1 + \mathrm{log}(A)}, \quad0 \leq |m| \leq 1/A\\\\
	\frac{1 + \log(A|m|)}{1+\log(A)}, \quad 1/A < |m| \leq 1\\
\end{cases}
$$

---

Tags: #principios-telecom 