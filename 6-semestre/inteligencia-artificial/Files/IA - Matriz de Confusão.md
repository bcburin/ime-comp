
# Matriz de Confusão

---

### Definição

Mostra, para uma classe, o número de classificações corretas e equivocadas do classificador

| Classes | Predita $C_1$ | Predita $C_2$ | $\cdots$ | Predita $C_k$ |
| --- | --- | --- |---  |--- |
| Verdadeira $C_1$ |  $M(C_1,C_1)$ |  $M(C_1,C_2)$ | $\cdots$ |  $M(C_1,C_k)$ |
| Verdadeira $C_2$ |  $M(C_2,C_1)$ |  $M(C_2,C_2)$ | $\cdots$ |  $M(C_2,C_k)$ |
| $\vdots$ |  $\vdots$ |  $\vdots$ | $\ddots$ |  $\vdots$ |
| Verdadeira $C_k$ |  $M(C_k,C_1)$ |  $M(C_k,C_2)$ | $\cdots$ |  $M(C_k,C_k)$ |

- $M(C_i,C_j)$ -> número de vezes que a classe $C_1$ foi prevista estar na classe $C_j$
- Os elementos da diagonal $M(C_i,C_i)$ contabilizam os acertos do modelo

---

### Para classificação binária

| Classes | Predita $C_+$ | Predita $C_-$ |
| -------- | ---------- | ---------- |
| Verdadeira $C_+$ | Verdadeiros Positivos | Falsos Negativos |
| Verdadeira $C_-$ | Falsos Positivos | Verdadeiros Negativos |

---

Tags: #inteligencia-artificial

