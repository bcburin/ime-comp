# Deslocamento no Tempo

---

### Teorema

Se $g(t) \leftrightarrow G(f)$ então

$$
g(t)e^{j\,2\pi f_0t} \leftrightarrow G(f-f_0)
$$

---

### Aplicação

Na prática, a multiplicação é feita com um sinal senoidal

$$
g(t)\cos(2\pi f_0t) = \frac{g(t)e^{j \, 2\pi f_0t} + g(t)e^{-2\pi f_0t}}{2} 
$$

De modo que, por [[TL - TF Linearidade|linearidade]]

$$
\boxed{
g(t) \leftrightarrow \frac{G(f-f_0)+G(f+f_0)}{2}
}
$$

---

### Demonstação



---

Tags: #principios-telecom 