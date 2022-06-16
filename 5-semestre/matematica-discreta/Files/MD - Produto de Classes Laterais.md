# Produto de Classes Laterais

---

### Teorema

Seja $H < G$. O produto de [[MD - Classes Laterais à Esquerda|classes laterais à esquerde]] é bem definido por

$$
(xH)(yH) = (xy)H
$$

se e só se H é um [[MD - Subgrupo Normal|subgrupo normal]].

---

### Demonstração

**(IDA)** Suponha que $(xH)(yH)=(xy)H$ entre classes laterais à esquerda seja uma operação bem definida. Queremos mostrar $gH=Hg$. Para isso, tome $x \in gH$. Escolhendo representantes $x \in gH$ e $g^{-1} \in g^{-1}H$ para efetuar o produto, temos $(gH)(g^{-1}H) = (xa^{-1})H$. Por outro lado, escolhendo representantes $g \in gH$ e $g^{-1} \in g^{-1}H$ temos o produto $(gH)(g^{-1}H)=(gg^{-1})H = eH=H$. Como o produto é bem definido, temos $(xg^{-1})H = H$, logo $xg^{-1} \in H$^[[[MD - Condição NS para Elemento Estar em Subgrupo]]]. Portanto, existe $h \in H$ tal que $xg^{-1}=h$ e $x=gh$, de modo que $x \in Hg$. Portanto $gH \subset Hg$. De modo análogo, demonstra-se $Hg \subset gH$, de modo que $gH=Hg$, ou seja, $H$ é subgrupo normal de $G$.

**(VOLTA)** Suponha que $H < G$. Escolhendo $x \in xH$ e $y \in yH$, temos o produto $(xH)(yH) = (xy)H$. Escolhendo $xh_1 \in xH$ e $xh_2 \in yH$, encontra-se $(xH)(yH) = (xh_1yh_2)H$. Como $H$ é subgrupo normal, então $h_1y \in Hy = yH$ implica que existe $h_3 \in H$ tal que $h_1y=yh_3$. Então $xh_1yh_2 = xyh_3h_2 \in (xy)H$, logo a operação é bem definida.

---

Tags: #mat-discreta 