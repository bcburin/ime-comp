# Imagem Homomórfica inversa de Subgrupo da Imagem

---

### Teorema

Para  o [[MD - Homomorfismo|homomorfismo]] $\phi:G \to G'$, se $H' < \phi[G]$, então $\phi^{-1}[H'] < G$.

---

### Demonstração

Sejam $x,y \in \phi^{-1}[H']$, de modo que $\phi(x),\phi(y)\in H'$. Como $H'$ é um [[MD - Grupo|grupo]], então $\phi(x)\phi(y)\in H'$. Como $\phi$ é um homomorfismo, então $\phi(x)\phi(y) = \phi(xy) \in H'$, o que implica $xy \in \phi^{-1}[H']$. Logo, a operação é fechada em $\phi^{-1}[H']$. Como $\phi(e)=e' \in H'$^[[[MD - Imagem Homomórfica do Elemento Neutro]]], então $e \in \phi^{-1}[H']$. Seja $x \in \phi^{-1}[H']$ e $\phi(x) \in H'$. Como $H'$ é grupo, $\phi(x)^{-1} \in H'$. Uma vez que $\phi(x^{-1}) = \phi(x)^{-1} \in H'$^[[[MD - Imagem Homomórfica do Elemento Inverso]]], então $x^{-1}\in \phi^{-1}[H']$. Logo, $\phi^{-1}[H']$ é grupo e $\phi^{-1}[H'] < G$.

---

Tags: #mat-discreta 