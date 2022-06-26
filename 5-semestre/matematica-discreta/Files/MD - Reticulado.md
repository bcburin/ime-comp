# Reticulado

---

### Definição 1

Um [[MD - Conjunto Parcialmente Ordenado|poset]] $(L,\leq)$ é um **reticulado** se e só se quaisquer dois elementos de $L$ possuem [[MD - Supremo e Ínfimo de um Poset|supremo e ínfimo]].

*Obs: isso equivale a dizer que as operações [[MD - Join e Meet|join e meet]] estão definidas para quaisquer dois elementos de $L$.*

---

### Definição 2

Uma trinca $(L, \vee, \wedge)$ é denominda um **reticulado** se e só se satisfaz as seguintes propriedades, para todo $x,y,z \in L$

- **Comutatividade:** 
	- $x \vee y = y \vee x$ 
	- $x \wedge y = y \wedge x$
- **Associatividade:** 
	- $x \vee (y \vee z) = (x \vee y) \vee z$
	-  $x \wedge (y \wedge z) = (x \wedge y) \wedge z$
- **Idempotência:** 
	- $x \vee x = x$
	-  $x \wedge x = x$
- **Absorção:** 
	- $x = x \vee (x \wedge y)$ 
	-  $x = x \wedge (x \vee y)$

---

### Teorema

As definições 1 e 2 são equivalentes.

---

### Teorema

Se $(L,\leq)$ é um reticulado, então para todo $x,y \in L$ tem-se

- $a \vee b = b \quad\iff\quad a \leq b$

- $a \wedge b = a \quad\iff\quad a \leq b$  

---

Tags: #mat-discreta