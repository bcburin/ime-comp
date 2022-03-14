# Imagem Homomórfica do Elemento Neutro

---

### Teorema

Sejam $(G,\oplus)$ e $(G',\otimes)$ [[MD - Grupo|grupos]] e $H:G\to G'$ um [[MD - Homomorfismo|homomorfismo]] entre eles. Então

$$
H(x^{-1}) = \big(H(x)\big)^{-1}
$$

Para todo $x \in G$.

---

### Demonstração

Da definição de homomorfismo, temos que 

$$ H(\varepsilon) = H(x \oplus x^{-1}) = H(x) \otimes H(x^{-1}) $$

No entanto, vale $H(\varepsilon)=\varepsilon'$ ^[[[MD - Imagem Homomórfica do Elemento Neutro]]], o que implica

$$
H(x) \otimes H(x^{-1}) = \varepsilon'
$$

O que, por definição, implica que

$$
H(x^{-1}) = \big(H(x)\big)^{-1}
$$

Completando a demonstração.

---

Tags: #mat-discreta 