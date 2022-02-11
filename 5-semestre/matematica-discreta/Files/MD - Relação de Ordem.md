# Relação de Ordem

[[MD - Relação Antissimétrica|PREV]]	[[MD - Relação Total|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Uma [[MD - Relação sobre um conjunto|relação]] sobre um conjunto $A$ é uma relação de ordem (parcial) se e só se é [[MD - Relação Reflexiva|reflexiva]], [[MD - Relação Transitiva|transitiva]] e [[MD - Relação Antissimétrica|antissimétrica]].

Uma [[MD - Relação sobre um conjunto|relação]] sobre um conjunto $A$ é uma relação de ordem parcial se e só se é uma relação de ordem e é uma [[MD - Relação Total|relação total]].

---

### Exemplo

*A matriz abaixo representa uma relação de ordem total.*

$$
\begin{pmatrix}1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1\end{pmatrix}
$$

*Facilmente verifica-se que a relação acima é reflexiva, antissimétrica e total. Para verificar se é transitiva, calculemos $M_\mathcal{R}^{2}$*


$$
M_\mathcal{R}^{2} = 
\begin{pmatrix}1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1\end{pmatrix}
\begin{pmatrix}1 & 1 & 1 \\ 0 & 1 & 1 \\ 0 & 0 & 1\end{pmatrix}=
\begin{pmatrix}1 & 2 & 3 \\ 0 & 1 & 2 \\ 0 & 0 & 1\end{pmatrix}
$$

*Como* a cada caminho de dois passos corresponde um caminho de um único passo, então a relação é transitiva. Portanto, é também uma relação de ordem.

---

Tags: #mat-discreta 