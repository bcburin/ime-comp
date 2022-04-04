# Teorema de Lagrange

---

### Teorema

Se $(G,\cdot)$ é um [[MD - Grupo|grupo]] finito e $H<G$ é um [[MD - Subgrupo|subgrupo]], então $o(H)$ divide $o(G)$.

### Demonstração

Seja $k \in \mathbb{Z}_+$ o número de classes laterais à direita distintas e seja $Ha$ uma classe lateral à direita qualquer. Sabemos que as [[MD - Classes Laterais à Direita|classes laterais à direita]] de $H$ formam uma partição de $G$ ^[[[MD - Classes Laterais como Classes de Equivalência da Congruência#Corolário]]]. Portanto, toda classe lateral à direita é ou igual a $Ha$ ou disjunta a $Ha$. Ademais, todas as classes laterais tem a mesma cardinalidade, igual a $o(Ha)= o(H)$ ^[[[MD - Cardinalidade das Classes Laterais]]].

Do exposto acima, tem-se

$$
\begin{align*}
k\,o(Ha) = o(G) 
&\quad\implies\quad k\,o(H) = o(G) \\\\
&\quad\implies\quad k = \frac{{o(G)}}{o(H)}
\end{align*}
$$

Ou seja, $o(H)$ divide $o(G)$.

---

Tags: #mat-discreta 