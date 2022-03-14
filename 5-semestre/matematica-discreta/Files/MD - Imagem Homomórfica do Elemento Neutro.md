# Imagem Homomórfica do Elemento Neutro

---

### Teorema

Sejam $(G,\oplus)$ e $(G',\otimes)$ [[MD - Grupo|grupos]] e $H:G\to G'$ um [[MD - Homomorfismo|homomorfismo]] entre eles. Então

$$
H(\varepsilon) = \varepsilon'
$$

Em que $\varepsilon$ é o [[MD - Elemento Neutro|elemento neutro]] de $G$ e $\varepsilon'$, o de $G'$.

---

### Corolário

O teorema acima implica que o [[MD - Núcleo de Homomorfismo|núcleo]] de $H$, $\mathrm{ker}(H)$, nunca estará vazio.

---

### Demonstração

Da definição de homomorfismo, temos que 

$$ H(\varepsilon) = H(\varepsilon \oplus \varepsilon) = H(\varepsilon)\otimes H(\varepsilon) $$

Donde

$$
H(\varepsilon) \otimes \varepsilon' = H(\varepsilon)\otimes H(\varepsilon)
$$

Aplicando a [[MD - Lei do Corte|Lei do Corte]] em $G'$, temos

$$
\varepsilon' = H(\varepsilon)
$$

O que completa a demonstração.

---

Tags: #mat-discreta 