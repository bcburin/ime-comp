# Elemento Inverso

---

### Definição

Seja a [[MD - Operação Binária|operação binária]] $\otimes$ sobre $G$ e $\varepsilon \in G$ um [[MD - Elemento Neutro|elemento neutro]] dessa operação. Um elemento $b \in G$ é dito **inverso** de $a \in G$ se satisfaz

$$
b \otimes a = a \otimes b = \varepsilon
$$

*Costuma-se denotar $b$ por $-a$ ou $a^{-1}$*

---

### Propriedades

- $(a^{-1})^{-1}=a$

- $(a \otimes b)^{-1} = b^{-1} \otimes a^{-1}$

---

### Demonstrações

- $(a^{-1})^{-1}=a$
   $$
    \begin{align*}
   a^{-1}\otimes(a^{-1})^{-1} = \varepsilon 
&\quad\implies\quad a \otimes (a^{-1}\otimes(a^{-1})^{-1}) = a \otimes \varepsilon = a\\\\
&\quad\implies\quad \underbrace{(a \otimes a^{-1})}_{\varepsilon} \otimes (a^{-1})^{-1} = a \\
&\quad\implies\quad (a^{-1})^{-1} = a
	\end{align*}
   $$
   
- $(a \otimes b)^{-1} = b^{-1} \otimes a^{-1}$
	$$
	(a \otimes b)(b^{-1} \otimes a^{-1}) = a \otimes \underbrace{(b \otimes b^{-1})}_{\varepsilon} \otimes a^{-1} = a \otimes a^{-1} = \varepsilon
	$$

---

Tags: #mat-discreta 