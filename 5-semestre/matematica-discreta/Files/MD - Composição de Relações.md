# Composição de relações

[[MD - Operações de Conjunto sobre Relação|PREV]]	[[MD - Relação sobre um conjunto|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Dadas as [[MD - Relação Binária|relações]] $\mathbf{R}=(A,B,\mathcal{R})$ e $\mathbf{S}=(B,C,\mathcal{S})$ , define-se a composição das relações $\mathbf{S} \circ \mathbf{R} = (A,C,\mathcal{S} \circ \mathcal{R})$ com $\mathcal{S}\circ \mathcal{R} \in A \times C$, sendo que

$$
\boxed{
\begin{align*} \\

	 \quad
	\mathcal{S} \circ \mathcal{R} = \{\;(a,c) \in A \times C \;|\; \exists\, b \text{ tal que } (a,b)\in \mathcal{R} \,\wedge\, (b,c)\in \mathcal{S}\} 
	\quad\\\\

\end{align*}
}
$$

---

### Composição como multiplicação de matrizes

Sejam $A = \{a_{1}, a_{2,},\cdots,a_{m}\}$ e $B = \{b_{1}, b_{2,},\cdots,b_{n}\}$ e $C = \{c_{1}, c_{2,},\cdots,c_{p}\}$ conjuntos não vazios e finitos. Dadas duas relações $\mathbf{R}=(A,B,\mathcal{R})$ e $\mathbf{S}=(B,C,\mathcal{S})$ e suas respectivas [[MD - Relação Binária#Representação Matricial|matrizes booleanas]] $M_{\mathcal{R}}$ e $M_\mathcal{S}$, a matriz booleana correspondente à composição $\mathbf{S}\circ \mathbf{R}$ é dada por

$$
\boxed{

\begin{align*}

	\\ \quad
	{ M_{\mathcal{S}\circ\mathcal{R}} = M_\mathcal{R} \,\otimes\, M_\mathcal{S} }
	\quad \\\\

\end{align*}

}
$$

Ademais, também se pode calcular a **matriz quantidade de caminhos**, cujas entradas $ij$ representam a quantidade de elementos  $b \in B$ para os quais vale $(a_{i},b)\in \mathcal{R} \wedge (b,c_{j})\in \mathcal{S}$.

$$
\boxed{

\begin{align*}

	\\ \quad
	{ \mathbf{N}_{\mathcal{S}\circ\mathcal{R}} = M_\mathcal{R} \; M_\mathcal{S} }
	\quad \\\\

\end{align*}

}
$$

---

- *Obs: das definições acima, percebe-se que a matriz $\mathbf{N}_\mathcal{S\circ R}$ e a matriz booleana $M_{S\circ R}$ terão entradas nulas correspondentes (serão iguais a zero nos mesmos lugares). Isto é, $M_{S\circ R}$ pode ser obtida substituindo as entradas não nulas de $\mathbf{N}_\mathcal{S\circ R}$ por $1$.*

- *Obs: a operação $\otimes$ representa aqui a multiplicação matricial utilizando os operadores $(\wedge,\vee)$ - **E** lógico e **OU** lógico, respectivamente - ao invés de $(\;\cdot\;,+)$. Em outras palavras, o elemento $[c]_{ij}$ da matriz $C_{m \times p} = A_{m \times n} \otimes B_{n \times p}$ é definido como*

$$
[c]_{ij} = \bigvee_{k=1}^{n}\;[a]_{ik} \,\wedge\, [b]_{kj} 
$$

---

### **Demonstração**

Sendo $M_\mathcal{R} = [r]_{ik}$ e $M_\mathcal{S} = [s]_{kj}$ e $M_{\mathcal{S}\circ\mathcal{R}} = M_\mathcal{R} \,\otimes\, M_\mathcal{S} = [rs]_{ij}$, para demonstrar a primeira igualdade, quer-se provar 

$$ [rs]_{ij} = 1 \iff (a_i,c_{j}) \in \mathcal{S\circ R} $$

**(IDA)** Suponhamos $[rs]_{ij} = 1$. Pela definição de $\vee$, existe um $k$ tal que

$$ [r]_{ik} \wedge [s]_{kj} = 1 $$

O que, pela definição de $\wedge$, implica

$$
\begin{cases}
	[r]_{ik} = 1 \quad \implies \quad (a_{i},b_{k}) \in \mathcal{R} \\\\
	
	[s]_{kj} = 1 \quad \implies \quad (b_{k},c_{j}) \in \mathcal{S}
\end{cases}
$$

Ou seja, pela definição de composição de relações, $(a_{i},c_{j}) \in \mathcal{S \circ R}$.

**(VOLTA)** Suponhamos $(a_{i},c_{j}) \in \mathcal{S\circ R}$. Portanto, existe $k$ para o qual

$$
\begin{cases}
	(a_{i},b_{k}) \in \mathcal{R} \quad \implies \quad [r]_{ik} = 1 \\\\
	
	(b_{k},c_{j}) \in \mathcal{S} \quad \implies \quad [s]_{kj} = 1
\end{cases}
$$
De modo que $[r]_{ik} \wedge [s]_{kj} = 1$ e, pela definição de $\vee$, $[rs]_{ik} = 1$, o que completa a primeira parte da prova.

Para demonstrar a segunda parte do teorema, definamos os conjuntos

$$ B_{ij} = \{ \; b \in B \; | \; (a_i,b)\in \mathcal{R} \; \wedge \; (b,c_{j}) \in \mathcal{S}\;\} $$

Assim, queremos demonstar que $[\mathbf{N}_{\mathcal{S\circ R}}]_{ij} = |B_{ij}|$. Perceba que

$$
\begin{align*}
	b_{k} \in B_{ij} &\iff 
	\begin{cases}
		& (a_{i},b_{k}) \in \mathcal{R} \iff [r]_{ik} = 1 \\\\
		& (b_{k},c_{j}) \in \mathcal{S} \iff [s]_{kj} = 1
	\end{cases}\\\\
	& \iff [r]_{ik} [s]_{kj} = 1
\end{align*}

$$
Como o produto $[r]_{ik}[s]_{kj}$ pode assumir apenas os valores $0$ e $1$, segue-se, da equivalência acima, que

$$
[r]_{ik}[s]_{kj} = 

\begin{cases}
	& 1\,,\quad b_{k} \in B_{ij}    \\\\
	& 0\,,\quad b_{k} \not\in B_{ij}
\end{cases}
$$

Portanto, para obter a cardinalidade de $B_{ij}$ basta somar o produto acima para todos os valores $b \in B = \{b1,b2,\cdots,b_n\}$

$$
|B_{ij}| = \sum\limits_{k=1}^{n}\;[r]_{ik}[s]_{kj}
$$
No entanto, o  somatório da direita é, pela definição da multiplicação usual de matrizes, a entrada $[\mathbf{N}_{\mathcal{S \circ} R}]_{ij}$

$$|B_{ij}| = [\mathbf{N}_{\mathcal{S \circ} R}]_{ij}$$
Como queriamos provar.

---

### **Exemplo**

Sejam $A=\{1,2\}$, $B = \{a,b,c\}$ e $C=\{x,y\}$, com 

- $\mathcal{R} = \{\;(1,a),(1,b),(1,c),(2,b)\;\}$
- $\mathcal{S} = \{\;(a,x),(b,x),(c,y)\;\}$ 

Dessa forma, $\mathcal{S \circ R} = \{\;(1,x),(1,y),(2,x)\;\}$

Analisando matricialmente,

$$
	M_\mathcal{R} =
	\begin{pmatrix} 1 & 1 & 1 \\ 0 & 1 & 0 \end{pmatrix}

	\quad \quad \quad \quad \quad \quad 

	M_\mathcal{S} = 
	\begin{pmatrix} 1 & 0 \\ 1 & 0 \\ 0 & 1  \end{pmatrix}
$$
O que nos permite calcular

$$
M_{\mathcal{S \circ R}} = 

\begin{pmatrix} 1 & 1 & 1 \\ 0 & 1 & 0 \end{pmatrix} \;\otimes\;

\begin{pmatrix} 1 & 0 \\ 1 & 0 \\ 0 & 1  \end{pmatrix} = 

\begin{pmatrix} 1 & 1 \\ 1 & 0\end{pmatrix}
$$

$$
\mathbf{N}_{\mathcal{S \circ R}} = 

\begin{pmatrix} 1 & 1 & 1 \\ 0 & 1 & 0 \end{pmatrix} \;

\begin{pmatrix} 1 & 0 \\ 1 & 0 \\ 0 & 1  \end{pmatrix} = 

\begin{pmatrix} 2 & 1 \\ 1 & 0\end{pmatrix}
$$
Que novamente implica $\mathcal{S \circ R} = \{\;(1,x),(1,y),(2,x)\;\}$

*Note  que a matriz $\mathbf{N}_{\mathcal{S \circ R}}$ acusa que há dois caminhos de $1$ para $x$: $(1,a) \wedge (a,x)$ e $(1,b) \wedge (b,x)$.*

---

Tags: #mat-discreta   