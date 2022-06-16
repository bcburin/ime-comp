# MD - Propriedades Básicas de Anéis

---

### Teorema

Se $R$ é um [[MD - Anel|anel]] com identidade aditiva $0$, então, para todo $a,b \in R$, tem-se

1. $0a = a0 = 0$
2. $a(-b)=(-a)b=-(ab)$
3. $(-a)(-b)=ab$

---

### Demonstração

1. Das leis distributivas
$$
\begin{align*}
a0 + a0 = a(0+0) = a0 &\quad\implies\quad a0 = 0 \\
0a + 0a = (0+0)a = 0a &\quad\implies\quad 0a = 0
\end{align*}
$$

2. Das leis distributivas e de 1, temos
$$
\begin{align*}
a(-b) + ab = a(-b + b) = a0 = 0 &\quad\implies\quad a(-b) = -(ab) \\
(-a)b + ab = (-a + a)b = 0b = 0 &\quad\implies\quad (-a)b = -(ab) 
\end{align*}
$$

3. Perceba que, de a propriedade 2, $(-a)(-b) = -(a(-b)) = -(-(ab))$, ou seja, $(-a)(-b)$ é o inverso de $-(ab)$. Mas, por definição, $ab$ é o inverso de $-(ab)$. Da [[MD - Grupo#Unicidade do elemento inverso|unicidade do elemento inverso]], segue-se que $(-a)(-b)=ab$.

---

Tags: #mat-discreta 