# Grupo Quociente é Grupo

---

### Teorema

Para um [[MD - Subgrupo Normal|subgrupo normal]] $H \triangleleft\, G$, o [[MD - Grupo Quociente|grupo quociente]] $G/H$  com a operação binária entre classes laterais definida como

$$
(xH)(yH) = (xy)H
$$

é um [[MD - Grupo|grupo]], *conforme o nome sugere*.

---

### Demonstração

**FECHAMENTO:** como $H$ é um subgrupo normal, então a operação é **bem definida**^[[[MD - Produto de Classes Laterais]]], ademais, da sua definição, é direto o fechamento.

**ASSOCIATIVIDADE:** perceba que

$$
\begin{align*}
&[(xH)(yH)](zH) = [(xy)H](zH) = [(xy)z]H \\
&(xH)[(yH)(zH)] = (xH)[(yz)H] = [x(yz)]H
\end{align*}
$$

Portanto a associatividade em $G/H$ segue direto da associatividade em $G$.

**ELEMENTO NEUTRO:** perceba que para toda classe lateral $xH$, $(xH)H=(xH)(eH)=(xe)H=xH$, logo $H$ é o elemento neutro em $G/H$.

**ELEMENTO INVERSO:** para uma classe lateral $xH$, tem-se $(xH)(x^{-1}H) = (xx^{-1})H = eH=H$, de modo que $x^{-1}H$ é o elemento inverso de $xH$ em $G/H$.

Disso, segue-se que $G/H$ forma um grupo sob a operação definida acima.

---

Tags: #mat-discreta 