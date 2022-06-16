# Imagem Homomórfica de Subgrupo

---

### Teorema

Para  o [[MD - Homomorfismo|homomorfismo]] $\phi:G \to G'$, se $H < G$, então $\phi[H] < G'$.

---

### Demonstração

Seja $H < G$ e $\phi(x), \phi(y) \in \phi[H]$. Como $H$ é [[MD - Subgrupo|subgrupo]] e $x,y \in H$, então $xy \in H$, o que implica $\phi(xy) \in \phi[H]$. Como  $\phi$ é um homomorfismo, então $\phi(xy)=\phi(x)\phi(y) \in \phi[H]$. Logo, a operação é fechada em $\phi[H]$. Como $\phi[h] < G'$, a [[MD - Associatividade|associatividade]] em $\phi[H]$ é herdada da associatividade em $G'$. Como $\phi(e)=e'$^[[[MD - Imagem Homomórfica do Elemento Neutro]]] e $\phi(x^{-1})=\phi(x)^{-1}$^[[[MD - Imagem Homomórfica do Elemento Inverso]]], garante-se a existência de elemento neutro e de elementos inversos em $\phi[H]$, o que completa a demonstração de que $\phi[H]$ é [[MD - Grupo|grupo]], ou seja, $\phi[H] < G'$.

---

Tags: #mat-discreta 