# Ruído de Quantização

---

### Definição

Erro induzido pelo processo de [[TL - Quantização|quantização]], definido como a diferença entre o sinal de entrada $m(nT_s)$ e o sinal de saída $v(nT_s)$.

$$
q = m - v
$$

---

### Cálculo

Para um quantizador uniforme com $\Delta$ suficientemente pequeno e um sinal de entrada $m$ com média zero e de potência $P$, a [[TL - Ruído#Relação Sinal Ruído SNR|relação sinal ruído]] é dada por

$$ 
\boxed{
	\mathrm{SNR} = \frac{3P \cdot 2^{2R}}{m_{\mathrm{max}}^2}
}
$$

---

Tags: #principios-telecom 