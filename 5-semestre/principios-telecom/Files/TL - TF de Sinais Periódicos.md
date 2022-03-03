# Transformada de Fourier de Sinais Periódicos

---

### Teorema

Se $g$ é um sinal periódico, então

$$ 
\boxed{
\mathcal{F}[g(t)] = \sum\limits_{n=-\infty}^\infty G_n \,\delta (f-nf_0)
}
$$

---

### Demonstração

Como $g$ é um sinal periódico, seja sua [[TL - Série de Fourier Exponencial|série de Fourier Exponencial]]

$$
g(t) = \sum\limits_{n=-\infty}^\infty G_n \,e^{j\,2\pi nf_0 t}, \quad\quad G_n = \frac{1}{T_0} \int_{T_0/2}^{T_0/2}g(t)e^{j\,2\pi nf_0 t}\,\mathrm{d}t
$$

Das [[TL - Delta de Dirac#Propriedades|propriedades]] do Delta de Dirac, tem-se

$$
\mathcal{F}[e^{j\,2\pi nf_0 t}] = \delta(f-nf_0)
$$

Logo, aplicando [[TL - TF Linearidade|linearidade]]

$$ 
{
\mathcal{F}[g(t)] = \sum\limits_{n=-\infty}^\infty G_n \,\delta (f-nf_0)
}
$$

---

Tags: #principios-telecom 