# Classes Laterais como Classes de Equivalência da Congruência

---

### Teorema

Se $(G,\cdot)$ é [[MD - Grupo|grupo]] e $H<G$ um [[MD - Subgrupo|subgrupo]], então as [[MD - Classes Laterais à Esquerda|classes laterais à esquerda]] e [[MD - Classes Laterais à Direita|à direita]] são as [[MD - Classe de Equivalência|classes de equivalência]] das [[MD - Congruência de Elementos de um Grupo|relações de congruência]] $\approx_L$ e $\approx_R$, respectivamente. Isto é, para $a \in G$

$$
\begin{align*}
& [\,a\,]_{\approx_L} = aH \\\\
& [\,a\,]_{\approx_R} = Ha
\end{align*}
$$


---

### Corolário

Do resultado acima, é direto que todas as classes de equivalência distintas são **disjuntas**. Ademais, a **união** de todas as classes $aH$ ou $Ha$ é o próprio conjunto $G$. Em outras palavras, os conjuntos $\{\,aH\;|\;a\in G\,\}$ e $\{\,Ha\;|\;a\in G\,\}$ são **partições** de $G$. ^[[[MD - Classe de Equivalência#Disjunção]]] ^[[[MD - Classe de Equivalência#Disjunção]]]

---

### Demonstração

- Demonstrar $[a]_{\approx_R} \subset Ha$

$$
\begin{align*}
x \in [a]_{\approx_R} 
&\quad\implies\quad x \approx_R a  \\
&\quad\implies\quad xa^{-1} \in H \\
&\quad\implies\quad xa^{-1} = h,\; h \in H \\
&\quad\implies\quad x = ha,\; h \in H \\
&\quad\implies\quad x \in Ha
\end{align*}
$$

- Demonstrar $Ha \subset [a]_{\approx_R}$

$$
\begin{align*}
x \in Ha 
&\quad\implies\quad x = ha,\; h \in H \\
&\quad\implies\quad xa^{-1} = h,\; h \in H \\
&\quad\implies\quad xa^{-1} \in H \\
&\quad\implies\quad x \approx_R a  \\
&\quad\implies\quad x \in [a]_{\approx_R}
\end{align*}
$$

Logo, $[a]_{\approx_L} = aH$. A demonstração para $[a]_{\approx_R} = Ha$ é análoga.

---

Tags: #mat-discreta 