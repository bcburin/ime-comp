# Relação Inversa

[[MD - Potência de Relações|PREV]]	[[MD - Relação Injetiva|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Se $\mathbf{R} = (A,B,\mathcal{R})$ é uma [[MD - Relação Binária#Definição|relação binária]], define-se a sua relação inversa $\mathbf{R}^{-1} = (B,A,\mathcal{R}^{-1})$  tal que

$$\mathcal{R}^{-1} = \{\;(b,a) \;|\; \forall (a,b) \in \mathcal{R} \;\}$$
Ou seja, $b \,\mathcal{R}^{-1} \,a \iff a \,\mathcal{R}\, b$.

---

### Propriedades

Seja $\mathcal{R}$ relação de $A$ em $B$ e $\mathcal{S}$ relação de $B$ em $C$. Então

- $(\mathcal{S \circ R})^{-1} = \mathcal{R}^{-1}\circ \mathcal{S}^{-1}$

Sejam $\mathcal{R}$ e $\mathcal{S}$ relações de $A$ em $B$. Então

- $\mathcal{R} \subseteq \mathcal{S} \quad\implies \quad R^{-1} \subseteq S^{-1}$

- $(\mathcal{R} \cap \mathcal{S})^{-1} = \mathcal{R}^{-1} \cap \mathcal{S}^{-1}$ e $(\mathcal{R} \cup \mathcal{S})^{-1} = \mathcal{R}^{-1} \cup \mathcal{S}^{-1}$

- $(\mathcal{R}^n)^{-1} = (\mathcal{R}^{-1})^n$ para $n=0,1,2,3,\dots$



**Demonstração**

1. Seja $\mathcal{R} \subseteq \mathcal{S}$. Provar $\mathcal{R^{-1}}\subseteq \mathcal{S}^{-1}$
	- Suponha $(b,a) \in \mathcal{R}^{-1}$
	- Então $(a,b) \in \mathcal{R}$
	- Como $\mathcal{R} \subseteq \mathcal{S}$, segue-se que $(a,b) \in \mathcal{S}$
	- Logo $(b,a) \in \mathcal{S}^{-1}$
	- Assim, $\mathcal{R^{-1}}\subseteq \mathcal{S}^{-1}$
	
2. Provar $(\mathcal{R} \cap \mathcal{S})^{-1} \subseteq \mathcal{R}^{-1} \cap \mathcal{S}^{-1}$
    - Suponha $(b,a) \in (\mathcal{R} \cap \mathcal{S})^{-1}$
	- Então $(a,b) \in \mathcal{R} \cap \mathcal{S}$
	- Logo $(a,b) \in \mathcal{R} \text{ e } (a,b) \in \mathcal{S} \implies (b,a) \in \mathcal{R}^{-1} \text{ e } (b,a) \in \mathcal{S}^{-1}$
	- De modo que $(b,a) \in \mathcal{R}^{-1} \cap \mathcal{S}^{-1}$
	- Portanto  $(\mathcal{R} \cap \mathcal{S})^{-1} \subseteq \mathcal{R}^{-1} \cap \mathcal{S}^{-1}$
   
   Para provar $\mathcal{R}^{-1} \cap \mathcal{S}^{-1} \subseteq (\mathcal{R} \cap \mathcal{S})^{-1}$ basta reverter os passos acima. De maneira análoga, prova-se a relação para a união.
 
3. Prova por indução
	- Caso inicial: para $n=0$, a relação se reduz a $\Delta^{-1} = \Delta$ (a [[MD - Relação de Igualdade|iguldade]] é simétrica).
	- Hipótese indutiva: vale $(\mathcal{R}^{-1})^n = (\mathcal{R}^n)^{-1}$.
	- Passo indutivo: 
	
	$$
	\begin{align*}
		{(\mathcal{R}^{-1})}^{n+1} 
	&= \mathcal{R}^{-1} \circ (\mathcal{R}^{-1})^n  \\
	&= \mathcal{R}^{-1} \circ (\mathcal{R}^{n})^{-1}
	= ( \mathcal{R}^n \circ \mathcal{R})^{-1} \\
	&= (\mathcal{R}^{n+1})^{-1}
	\end{align*}
  $$
  O que completa a indução. Note que foi usada a distribuição da inversa sobre a composição, que será provada a seguir.
  
 
4. Provar $(\mathcal{S \circ R})^{-1} \subseteq \mathcal{R}^{-1}\circ \mathcal{S}^{-1}$
	- Suponha $(c,a) \in (\mathcal{S \circ R})^{-1}$
	- Então $(a,c) \in \mathcal{S \circ R}$
	- Logo existe $b \in B$ tal que $(a,b) \in \mathcal{R}$ e $(b,c) \in \mathcal{S}$
	- Isso equivale a $(c,b) \in \mathcal{S}^{-1}$ e $(b,a) \in \mathcal{R}^{-1}$
	- O que implica $(c,a) \in \mathcal{R}^{-1} \circ \mathcal{S}^{-1}$
	- Assim,  $(\mathcal{S \circ R})^{-1} \subseteq \mathcal{R}^{-1}\circ \mathcal{S}^{-1}$
	
	Para mostrar $\mathcal{R}^{-1}\circ \mathcal{S}^{-1} \subseteq (\mathcal{S \circ R})^{-1}$ basta reverter os passos acima.


---

### Representação matricial

Se $M_\mathcal{R}$ é [[MD - Relação Binária#Representação Matricial|representação matricial]] da relação $\mathbf{R}=(A,B,\mathcal{R})$, então a representação $M_\mathcal{R^{-1}}$ da sua inversa pode ser obtida por

$$
\boxed{
\begin{align*} \\ \quad
	M_\mathcal{R^{-1}} = (M_\mathcal{R})^{T}
\quad \\\\
\end{align*}
}

$$

**Demonstração**

Sejam $M_\mathcal{R} = [r]$ e $M_\mathcal{R^{-1}} = [r^{-1}]$. Então

$$
\begin{align*}
	[r^{-1}]_{ij} = 1 \iff (b_{i},a_{j}) \in \mathcal{R}^{-1} &\iff (a_{j}, b_{i}) \in \mathcal{R} \\
&\iff [r]_{ji} = 1

\end{align*}
$$

De modo análogo, prova-se $[r^{-1}]_{ij} = 0 \iff [r]_{ji}= 0$. Como as matrizes são booleanas, o resultado $M_\mathcal{R^{-1}} = (M_\mathcal{R})^T$ é direto.

---

Tags: #mat-discreta 