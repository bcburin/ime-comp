# Condição Necessária e Suficiente para Elemento Estar em Subgrupo

---

### Teorema

Para o  [[MD - Subgrupo|subgrupo]] $H < G$, $xH=H$ se e só se $x \in H$.

---

### Demonstração

**(IDA)** Seja $xh \in xH$. Como $xH \subset H$, então $xh \in H$. Portanto $xh=h'$, o que implica $x = h'h^{-1}$ e $x \in H$, pois $H$ é grupo.

**(VOLTA)** Suponha $xh \in xH$. Como $x \in H$, então $xh \in H$, por fechamento em $H$. Logo, $xH \subset H$. Suponha, agora, que $h \in H$. Como $x \in H$, então $x^{-1} \in H$ e $x^{-1}h \in H$, o que implica $h \in xH$ e $H \subset xH$. Portanto, $xH=H$.

---

Tags: #mat-discreta 