# Monóide

---

### Definição

Um **monóide** é o par ordenado $(G,\otimes)$ tal que $(G,\otimes)$ é um [[MD - Semigrupo|semi-grupo]] e $G$ possui [[MD - Elemento Neutro|elemento neutro]]. Isto é, deve valer

- $\otimes$ é [[MD - Operação Binária|fechada]]
- $\otimes$ é [[MD - Associatividade|associativa]]
- $G$ possui [[MD - Elemento Neutro|elemento neutro]]

---

### Unicidade do elemento neutro

O elemento neutro de um monóide é único.

**Demonstração**

Sejam $\varepsilon$ e $\varepsilon'$ elementos neutros do monóide $(G,\otimes)$, então

$$
\begin{align*}
	& g \otimes \varepsilon = g,\; \forall g \in G \quad\implies \quad \varepsilon' \otimes \varepsilon = \varepsilon' \\\\
& \varepsilon' \otimes g = g,\; \forall g \in G \quad\implies \quad \varepsilon' \otimes \varepsilon = \varepsilon
\end{align*}
$$

Logo $\varepsilon'=\varepsilon$, ou seja, o elemento neutro é único.

---

Tags: #mat-discreta 