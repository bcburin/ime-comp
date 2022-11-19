
# Algoritmo

---

### Definição

Um **algoritmo** é um procedimento computacional que, a partir de um conjunto de valores de entrada, produz um conjunto de valores de saída.

---

### Problemas Computacionais

Um **algoritmo** é uma ferramenta para resolver problemas computacionais específicos.

**Exemplo** - problema da ordenação
- Entrada - sequência de $n$ números $a_1,\dots,a_n$
- Saída - permutação $a_1',\dots,a_n'$ da sequência de entrada tal que $a_1'\leq\dots\leq a_n'$

---

### Instância

Uma **instância** de um problema computacional é dada por alguma de suas possíveis entradas.

**Exemplo** - a sequência de entrada 31, 41, 59, 26, 41, 58, um algoritmo para o
problema de ordenação retornará como saída 26, 31, 41, 41, 58, 59.

---

### Algoritmo Correto

Um algoritmo é **correto** quando, para qualquer instância de entrada, retorna a saída correta.

**Exemplo** - *insert sort*

```
procedimento INSERIR(A, n):
	para i=2,...,n faça
		x = A[i]; j = i-1
		enquanto j > 0 e x < A[j] faça
			A[j-1] = A[j]
			j = j-1
		A[j-1] = x
```

---

Tags: #paa

