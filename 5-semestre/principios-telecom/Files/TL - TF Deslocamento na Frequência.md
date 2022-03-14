# Deslocamento na Frequência

---

### Teorema

Se $g(t) \leftrightarrow G(f)$ então

$$
g(t)e^{j\,2\pi f_0t} \leftrightarrow G(f-f_0)
$$

---

### Teorema da Modulação

Na prática, a multiplicação é feita com um sinal senoidal

$$
g(t)\cos(2\pi f_0t) = \frac{g(t)e^{j \, 2\pi f_0t} + g(t)e^{-2\pi f_0t}}{2} 
$$

De modo que, por [[TL - TF Linearidade|linearidade]]

$$
\boxed{
g(t)\cos(2\pi f_0 t) \leftrightarrow \frac{G(f-f_0)+G(f+f_0)}{2}
}
$$

---

### Demonstação

Como $g(t) \leftrightarrow G(f)$, temos, da [[TL - TF Dualidade|dualidade]]

$$
G(t) \leftrightarrow g(-f)
$$

Aplicando a propriedade de [[TL - TF Deslocamento no Tempo|deslocamento no tempo]]

$$
G(t-f_0) \leftrightarrow g(-f)e^{-j\,2\pi f_0 f}
$$

Novamente, da dualidade

$$
g(-t)e^{-j\,2\pi f_0 t} \leftrightarrow G(-f+f_0)
$$

[[TL - TF Alteração de Escala|alterando a escala]] com a constante multiplicativa $-1$

$$
g(t)e^{j\,2\pi f_0 t} \leftrightarrow G(f-f_0)
$$

O que completa a demonstração.

---

Tags: #principios-telecom 