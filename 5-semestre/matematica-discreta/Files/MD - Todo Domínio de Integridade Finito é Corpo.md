# Todo Domínio de Integridade Finito é Corpo

---

### Teorema

Todo [[MD - Domínio de Integridade|domínio de integridade]] finito é um [[MD - Corpo|corpo]].

---

### Demonstração

Seja $D = \{\;0, 1, a_1, a_2, \dots, a_n \;\}$ um domínio de integridade finito. Tome $a \in D$ com $a \neq 0$ e considere o conjunto

$$
  S = \{\; a0, a1, aa_1, aa_2, \dots, aa_n \;\}
$$

Do fechemento da multiplicação, todo elemento de $S$ obrigatoriamente está em $D$, ou seja, $S \subset D$. Por outro lado, perceba que os elementos de $S$ são distinitos dois a dois, uma vez que $aa_i=aa_j$ implicaria $a_i=a_j$, dado que $D$ não tem divisores de zero^[[[MD - Lei do Corte em Anéis]]]. Assim, $|S|=|D|$. Portanto, segue-se que $S=D$.

Disso, $1 \in D$ implica $1 \in S$, donde temos que deve existir um $aa_i \in S$ tal que $aa_i=1$, ou seja, $a$ possui um inverso multiplicativo. Como isso é válido para um elemento não nulo qualquer de $D$, então $D$ é um corpo.

---

Tags: #mat-discreta 