# Fecho Reflexivo

[[MD - Fecho Simétrico|PREV]]	[[MD - Fecho Transitivo|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Para uma [[MD - Relação sobre um conjunto|relação]] sobre um conjunto $\mathcal{R}$, seu **fecho reflexivo** $\mathcal{R}^{=}$ é a menor [[MD - Relação Reflexiva|relação reflexiva]] que contém $\mathcal{R}$. Quando a relação é sobre um conjunto finito, $\mathcal{R}^{=}$ pode ser calculado da seguinte maneira.

$$
\boxed{
\begin{align*} \\ \quad
	\mathcal{R}^{=} = \mathcal{R}^{0} \cup \mathcal{R} = \Delta \cup \mathcal{R}
	\quad \\\\
\end{align*}
}
$$

---

### Demonstração

- $\mathcal{R} \subseteq \mathcal{R}^{=}$: direto da definição.

- $\mathcal{R}^{=}$ é reflexiva: isso ocorre se e só se $\Delta \subseteq \mathcal{R}^=$, o que segue da definição

- $\mathcal{R}^=$ é mínimo: provemos que para toda relação reflexiva $\mathcal{S}$ que contém $\mathcal{R}$, vale $\mathcal{R^=} \subseteq \mathcal{S}$. Suponha $(a,b) \in \mathcal{R}^{=}$. Asssim $(a,b)\in \Delta$ ou $(a,b)\in \mathcal{R}$
	- Se $(a,b)\in \mathcal{R}$, então $(a,b) \in \mathcal{S}$ por definição.
	- Se $(a,b) \in \Delta$, então $a=b$ e $(a,a) \in \mathcal{S}$.
	- Logo, $\mathcal{R}^{=} \subseteq \mathcal{S}$, o que completa a demonstração.

---

Tags: #mat-discreta 