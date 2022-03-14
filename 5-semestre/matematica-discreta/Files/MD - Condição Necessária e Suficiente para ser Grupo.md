# Condição Necessária e Suficiente para ser Grupo

---

### Teorema

Seja $(G,\cdot)$ um [[MD - Semigrupo|semigrupo]]. Então $(G,\cdot)$ é um [[MD - Grupo|grupo]] se e só se forem válidas as seguintes condições

- $\exists\,\varepsilon \in G$ tal que $\forall\, g \in G$ tem-se $g \cdot \varepsilon = g$
- $\forall\, g \in G$, $\exists\,g^{-1} \in G$ tal que $g \cdot g^{-1} = \varepsilon$

---

### Demonstração

Se $(G,\cdot)$ for grupo, então as condições acima são válidas, diretamente da definição de grupo.

Suponhamos, por outro lado, que as relações sejam válidas. Nesse caso, para qualquer $a \in G$, existe um $a^{-1} \in G$ tal que

$$
a \cdot a^{-1} = \varepsilon
$$

Ademais, como $a^{-1} \in G$, existe um $(a^{-1})^{-1} \in G$ tal que

$$
a^{-1}\cdot(a^{-1})^{-1} = \varepsilon
$$

Assim sendo, calculemos

$$
\begin{align*}
a^{-1} \cdot a 
&= (a^{-1} \cdot a) \cdot \varepsilon \\
&= (a^{-1} \cdot a) \cdot (a^{-1}\cdot (a^{-1})^{-1}) \\
&= \big(a^{-1} \cdot (a \cdot a^{-1})\big) \cdot (a^{-1})^{-1} \\
&= (a^{-1} \cdot \varepsilon) \cdot (a^{-1})^{-1} \\
&= a^{-1} \cdot (a^{-1})^{-1} \\
&= \varepsilon
\end{align*}
$$

Logo, 

$$
\boxed{
a^{-1}\cdot a = a \cdot a^{-1} = \varepsilon
}
$$

Além disso, tem-se 

$$
\begin{align*}
\varepsilon \cdot a 
&= (a \cdot a^{-1}) \cdot a \\
&= a \cdot (a^{-1} \cdot a) \\
&= a \cdot \varepsilon \\
&= a
\end{align*}
$$

De modo que 

$$
\boxed{
\varepsilon \cdot a = a \cdot \varepsilon = a
}
$$

Como essas relações são válidas para todo $a \in G$, então $(G,\cdot)$ é um grupo. 

---

Tags: #mat-discreta 