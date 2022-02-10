# Relação Transitiva
---

### Definição

Uma [[MD - Relação sobre um conjunto|relação]] sobre o conjunto $A$ dada por $\mathbf{R} = (A,A,\mathcal{R})$ é simétrica se e somente se, para todo $a_{1},a_{2},a_{3} \in A$, vale $a_{1}\,\mathcal{R}\,a_{2}\;\wedge\;a_{2}\,\mathcal{R}\,a_{3}\implies a_{1}\,\mathcal{R}\,a_{3}$

---

### **Exemplo**

$$
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix}
$$

*A relação acima é $\mathcal{R}=\{\,(1,2),(1,3),(2,3),(3,3)\,\}$. Transitividade requeriria as seguintes relações*

- $1\,\mathcal{R}\,2\;\wedge\;2\,\mathcal{R}\,3\;\implies\;1\,\mathcal{R}\,3$
- $1\,\mathcal{R}\,3\;\wedge\;3\,\mathcal{R}\,3\;\implies\;1\,\mathcal{R}\,3$
- $2\,\mathcal{R}\,3\;\wedge\;3\,\mathcal{R}\,3\;\implies\;2\,\mathcal{R}\,3$
- $3\,\mathcal{R}\,3\;\wedge\;3\,\mathcal{R}\,3\;\implies\;3\,\mathcal{R}\,3$

*Como $1\,\mathcal{R}\,3$, $2\,\mathcal{R}\,3$* e $3\,\mathcal{R}\,3$ valem, então a relação é, de fato, transitiva.

*Obs: assim como a matriz $M_\mathcal{R}$ acima mostra os caminhos de um único passo possíveis entre dois nós, a matriz $M_{\mathcal{R}}^{2}$ mostra os caminhos possíveis de dois passos entre os nós.

$$
M_\mathcal{R}^{2}= 
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix}
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix} =
\begin{pmatrix}0 & 0 & 2 \\ 0 & 0 & 1 \\ 0 & 0 & 1\end{pmatrix}
$$

*Observe que as entradas de $M_\mathcal{R}^2$ correspondem ao encontrado anteriormente. Ademais, a todas as entradas não nulas de $M_\mathcal{R}^2$ correspondem entradas não nulas em $M_\mathcal{R}$. 

*Desse modo, obtém-se uma maneira simples de verificar se uma relação é transitiva: calcular a matriz $M_\mathcal{R}^2$ e compará-la à matriz $M_\mathcal{R}$; se todas as entradas não nulas da primeira corresponderem a entradas não nulas da segunda, então a relação é transitiva.*

---

Tags: #mat-discreta 