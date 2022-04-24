# Transformada de Hilbert

---

### Definição

A **transformada de Hilbert** de um sinal $g(t)$ é definida como

$$
\boxed{
\hat{g}(t) = \frac{1}{\pi} \int_{-\infty}^{\infty} g\frac{\tau}{1-\tau}\,\mathrm{d}\tau
}
$$

Usando a definição de convolução, pode-se expressar a transformada de hilbert por

$$
\boxed{
\hat{g}(t) = g(t) * \frac{1}{\pi t}
}
$$

---

### Transformada no Domínio da Frequência

Tem-se que

$$
\mathrm{sgn}(t) \leftrightarrow \frac{1}{j\,\pi f} \quad\implies\quad \frac{1}{\pi t} \leftrightarrow j \mathrm{sgn}(-f) = -j \,\mathrm{sgn}(f) 
$$

Donde

$$
\boxed{
\hat{G}(f) = -j\,\mathrm{sgn}(f) G(f)
}
$$

---

Tags: #principios-telecom 