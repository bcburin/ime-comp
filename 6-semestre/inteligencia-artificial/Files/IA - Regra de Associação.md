
# Regra de Associação

---

### Definição

Uma **regra de associação** é uma implicação $R$ dada por $X \to Y$ em que $X$ e $Y$ são [[IA - K-Itemset|itemsets]].

Nesse caso, $X$ é dito **antecedente** e $Y$ **consequente** de $R$.

---

### Suporte

O [[IA - Suporte|suporte]] de uma regra de associação é definido por

$$
Sup(R) = Sup(X \cup Y)
$$

*Ideia: contar quantas vezes $R$ aparece na tabela.*

---

### Confiança

Dada uma regra de associação $R:X\to Y$, a **confiança** de $R$ é definida como

$$
Conf(R) = \frac{Sup(X \cup Y)}{Sup(X)} = \frac{|X \cup Y|}{|X|}
$$

*Ideia: dividir o número de vezes que $R$ aparece na tabela pelo número de vezes que $X$ (antecedente) aparece na tabela.*

---

### Regra de Associação Frequente

Uma regra de associação é **frequente** se e só se

$Sup(R) \geq minsup$

Em que $minsup$ é um valor dado.

---

### Regra de Associação Válida

Uma regra de associação é **válida** se e só se

$Conf(R) \geq minconf$

Em que $minconf$ é um valor dado.

---

Tags: #inteligencia-artificial
