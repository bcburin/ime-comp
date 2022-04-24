# Núcleo de Homomorfismo é Subgrupo Normal

---

### Teorema

Se $\varphi:G \to G'$ é um [[MD - Homomorfismo|homomorfismo]], então o [[MD - Núcleo de Homomorfismo|núcleo]] $\mathrm{ker}\,(\varphi)$ é um [[MD - Subgrupo Normal|subgrupo normal]] de $G$.

---

### Demonstração

Já sabemos que $\mathrm{ker}\,(\varphi) < G$ ^[[[MD - Núcleo de Homomorfismo#Teorema]]]. Então, basta mostrar que $g\,\mathrm{ker}\,(\varphi)\,g^{-1}=\mathrm{ker}\,(\varphi)$.

Seja $x=ghg^{-1} \in g\,\mathrm{ker}\,(\varphi)\,g^{-1}$, de modo que $\varphi(h)=e'$. Então 

$$
\begin{align*}
\varphi(x) &= \varphi(ghg^{-1}) \\
&= \varphi(g)\varphi(h)\varphi(g^{-1}) \\
&= \varphi(g)e'\varphi(g^{-1}) \\
&= \varphi(gg^{-1}) \\
&= \varphi(e) = e'
\end{align*}
$$

Portanto $x \in \mathrm{ker}(\varphi)$ e $g\,\mathrm{ker}(\varphi)\,g^{-1} \subset \mathrm{ker}(\varphi)$.

Seja, agora, $x \in \mathrm{ker}(\varphi)$ e $g \in G$ qualquer. Temos que

$$
x = g(g^{-1}xg)g^{-1}
$$

Em que

$$
\varphi(g^{-1}xg) = \varphi(g^{-1}) \underbrace{\varphi(x)}_{e'} \varphi(g) = \varphi(g^{-1}g) = \varphi(e) = e'
$$

De modo que $g^{-1}xg \in \mathrm{ker}(\varphi)$, ou seja, $\mathrm{ker}(\varphi) \subset g\,\mathrm{ker}\,(\varphi)\,g^{-1}$.

Do exposto acima, conclui-se $\mathrm{ker}(\varphi) = g\,\mathrm{ker}\,(\varphi)\,g^{-1}$, isto é, $\mathrm{ker}(\varphi)$ é subgrupo normal de $G$.

---

Tags: #mat-discreta 