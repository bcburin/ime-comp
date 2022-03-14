# Potência de Elemento de Grupo Cíclico Finito

---

### Teorema

Se $(G,\cdot)$ é um  [[MD - Grupo Cíclico|grupo cíclico]] finito e $a \in G$, então 

$$
a^{o(G)} = \varepsilon
$$

---

### Demonstração

Seja $a \in G$. Como $G$ é cíclico, então existe $x \in G$ tal que $G = \langle x \rangle$. Provemos que $x^{o(G)}=\varepsilon$. Para isso, demonstremos que os elementos da sequência $x,x^2,x^3,\dots,x^{o(G)} \in G$ são todos distintos dois a dois. Suponhamos, por absurdo, que dois deles sejam iguais. Nesse caso, existem $0<s<r\leq o(G)$ tal que

$$
x^r = x^s
$$

O que, pela [[MD - Lei do Corte|Lei do Corte]], implica

$$
x^{r-s} = \varepsilon
$$

Nesse caso

$$
\langle x \rangle = \{\varepsilon,x,x^2,x^3,\dots,x^{r-s-1}\}
$$

Pois quaisquer elementos subsequentes seriam iguais a um dos contidos no conjunto acima. De fato, seja $x^{t} \in \langle x \rangle$. Pelo algoritmo da divisão, $t = m\,(r-s) + n$, com $0 \leq n \leq r-s-1$. Então

$$
\begin{align*}
x^t &= x^{m(r-s)+n} \\
&= (x^{r-s})^mx^n \\
&= \varepsilon^mx^n \\
&= x^n

\end{align*}
$$

Assim, teriamos $o(G) = o(\langle x \rangle) = r-s$. Mas $r-s<o(G)$, o que é um absurdo. Logo, os elementos $x,x^2,\dots,x^{o(G)}$ são distintos dois a dois e

$$
G = \{x,x^2,\dots,x^{o(G)}\}
$$

Em especial, pode-se dizer que exatamente um desses elementos será o elemento nulo $\varepsilon$ de $G$. Se supusermos $x^r = \varepsilon$, com $0<r<o(G)$, obteremos, pelo mesmo raciocínio exposto acima que $o(G) = r < o(G)$ (absurdo). Portanto, resta apenas a possibilidade 

$$
x^{o(G)} = \varepsilon
$$

Regrassando ao $a \in G$, note que $a = x^k$, $0 < k \leq o(G)$. Dessa forma

$$
\begin{align*}
a^{o(G)} &= (x^k)^{o(G)} \\
&= (x^{o(G)})^k \\
&= \varepsilon^k \\
&= \varepsilon
\end{align*}
$$

O que completa a demonstração.

---

Tags: #mat-discreta 