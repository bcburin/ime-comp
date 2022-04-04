# Congruência como Relação de Equivalência

---

### Teorema

Se $(G,\cdot)$ é [[MD - Grupo|grupo]] e $H<G$ um [[MD - Subgrupo|subgrupo]], então a [[MD - Congruência de Elementos de um Grupo|relação de congruência]] é uma [[MD - Relação de Equivalência|relação de equivalência]].

---

### Demonstração

- **Reflexividade** 
   $$
   aa^{-1} = e \in H \quad\implies\quad a \approx_R a 
   $$

- **Simetria**
   $$
   \begin{align*}
   a \approx_R b  &\quad\implies\quad ab^{-1} \in H \\
	&\quad\implies\quad (ab^{-1})^{-1} \in H\\
	&\quad\implies\quad ba^{-1} \in H\\
	&\quad\implies\quad b \approx_R a
	\end{align*}
   $$

- **Transitividade**
	$$
	\begin{align*}
	a \approx_R b  \quad\text{ e }\quad b \approx_R c  &\quad\implies\quad ab^{-1} \in H \text{ e } bc^{-1} \in H \\
	&\quad\implies\quad ab^{-1}bc^{-1} \in H\\
	&\quad\implies\quad ac^{-1} \in H \\
	&\quad\implies\quad a \approx_R c
	\end{align*}
	$$
	
O que mostra que a congruência é uma relação de equivalência.

*Note que essa demonstração foi para $\approx_R$. A prova para $\approx_L$ é análoga*.

---

Tags: #mat-discreta