# Fecho Simétrico

[[MD - Relação Total|PREV]]	[[MD - Fecho Reflexivo|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Para uma [[MD - Relação sobre um conjunto|relação]] sobre um conjunto $\mathcal{R}$, seu **fecho simétrico** $\mathcal{R}^{s}$ é a menor [[MD - Relação Simétrica|relação simétrica]] que contém $\mathcal{R}$. Quando a relação é sobre um conjunto finito, $\mathcal{R}^{s}$ pode ser calculado da seguinte maneira.

$$
\boxed{
\begin{align*} \\ \quad
	\mathcal{R}^{s} = \mathcal{R}^{-1} \cup \mathcal{R}
	\quad \\\\
\end{align*}
}
$$

---

### Demonstração

- $\mathcal{R} \subseteq \mathcal{R}^{s}$: direto da definição.

- $\mathcal{R}^{s}$ é simétrico: isso ocorre se e só se $(\mathcal{R}^{s})^{-1} = \mathcal{R}^{s}$ 
   $$(\mathcal{R}^{s})^{-1} = (\mathcal{R}^{-1} \cup \mathcal{R})^{-1} = \mathcal{R} \cup \mathcal{R}^{-1} = \mathcal{\mathcal{R}^{s}}$$

- $\mathcal{R}^s$ é mínimo: provemos que para toda relação simétrica $\mathcal{S}$ que contém $\mathcal{R}$, vale $\mathcal{R}^s \subseteq \mathcal{S}$. Suponha $(a,b) \in \mathcal{R}^{s}$. Asssim $(a,b)\in \mathcal{R}^{-1}$ ou $(a,b)\in \mathcal{R}$
	- Se $(a,b)\in \mathcal{R}$, então $(a,b) \in \mathcal{S}$ por definição.
	- Se $(a,b) \in \mathcal{R}^{-1}$, então $(b,a)\in \mathcal{R} \subseteq \mathcal{S}$. Como $\mathcal{S}$ é simétrico, então $(a,b)\in \mathcal{S}$.
	
	Logo, $\mathcal{R}^{s} \subseteq \mathcal{S}$, o que completa a demonstração.

---

Tags: #mat-discreta 