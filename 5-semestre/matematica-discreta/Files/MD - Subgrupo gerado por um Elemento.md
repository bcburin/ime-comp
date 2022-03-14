# Subgrupo gerado por um Elemento

---

### Definição

Seja o [[MD - Grupo|grupo]] $(G,\otimes)$ e $a \in G$; define-se o **subgrupo gerado** por $a$ como o conjunto

$$
\langle a\rangle = \{\; a^k \;|\; k \in \mathbb{Z} \;\}
$$

Em que os $a^k$ são as [[MD - Potências de Elemento de um Grupo|potências]] de $a$.

---

### Teorema

Para um $a \in G$, $\langle a \rangle$ não só é [[MD - Subgrupo|subgrupo]], como também é o menor subgrupo que contém $a$.

---

### Demonstração

Primeiramente, provemos que $\langle a \rangle$ é grupo. Para quaisquer $a^i,a^j \in \langle a \rangle$, $a^i\otimes a^j = a^{i+j} \in \langle a \rangle$, de modo que vale o fechamento. Uma vez que $a^0=\varepsilon$, então $\varepsilon \in \langle a \rangle$. Finalmente, para cada $a^i \in \langle a \rangle$, $a^{-i} = (a^i)^{-1} \in \langle a \rangle$. Portanto, $\langle a \rangle < G$.

Seja $K < G$ tal que $a \in K$. Provemos que $\langle a \rangle \subset K$.  Seja um $x \in \langle a \rangle$, então existe $k$ tal que $x = a^k$. Como $a \in K$, então, por fechamento, $a^2, a^3,\dots,a^k,\dots \in K$. Logo, $x \in K$, ou seja, $\langle a \rangle \subset K$.

---

Tags: #mat-discreta 