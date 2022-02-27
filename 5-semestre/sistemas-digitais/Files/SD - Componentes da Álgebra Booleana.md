# Componentes da Álgebra Booleana

---

### Componentes

- Variável boolenana: $A,B,C, \dots, A_0, A_1, A_2, \dots$
- Valores booleanos: 0 e 1
- Operadores booleanos: 
	- $+$ **(OR)**
	- $\cdot$ **(AND)** 
	- $\bar{A}$ **(NOT)**

---

### Teoremas

1. $\bar{\bar{A}} = A$
2. $A + 0 = A$
3. $A \cdot 1 = A$
4. $A + 1 = 1$
5. $A \cdot 0 = 0$
6. $A + A = A$
7. $A \cdot A = A$
8. $A + \bar{A} = 1$
9. $A \cdot \bar{A} = 0$

---

### Propriedade comutativa

$$ A + B = B + A $$

$$ A \cdot B = B \cdot A $$

---

### Propriedade associativa

$$ A + (B + C) = (A + B) + C $$

$$ A \cdot (B \cdot C) = (A \cdot B) \cdot C $$

---

### Propriedade distributiva

$$ A + (B \cdot C) = (A + B) \cdot (A + C) $$

$$ A \cdot (B + C) = (A \cdot B) + (A \cdot C) $$

---

### Função booleana

- Uma função booleana pode ser explicitada através de uma tabela-verdade ou de uma expressão booleana.
- Dada uma quantidade $n$ de variáveis, existem $2^{(2^n)}$ funções possíveis
- Cada função pode ser expressa de infinitas formas diferentes

---

### Funções de uma variável

Existem exatamente quatro funções booleanas de uma variável

- $f(A) = 0$
- $f(A) = A$
- $f(A) = \bar{A}$
- $f(A) = 1$

---

### Questões de interesse da Álgebra Booleana

1. Dada a expressão booleana de uma função, como obter a sua tabela-verdade?
2. Dada a tabela-verdade de uma função, como obter alguma expressão correspondente a ela?
3. Dada uma expressão booleana, como obter a sua menor versão, se possível?

---

### Teorema da Álgebra Booleana - Parte 2

13. $A + AB = A$
	- $A 1 + AB = A(1+B) = A$
19. $AB + \bar{A}C + BC = AB + \bar{A}C$

---

### Teoremas de De Morgan

21. $\overline{A+B+C+\cdots} = \bar{A} \cdot \bar{B} \cdot \bar{C} \cdot \cdots$
22. $\overline{A \cdot B \cdot C \cdot \cdots} = \bar{A} + \bar{B} + \bar{C} + \cdots$

---

### Mintermo

Todas as combinações possíveis de duas variáveis booleanas usando as operações NOT e AND.

---

Tags: #sistemas-digitais