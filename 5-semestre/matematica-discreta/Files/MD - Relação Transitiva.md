# Relação Transitiva

[[MD - Relação Simétrica|PREV]]	[[MD - Relação de Equivalência|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Uma [[MD - Relação sobre um conjunto|relação]] sobre o conjunto $A$ dada por $\mathbf{R} = (A,A,\mathcal{R})$ é simétrica se e somente se, para todo $a_{1},a_{2},a_{3} \in A$, vale $a_{1}\,\mathcal{R}\,a_{2}\;\wedge\;a_{2}\,\mathcal{R}\,a_{3}\implies a_{1}\,\mathcal{R}\,a_{3}$

---

### Propriedade

Uma relação $\mathcal{R}$ sobre $A$ é transitiva se e somente se $\mathcal{R \circ R} \subseteq \mathcal{R}$.

**Demonstração**

**(IDA)** Seja $\mathcal{R}$ transitiva e suponha $(a_{1},a_{3}) \in \mathcal{R \circ R}$, então existe $a_{2} \in A$ tal que $(a_{1},a_{2}) \in \mathcal{R}$ e $(a_{2},a_{3}) \in \mathcal{R}$. Como $\mathcal{R}$ é transitiva, isso implica, por definição, que $(a_{1},a_{3}) \in \mathcal{R}$. Portanto, está provado que $\mathcal{R \circ R} \subseteq \mathcal{R}$.

**(VOLTA)** Seja $\mathcal{R}$ tal que $\mathcal{R \circ R} \subseteq \mathcal{R}$ e suponha $(a_{1},a_{2}) \in \mathcal{R}$ e $(a_{2},a_{3}) \in \mathcal{R}$. Da definição de [[MD - Composição de Relações#Definição|composição de relações]], segue-se que

$$
(a_{1},a_{2}) \in \mathcal{R} \; \wedge \;(a_{2},a_{3}) \in \mathcal{R} \quad\implies \quad (a_{1},a_{3}) \in \mathcal{R \circ R}
$$

Como $\mathcal{R \circ R} \subseteq \mathcal{R}$, temos que

$$
(a_{1},a_{3}) \in \mathcal{R \circ R} \quad\implies \quad (a_{1},a_{3}) \in \mathcal{R}
$$

As duas implicações acima provam que $\mathcal{R}$ é transitiva, completando a demonstração.

---

### Representação matricial

Da propriedade apresentada acima, sabemos que $\mathcal{R}$ é transitiva se e somente se $\mathcal{R \circ R} \subseteq \mathcal{R} \iff (\mathcal{R \circ R}) \cap \mathcal{R} = \mathcal{R \circ R}$.  Sabe-se que a [[MD - Composição de Relações#Composição como multiplicação de matrizes|representação matricial]] da composição $\mathcal{R \circ R}$ é dada por $M_\mathcal{R} \otimes M_\mathcal{R}$. Dessa forma, o equivalente para representações matriciais da relação acima se torna

$$
\boxed{
\begin{align*} \\ \quad
	(M_\mathcal{R} \otimes M_\mathcal{R}) \wedge M_\mathcal{R} = M_\mathcal{R} \otimes M_\mathcal{R} \quad\\\\
\end{align*}
}
$$

Visualmente, isso significa que, para cada entrada não nula de $M_\mathcal{R} \otimes M_\mathcal{R}$, a entrada correspondente em $M_\mathcal{R}$ também deve ser não nula.

---

*Obs: Como cada entrada de $M_\mathcal{R} \otimes M_\mathcal{R}$ é não nula se e só se a entrada correspondente de $(M_\mathcal{R})^2$ também não o for, a análise visual também pode ser feitra pela comparação de  $(M_\mathcal{R})^2$ com $M_\mathcal{R}$.*

---

### **Exemplo**

Seja uma relação sobre um conjunto com representração matricial dada abaixo

$$
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix}
$$

*A relação acima é $\mathcal{R}=\{\,(1,2),(1,3),(2,3),(3,3)\,\}$. Transitividade requeriria as seguintes relações*

- $1\,\mathcal{R}\,2\;\wedge\;2\,\mathcal{R}\,3\;\implies\;1\,\mathcal{R}\,3$
- $1\,\mathcal{R}\,3\;\wedge\;3\,\mathcal{R}\,3\;\implies\;1\,\mathcal{R}\,3$
- $2\,\mathcal{R}\,3\;\wedge\;3\,\mathcal{R}\,3\;\implies\;2\,\mathcal{R}\,3$
- $3\,\mathcal{R}\,3\;\wedge\;3\,\mathcal{R}\,3\;\implies\;3\,\mathcal{R}\,3$

*Como $1\,\mathcal{R}\,3$, $2\,\mathcal{R}\,3$* e $3\,\mathcal{R}\,3$ valem, então a relação é, de fato, transitiva.

*Para fazer a análise por meio das representações matriciais, calculam-se $M_\mathcal{R} \otimes M_\mathcal{R}$ e $(M_\mathcal{R})^2$*

$$
M_\mathcal{R} \otimes M_\mathcal{R}= 
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix} \otimes
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix} =
\begin{pmatrix}0 & 0 & 1 \\ 0 & 0 & 1 \\ 0 & 0 & 1\end{pmatrix}
$$

$$
(M_\mathcal{R})^{2}= 
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix}
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix} =
\begin{pmatrix}0 & 0 & 2 \\ 0 & 0 & 1 \\ 0 & 0 & 1\end{pmatrix}
$$

*Obs: apenas um dos cálculos bastava*

*Como para entrada de $M_\mathcal{R} \otimes M_\mathcal{R}$ não nula, a entrada correspondente em $M_\mathcal{R}$ também é não nula, a relação é transitiva. Algebricamente,*

$$
(M_\mathcal{R} \otimes M_\mathcal{R}) \;\wedge\; M_\mathcal{R} =  \begin{pmatrix}0 & 0 & 1 \\ 0 & 0 & 1 \\ 0 & 0 & 1\end{pmatrix} \; \wedge \; 
\begin{pmatrix} 0 & 1 & 1   \\ 0 & 0 & 1  \\ 0 & 0 & 1\end{pmatrix} = 
\begin{pmatrix}0 & 0 & 1 \\ 0 & 0 & 1 \\ 0 & 0 & 1\end{pmatrix} =
M_\mathcal{R} \otimes M_\mathcal{R}
$$

---

Tags: #mat-discreta 