# Grupo

---

### Definição

Um **grupo** é o par ordenado $(G,\otimes)$ tal que $(G,\otimes)$ é um [[MD - Monóide|monóide]] e, para todo $g \in G$, existe um [[MD - Elemento Inverso|elemento inverso]]. Isto é, deve valer

- $\otimes$ é [[MD - Operação Binária|fechada]]
- $\otimes$ é [[MD - Associatividade|associativa]]
- $G$ possui [[MD - Elemento Neutro|elemento neutro]]
- $G$ possui [[MD - Elemento Inverso|inverso]] para todo $g \in G$

---

### Unicidade do elemento inverso

Seja o grupo $(G,\otimes)$ e $\varepsilon$ seu [[MD - Monóide#Unicidade do elemento neutro|único]] elemento neutro. Suponha que $g \in G$ tenha dois inversos, $a$ e $b$,

$$
\begin{align*}
	a \otimes g = \varepsilon \quad\implies\quad & (a \otimes g) \otimes b = \varepsilon \otimes b\\
\quad\implies\quad & a \otimes ( g \otimes b) = b \\
\quad\implies\quad & a \otimes \varepsilon = b \\
\quad\implies\quad & a = b
\end{align*}
$$

Portanto o elemento inverso de $g$ é único, sendo denotado por $a=b=g^{-1}$.

---

Tags: #mat-discreta 