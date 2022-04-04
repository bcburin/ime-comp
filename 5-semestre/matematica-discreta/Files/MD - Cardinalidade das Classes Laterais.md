# Cardinalidade das Classes Laterais

---

### Teorema

Seja o [[MD - Grupo|grupo]] $(G,\cdot)$. Para todo [[MD - Subgrupo]] $H<G$ e $a\in G$, vale $o(aH)=o(Ha)=o(H)$. Ou seja, todas as [[MD - Classes Laterais à Esquerda|classes laterais à esquerda]] e à [[MD - Classes Laterais à Direita|direita]] possuem a mesma cardinalidade.

---

### Demonstração

Seja a função $\phi:H\to aH$, definida por $\phi(h)=ah$. Provemos que $\phi$ é uma bijeção.

- Sobrejetividade: seja um $y \in aH$, então, da definição de classe lateral, existe $h \in H$ tal que $y = ah$. Então, da definição de $\phi$, temos $y=\phi(h)$, ou seja, $\phi$ é sobrejetiva.

- Injetividade: seja $\phi(h_1)=\phi(h_2) \implies ah_1 = ah_2$, aplicando a Lei do Corte em $G$, temos $h_1=h_2$, ou seja, $\phi$ é injetiva.

Portanto, $\phi$ é uma bijeção, o que implica $o(H)=o(aH)$. De modo análogo, contruindo uma função $\psi:H\to Ha$, $\psi(h)=ha$, prova-se que $\psi$ é uma bijeção e $o(H)=o(Ha)$, o que completa a prova.

---

Tags: #mat-discreta 