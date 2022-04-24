# Condição Necessária e Suficiente para Homomorfismo Injetivo

---

### Teorema

Um [[MD - Homomorfismo|homomorfismo]] $\varphi:G\to G'$ é injetivo se e só se

$$
\mathrm{ker}\,(\phi) = \{ e \}
$$

Ou seja, se o [[MD - Núcleo de Homomorfismo|núcleo]] de $\varphi$ contém exclusivamente o [[MD - Elemento Neutro|elemento neutro]] de $G$.

---

### Demonstração

Suponhamos que $\varphi$ seja injetivo. Como $\varphi(e) = e'$ ^[[[MD - Imagem Homomórfica do Elemento Neutro]]], então $\mathrm{ker}\,(\varphi) = \{ e\}$.

Suponhamos, por outro lado, que $\mathrm{ker}\,(\varphi) = \{ e\}$. Tomemos $x,y \in G$ tais que

$$
\begin{align*}
\varphi(x) = \varphi(y) 
&\implies \varphi(x) \,[\varphi(y)]^{-1} = e' \\
&\implies \varphi(x) \,\varphi(y^{-1}) = e' \\
&\implies \varphi(xy^{-1}) = e'
\end{align*}
$$

Donde temos $xy^{-1}=e$ e, consequentemente, $x=y$, de modo que $\varphi$ é injetiva.

---

Tags: #mat-discreta 