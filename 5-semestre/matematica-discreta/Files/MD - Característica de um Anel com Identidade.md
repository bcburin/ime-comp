# Característica de um Anel com Identidade

---

### Teorema

Seja um [[MD - Anel#Anel com Identidade|anel com identidade]] $R$. Se $n \cdot 1 = 0$ para algum interio positivo $n$, então a [[MD - Característica de Um Anel|característica]] de $R$ é o menor $n$ com essa propriedade. Se $n \cdot 1 \neq 0$ para todo inteiro positivo $n$, então $R$ é de característica $0$.

---

*Obs: este teorema mostra que, se um anel possuir identidade, basta analisar as potências aditivas da identidade para obter a característica do anel.*

---

### Demonstração

Se $n \cdot 1 \neq 0$ para todo inteiro positivo $n$, então é impossível ter $n \cdot x = 0$ para todo $x \in R$ para algum inteiro positivo $n$.

Suponha que $n \cdot 1 = 0$ para algum inteiro positivo $n$. Então para todo $x \in R$

$$
n \cdot x = \underbrace{x+x+x+\cdots+x}_{n} = x(\underbrace{1+1+1+\cdots+1}_{n}) = x(n \cdot 1) = x0 = 0
$$

Logo, $R$ tem característica não nula menor ou igual a $n$. Disso, completa-se a demonstração.

---

Tags: #mat-discreta 