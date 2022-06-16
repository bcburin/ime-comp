# Todo Corpo é Domínio de Integridade

---

### Teorema

Todo [[MD - Corpo|corpo]] é um  [[MD - Domínio de Integridade|domínio de integridade]].

---

### Domínio de Integridade

Como um corpo $F$ já é um anel comutativo com identidade $1 \neq 0$, basta mostrar que $F$ não contém divisores de zero. 

Suponha, por absurdo, que existam $x,y \in F$ tais que $xy=0$ com $x \neq 0$ e $y \neq 0$. Como $F$ é corpo e $x$ não nulo, então $x^{-1}\in F$ e^[[[MD - Propriedades Básicas de Anéis]]]

$$
x^{-1}(xy) = x^{-1}0 = 0
$$

Por outro lado, usando a associatividade da multiplicação

$$
x^{-1}(xy) = (x^{-1}x)y = 1b = b
$$

De modo que $b = 0$, o que é um absurdo. Logo, $F$ não pode ter divisores de zero.

---

Tags: #mat-discreta 