
# R-dedução

---

### Definição

Seja $S$ um conjunto de [[LG - Cláusula|cláusulas]] com variáveis distintas e $C$ uma cláusula. Uma **R-dedução** de $C$ a partir de $S$ é uma sequência de cláusulas $\alpha_1,\cdots,\alpha_n$ tal que $a_n=C$ e para todo $1 \leq i \leq n$

- $\alpha_i \in S$,
- $\alpha_i$ é um [[LG - Fator de uma Cláusula|fator]] de $\alpha_{i-1}$ ou
- $\alpha_i$ é um [[LG - Resolvente Binário|resolvente]] $\alpha_i = \mathrm{Res}(\alpha_j,\alpha_k)$, com $j < i$ e $k < i$.

---

*Obs: equivale à [[LG - Expansão por Resolução|expansão por resolução]] do cálculo proposicional.*

---

*Dúvida: como se garante que as variáveis de das cláusulas de $S$ sejam distintas? É possível alterá-las livremente como no conversão da forma prenex para garantir isso?*

---

Tags: #logica

