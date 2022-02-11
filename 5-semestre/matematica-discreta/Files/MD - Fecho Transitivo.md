# Fecho Transitivo

[[MD - Fecho Reflexivo|PREV]]	[[MD - Fecho Transitivo-Reflexivo|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Para uma [[MD - Relação sobre um conjunto|relação]] sobre um conjunto $\mathcal{R}$, seu **fecho transitivo** $\mathcal{R}^{+}$ é a menor [[MD - Relação Transitiva|relação transitiva]] que contém $\mathcal{R}$. Quando a relação é sobre um conjunto finito, $\mathcal{R}^{+}$ pode ser calculado da seguinte maneira.

$$
\boxed{
\begin{align*} \quad
	\mathcal{R}^{+} = \bigcup_{i=1}^{\infty}\mathcal{R}^{i}
	\quad \\
\end{align*}
}
$$

---

### Demonstração

- $\mathcal{R}^{+}$ contém todos os $\mathcal{R}^{i}$: em particular $\mathcal{R} \subseteq \mathcal{R}^{+}$

- $\mathcal{R}^+$ é transitiva: se $(a_{1},a_{2}),(a_{2},a_{3})\in \mathcal{R}^{+}$, então $(a_1,a_2)\in \mathcal{R}^i$ e $(a_2,a_3)\in \mathcal{R}^j$ para algum $i,j$. Como a composição é associativa, $\mathcal{R}^{i+j} = R^j \circ R^i$, de modo que $(a_1,a_3)\in \mathcal{R}^{i+j}$ pela definição de composição. Como $\mathcal{R}^{i+j} \subseteq \mathcal{R}^+$, então $(a_1,a_3) \in \mathcal{R}^+$, o que mostra que $\mathcal{R}^+$ é transitiva.

- $\mathcal{R}^+$ é mínima: provemos, por indução, que para qualquer relação transitiva $\mathcal{T}$ que contenha $\mathcal{R}$, $R^i \subseteq T$
	- Caso inicial: $\mathcal{R} \subseteq \mathcal{T}$ por hipótese
	- Hip. indutiva: para $k$, vale $\mathcal{R}^k \subseteq \mathcal{T}$
	- Passo indutivo: seja $(a_1,a_3)\in \mathcal{R}^{k+1}$, então $(a_1,a_3) \in \mathcal{R} \circ \mathcal{R}^{k}$. Pela definição de decomposição, exite $a_2$ tal que $(a_1,a_2)\in \mathcal{R}^{k}$ e $(a_2,a_3) \in \mathcal{R}$. Pela hipótese indutiva, temos $(a_1,a_2),(a_2,a_3) \in \mathcal{T}$. Logo $(a_1,a_3)\in \mathcal{T}$ pela transitividade de  $\mathcal{T}$. Assim $\mathcal{R}^{k+1} \subseteq \mathcal{T}$, o que completa a indução.

	Finalmente, como $\mathcal{R}^i \subseteq \mathcal{T}$ para todo $i$, então $\mathcal{R}^+ \subseteq \mathcal{T}$ pela definição de $\mathcal{R}^+$
 
---

Tags: #mat-discreta 