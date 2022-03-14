# Subgrupos de Grupos Cíclicos

---

### Teorema

Todo [[MD - Subgrupo|subgrupo]] de um [[MD - Grupo Cíclico|grupo cíclico]] é, também, cíclico.

---

### Demonstração

Seja o grupo cíclico $(G,\cdot)$ [[MD - Subgrupo gerado por um Elemento|gerado]] por $a \in G$, ou seja, $G=\langle a \rangle$, e um subgrupo $H<G$. Primeiramente, perceba que todos os elementos de $G$ (e, portanto, de $H$) são da forma $a^k$, para algum $k \in \mathbb{Z}$.

Analisemos duas situações complementares: $a \in H$ e $a \not\in H$.

Se $a \in H$, então $\langle a \rangle \subset H$, uma vez que $H$ é grupo e a operação deve ser fechada. Isso é o mesmo que dizer $G \subset H$. No entanto, também é verdadeiro que $H \subset G$, de modo que $H=G$. Em particular, pode-se dizer que $H$ é cíclico.

Se, por outro lado $a \not\in H$, temos que $H=\{\varepsilon\}$ ou que pode haver mais elementos em $H$. No primeiro caso, $H=\langle e \rangle$ é trivialmente cíclico. No segundo, seja $m\in \mathbb{Z}$ o **menor** inteiro positivo que satisfaça

$$
a^m \in H
$$

Note que $m>1$. Seja $a^t \in H$ outro elemento qualquer de $H$. Como $t,m \in \mathbb{Z}$, temos, pelo algoritmo da divisão, que

$$
\exists\, q,r \in \mathbb{Z}, \quad t = mq + r, \quad 0 \leq r < m
$$

Dessa forma, vale
 
 $$
 a^{mq + r} \in H, \quad 0 \leq r<m
 $$

Por outro lado, temos que

$$
\begin{align*}
a^m \in H \quad&\implies\quad  (a^m)^q \in H \\
&\implies\quad a^{mq} \in H \\
&\implies\quad (a^{mq})^{-1} \in H \\
&\implies\quad a^{-mq} \in H
\end{align*}
$$

Do fechamento em $H$, segue-se que

$$
a^{mq+r}a^{-mq} \in H \quad\implies\quad a^r \in H
$$

No entanto, $m$ é, por hipótese, o menor inteiro positivo satisfazendo $a^m\in H$ e $0 \leq r<m$. Assim, obrigatoriamente, $r=0$, de modo que $t=mq$. Em outras palavras, todos os elementos de $H$ devem ser da forma $a^{mq}=(a^m)^q$, isto é

$$
H = \langle a^m \rangle
$$

Provando que $H$ é cíclico.

---

Tags: #mat-discreta  