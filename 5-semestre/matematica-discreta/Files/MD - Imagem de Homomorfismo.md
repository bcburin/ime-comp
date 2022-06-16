# Imagem

---

### Definição

Sendo $(G,\oplus)$ e $(G',\otimes)$ [[MD - Grupo|grupos]] e $\varphi$ um [[MD - Homomorfismo|homomorfismo]] entre eles, define-se sua **imagem** como o conjunto

$$
\mathrm{Img}(\varphi) = \{\; \varphi(g)  \;|\; g \in G \;\}
$$

Para um subconjunto $A \subset G$, define-se a **imagem** de $A$ sob $\varphi$ como o conjunto

$$
\varphi[A] = \{\; \varphi(g) \;|\; g \in A \;\}
$$

*Obs: note que $\mathrm{Img}(A) = \varphi[G] \subset G'$*.

---

### Teorema

A imagem de um homomorfismo é subgrupo de seu contradomínio. 

$$\mathrm{Img}(\varphi) < G'$$

---

### Demonstração 1

Sejam $x,y \in \mathrm{Img}(\varphi)$. Assim, existem $a,b \in G$ tal que

$$
\begin{align*}
& \varphi(a) = x \\
& \varphi(b) = y
\end{align*}
$$

Como $\varphi(a^{-1}) = (\varphi(a))^{-1}$, $\forall\, a \in G$ ^[[[MD - Imagem Homomórfica do Elemento Inverso]]], então 

$$
H(b^{-1}) = (H(b))^{-1} = y^{-1}
$$

O que implica $y^{-1} \in \mathrm{Img}(\varphi)$. Dessa forma,

$$
H(a \oplus b^{-1}) = H(a) \otimes H(b^{-1}) = x \otimes y^{-1}
$$

O que implica $x \otimes y^{-1} \in \mathrm{Img}(\varphi)$, de modo que $\mathrm{Img}(\varphi) < G'$. ^[[[MD - Condição Necessária e Suficiente para ser Subgrupo]]]

---

### Demonstração 2

Esse teorema pode ser visto como o caso especial [[MD - Imagem Homomórfica de Subgrupo|deste teorema]] para o caso $H = G$.

---

Tags: #mat-discreta 