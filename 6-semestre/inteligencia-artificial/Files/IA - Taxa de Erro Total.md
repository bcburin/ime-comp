
# Taxa de Erro Total

---

Considere a [[IA - Matriz de Confusão|matriz de confusão]] para um modelo de classificador $h$ com $n=VP+VF+FP+FN$  soma total, então

$$
err(h) = \frac{FP + FN}{n}
$$

*Ideia: somar todas as entradas fora da diagonal principal e dividir pela soma total na matriz.*

*É possível expressar a taxa de erro total em função da [[IA - Acurácia Total|acurácia total]]*

$$
err(h) = 1 - ac(h)
$$

---

Tags: #inteligencia-artificial

