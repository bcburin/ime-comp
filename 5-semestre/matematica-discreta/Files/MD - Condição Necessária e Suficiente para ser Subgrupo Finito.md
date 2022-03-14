# Condição Necessária e Suficiente para ser Subgrupo Finito

---

### Teorema

Se Se $(G,\cdot)$ é um [[MD - Grupo|grupo]], então $H \subset G$, com $H$ não vazio e **finito**, é [[MD - Subgrupo|subgrupo]] de $G$ se e só se, para todo $x,y \in H$, tem-se $x \cdot y \in H$.

*Obs: em outras palavras, basta verificar o fechamento de $\cdot$ em $H$, para $H$ ser subgrupo.*

---

### Demonstração

**(IDA)** Se $H$ é subgrupo de $G$, então $\cdot$ é, de fato, fechada em $H$.

**(VOLTA)** Seja $H \subset G$ tal que $\cdot$ é fechada em $H$. Pela [[MD - Condição Necessária e Suficiente para ser Subgrupo|condição necessária e suficiente para um subconjunto ser subgrupo]], basta demonstrar que os elementos inversos estão contidos em $H$. 

Seja $a \in H$. Do fechamento, temos que $a^2=a\cdot a \in H$, $a^3=a\cdot a^2 \in H$, $\dots$, $a^m \in H$, $m \in \mathbb{Z}^*_+$. Em outras palavras, a sequência infinita $a,a^2,a^3,\dots$ deve estar contida em $H$. No entanto, como $H$ é finito, devem haver repetições nessa sequência, ou seja, $\exists r,s \in \mathbb{Z}$ tal que $a^r=a^s$, com $r>s>0$. Aplicando a [[MD - Lei do Corte|Lei do Corte]] em $G$, temos $a^{r-s}=\varepsilon$, com $r-s \neq 0$ (donde $\varepsilon \in H$). Como $r-s-1 \geq 0$, então $a^{r-s-1} \in H$. Ademais, $a \cdot a^{r-s-1} = a^{r-s} = \varepsilon$. Logo, $a^{-1}=a^{r-s-1} \in H$, o que completa a demonstração.

---

 Tags: #mat-discreta 