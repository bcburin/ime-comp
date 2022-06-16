# Divisores de Zero dos Inteiros Módulo n

---

### Teorema

No [[MD - Anel|anel]] $\mathbb{Z}_n$, um elemento é um [[MD - Divisor de Zero|divisor de zero]] se e só se não é relativamente primo a $n$.

---

### Demonstração

**(IDA)** Seja $m \in \mathbb{Z}_n$ com $m \neq 0$ e $\mathrm{mdc}(m,n)=d \neq 1$
$$
	m \left(\frac{n}{d}\right)= \left(\frac{m}{d}\right)n
$$
Como $(m/d)n$ é um múltiplo de $n$, então $m(n/d)=0$ em $\mathbb{Z}_n$. Ademais, como $(n/d)\in\mathbb{Z}_n$ e $n/d\neq 0$, então $m$ e $n/d$ são divisores de zero.

**(VOLTA)** Seja $m \in \mathbb{Z}_n$ com $m \neq 0$ tal que existe $s \in \mathbb{Z}_n$ com $s \neq 0$ de modo que $ms=0$. Suponha que $\mathrm{mdc}(m,n)=1$. Nesse caso, $n$ divide $s$, o que implica $s = 0$, o que é um absurdo. Logo, $\mathrm{mdc}(m,n) \neq 1$, ou seja, $m$ e $n$ não são primos entre si.

---

### Corolário

Se $p$ é um  número primo, então $\mathbb{Z}_p$ não tem divisores de zero.

---

### Corolário

Como $\mathbb{Z}_p$ para $p$ primo não tem divisores de zero, é comutativo e possui identidade $1 \neq 0$, então $\mathbb{Z}_p$ é um [[MD - Domínio de Integridade|domínio de integridade]]. Mais especificamente, como $\mathbb{Z}_p$ é finito, então $\mathbb{Z}_p$ é um [[MD - Corpo|corpo]].^[[[MD - Todo Domínio de Integridade Finito é Corpo]]]

---

Tags: #mat-discreta 