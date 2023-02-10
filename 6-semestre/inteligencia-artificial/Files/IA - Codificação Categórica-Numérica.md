
# Codificação Categórica-Numérica

---

### Representação binária de 1-de-N

O código 1-N tem um comprimento igual ao número de categorias discretas permitidas para a variável, onde cada elemento na cadeia de bits é zero, exceto para um único elemento: aquele que representa o valor da categoria em questão.

| Valores Originais | Representação Binária 1-de-N |
| ----------------- | ------------------------------- |
| Casado  | 00001 |
| Solteiro | 00010 |
| Viúvo | 00100 |
| Divorciado | 01000 |
| Outro | 10000 |

---

### Representação binária padrão

Cada valor categórico é associado a um valor de 1 até N e é representado por uma cadeia de dígitos binários.

| Valores Originais | Representação Binária Padrão |
| ----------------- | ------------------------------- |
| Casado  | 001 |
| Solteiro | 010 |
| Viúvo | 100 |
| Divorciado | 011 |
| Outro | 110 |

---

### Representação binária por temperatura

Utilizada mais frequentemente quando os valores discretos estão relacionados de algum modo (possuem uma relação de ordem entre si).

| Valores Originais | Representação Binária por Temperatura |
| ----------------- | ------------------------------- |
| Fraco  | 0001 |
| Regular | 0011 |
| Bom | 0111 |
| Ótimo | 1111 |

*Obs: a [[IA - Distância de Hamming|distância de Hamming]] entre representações binárias por temperatura consecutivas é sempre 1.*

##### Matriz de similaridade

Aplicada a distância de hamming entre representações binárias por temperatura.

| DH | Fraco | Regular | Bom | Ótimo |
| --- | ------ | -------- | ---- | ------ |
| Fraco | 0 | 1 | 2 | 3 |
|Regular | 1 | 0 | 1 | 2  |
| Bom | 2 | 1 | 0 | 1 |
| Ótimo | 3 | 2 | 1 | 0 |


---

Tags: #inteligencia-artificial

