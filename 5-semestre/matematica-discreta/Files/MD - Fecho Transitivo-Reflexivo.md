# Fecho Transitivo-Reflexivo
[[MD - Fecho Transitivo|PREV]]	[[matematica-discreta|HOME]]

---

### Definição

Para uma [[MD - Relação sobre um conjunto|relação]] sobre um conjunto $\mathcal{R}$, seu **fecho transitivo-reflexivo** $\mathcal{R}^{*}$ é a menor [[MD - Relação Transitiva|relação transitiva]] e [[MD - Relação Reflexiva|reflexiva]] que contém $\mathcal{R}$. Quando a relação é sobre um conjunto finito, $\mathcal{R}^{*}$ pode ser calculado da seguinte maneira.

$$
\boxed{
\begin{align*} \quad
	\mathcal{R}^{*} = \mathcal{R}^0 \cup \mathcal{R}^+ =  \bigcup_{i=0}^{\infty}\mathcal{R}^{i}
	\quad \\
\end{align*}
}
$$

Em que $R^+$ é o [[MD - Fecho Transitivo|fecho transitivo]] de $\mathcal{R}$.

---

### Demonstração

- $\mathcal{R}^{*}$ contém todos os $\mathcal{R}^{i}$: em particular $\mathcal{R} \subseteq \mathcal{R}^{*}$

- $\mathcal{R}^*$ é transitiva e reflexiva: 
	- Como $\mathcal{R}^0 = \Delta \subseteq \mathcal{R}^{*}$, então $R^*$ é reflexiva.
	- Sejam $(a,b),(b,c)\in \mathcal{R}^*$. Como $\mathcal{R}^* = \Delta \cup \mathcal{R}^+$, há quatro possibilidades:
		- $(a,b),(b,c)\in \Delta$: nesse caso, $a=b=c$ e $(a,c)=(a,a) \in \mathcal{R}^*$
		- $(a,b)\in \Delta$ e $(b,c)\in \mathcal{R}^+$: nesse caso, $a=b$ e $(a,c)=(b,c)\in \mathcal{R}^*$
		- $(a,b)\in \mathcal{R}^+$ e $(b,c)\in \Delta$: nesse caso, $b=c$ e $(a,c)=(a,b)\in \mathcal{R}^*$
		- $(a,b),(b,c)\in \mathcal{R}^+$: como $\mathcal{R}^+$ é transitiva, então $(a,c) \in \mathcal{R}^+ \subseteq \mathcal{R}^*$
	
		Dessa forma, $(a,b),(b,c)\in \mathcal{R}^* \implies (a,c) \in \mathcal{R}^*$ de modo que $\mathcal{R}^*$ é transitiva.

- $\mathcal{R}^*$ é mínima: provemos que para qualquer relação transitiva e reflexiva $\mathcal{T}$ que contenha $\mathcal{R}$, vale $\mathcal{R}^* \subseteq T$. Seja $(a,b)\in \mathcal{R}^*$, então $(a,b)\in \Delta$ ou $(a,b) \in \mathcal{R}^+$
	- Se $(a,b)\in \Delta$, então $a=b$ e $(a,b)=(a,a)\in \mathcal{T}$ pois $\mathcal{T}$ é reflexiva
	- Se $(a,b) \in \mathcal{R}^+$, então $(a,b) \in \mathcal{T}$, pois $\mathcal{R}^+ \subseteq \mathcal{T}$
	
	Logo $(a,b)\in \mathcal{T}$ e, consequentemente, $\mathcal{R}^* \subseteq \mathcal{T}$.

---

Tags: #mat-discreta 