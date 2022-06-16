# Teorema Fundamental do Homomorfismo

---

### Teorema

Seja $H$ um [[MD - Subgrupo Normal|subgrupo normal]] de $G$. Então $\gamma:G \to G/H$ dada por $\gamma(g)=gH$ é um [[MD - Homomorfismo|homomorfismo]] de [[MD - Núcleo de Homomorfismo|núcleo]] $H$ e $\mu:G/H \to \phi[G]$ dada por $\mu(gH)=\phi(g)$ é um [[MD - Isomorfismo|isomorfismo]]. Assim sendo, $\phi$ pode ser fatorado em $\phi=\mu\gamma$.

*Obs: nesse caso, $\gamma$ é chamado de homomorfismo natural ou canônico, e $\mu$ de isomorfismo natural ou canônico.*

---

### Demonstração

Note que, como o núcleo $H$ é um [[MD - Subgrupo Normal|subgrupo normal]], então o [[MD - Grupo Quociente|grupo quociente]] $G/H$ está definido e é, de fato, grupo. Assim sendo, $\gamma$ satisfaz

$$
\gamma(xy) = (xyH) = (xH)(yH) = \gamma(x)\,\gamma(y)
$$

E é, portanto, um homomorfismo. Seu núcleo é composto pelos valores de $x$ que satisfazem $\gamma(x)=H$. Como $xH=H$ se e só se $x \in H$, então vemos que o $\mathrm{ker}(\gamma)=H$.

Por outro lado, $\mu$ é também um homomorfismo, pois

$$
\begin{align*}
\mu\big((xH)(yH)\big) 
&= \mu\big((xy)H\big) \\
&= \phi(xy) = \phi(x)\phi(y) \\
&= \mu(xH)\,\mu(yH) 
\end{align*}
$$

Por construção, $\mu$ é sobrejetora, pois para um $\phi(g) \in \phi[G]$ temos $\mu(gH)=\phi(g)$. Para mostrar que é injetora, provemos que $\mathrm{ker}(\mu)=\{H\}$. Sabemos que $\mu(H)=\phi(e)=e'$, logo $\{H\}\subset \mathrm{ker}(\mu)$. Agora, suponhamos $xH \in \mathrm{ker}(\mu)$, então $\phi(x)=e'$, o que implica $x \in \mathrm{ker}(\phi)=H$. Portanto, $xH=H$, em outras palavras, $xH \subset {H}$. Logo, $\mathrm{ker}(\mu)= \{H\}$ e, como $H$ é o elemento neutro em $G/H$, então $\mu$ é injetora^[[[MD - Homomorfismo Injetivo]]]. Desse modo, $\mu$ é um isomorfismo.

---

Tags: #mat-discreta 