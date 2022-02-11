# Relação Binária
[[MD - Operações de Conjunto sobre Relação|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Uma **relação binária** entre dois conjuntos $A$ e $B$ é uma tripla ordenada $\mathbf{R} = (A,B,\mathcal{R})$, na qual $\mathcal{R} \subseteq A \times B$. Lê-se $(a,b) \in \mathcal{R}$ como "$a$ está relacionado a $b$" e se escreve $a \,\mathcal{R}\, b$.

---

### Representação Matricial

Sejam $A = \{a_{1}, a_{2,},\cdots,a_{m}\}$ e $B = \{b_{1}, b_{2,},\cdots,b_{n}\}$ conjuntos não vazios e finitos. Então uma relação $\mathbf{R}=(A,B,\mathcal{R})$ pode ser representada pela matriz booleana $M_\mathcal{R} = [\,r\,]_{ij}$ de ordem $m \times n$ definida a seguir

$$
[\,r\,]_{ij} =

\begin{cases}
	1 \,,\quad (a_i,b_{j})\in \mathcal{R} \\\\
	0 \,,\quad (a_i,b_{j}) \not\in \mathcal{R}
\end{cases}
$$

---

Tags: #mat-discreta 