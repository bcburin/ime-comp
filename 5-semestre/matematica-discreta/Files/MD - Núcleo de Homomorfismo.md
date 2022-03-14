# Núcleo

---

### Definição

Sendo $(G,\oplus)$ e $(G',\otimes)$ [[MD - Grupo|grupos]] e $\varphi$ um [[MD - Homomorfismo|homomorfismo]] entre eles, define-se seu **núcleo** como o conjunto

$$
\mathrm{ker}(\varphi) = \{\; g \in G \;|\; \varphi(g) = \varepsilon' \;\}
$$

---

### Teorema

O núcleo de um homomorfismo é subgrupo de seu domínio. 

$$\mathrm{ker}(\varphi) < G$$

---

### Demontração

Sejam $x,y \in \mathrm{ker}(\varphi)$, então

$$
\begin{align*}
& \varphi(x) = \varepsilon' \\
& \varphi(y) = \varepsilon'
\end{align*}
$$

Como $\varphi(y^{-1}) = (\varphi(y))^{-1}$, $\forall y \in G$ ^[[[MD - Imagem Homomórfica do Elemento Inverso]]], então $\varphi(y^{-1}) = (\varepsilon')^{-1} = \varepsilon'$. Assim,

$$
\begin{align*}
\varphi(x \oplus y^{-1}) &= \varphi(x) \otimes \varphi(y^{-1}) \\
&= \varepsilon' \otimes \varepsilon'\\
&= \varepsilon'	
\end{align*}
$$

O que implica $x \oplus y^{-1} \in \mathrm{ker}(\varphi)$, de modo que $\mathrm{ker}(\varphi) < G$. ^[[[MD - Condição Necessária e Suficiente para ser Subgrupo]]]

---

Tags: #mat-discreta 