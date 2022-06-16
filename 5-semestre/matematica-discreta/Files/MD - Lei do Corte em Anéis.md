# Lei do Corte em Anéis

---

### Teorema

As 	leis do corte são válidas em um [[MD - Anel|anel]] se e só se ele não tem [[MD - Divisor de Zero|divisores de zero]].

---

### Demonstração

**(IDA)** Seja um anel $R$ no qual são válidas as leis do corte à esquerda e à direita. Sejam $x,y \in R$ tal que $xy=0$. Se $x \neq 0$, então $xy=0=x0$ implica $y=0$. Analogamente, se $y \neq 0$, então $xy=0=0y$ implica $x=0$^[[[MD - Propriedades Básicas de Anéis]]]. Assim, $x=0$ ou $y=0$, ou seja, $R$ não tem divisores de zero.

**(VOLTA)** Sejam o anel $R$ sem divisores de zero e $x,y,z \in R$ tais que $xy=xz$ com $x \neq 0$. Então

$$
xy-xz=x(y-z)=0
$$

Como $x \neq 0$ e como $x\in R$ não é um divisor de zero, então

$$
y-z = 0 \quad\implies\quad y=z
$$

De modo que vale a lei do corte à esquerda. A lei do corte à direita é provada de forma análoga.

---

Tags: #mat-discreta 