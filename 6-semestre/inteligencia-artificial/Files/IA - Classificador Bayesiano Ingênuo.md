
# Classificador Bayesiano Ingênuo

---

Classificador Bayesiano que supõe independência entre os atributos.

---

### Método

Tem-se uma classe objetivo $C$ que pode assumir os valores de $\{c_1,\cdots,c_k\}$ e atributos $A_1,\cdots,A_n$. Dada uma condição

$$
\theta=(A_1=a_1) \wedge \cdots \wedge (A_n = a_n)
$$

Queremos determinar qual é a classe de $C$ sob a condição $\theta$. Para isso, calculamos $P(C=c_i|\theta)$ para $1 \leq i \leq k$. Se $\max\{P(C=c_i|\theta)|1 \leq i \leq k\} = P(C=c_j|\theta)$, então classificamos $C$ na classe $c_j$ sob a condição $\theta$.

Para fazer as contas

$$
P(C=c_i|\theta) = P(A_1=1|C_k = c_i) \cdots P(A_n = a_n | C = c_i) \cdot P(C=c_i)
$$

---

Tags: #inteligencia-artificial

