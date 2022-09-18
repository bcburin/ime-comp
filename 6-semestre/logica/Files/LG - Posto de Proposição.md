# Posto

---

### Definição

Dada uma proposição $\phi$, seu posto $p(\phi)$ é definido por

$$
\begin{cases}
    \;p(\phi) &= 0, \text{para } \phi \text{ atômica}  \\
    \;p((\phi \;\square\; \psi)) &= \max(p(\phi), p(\psi)) + 1 \\
    \;p((\neg \phi)) &= p(\phi) + 1
\end{cases}
$$
---

### Notação

- $p(\phi) < p(\psi)$ será representado por $\phi \prec \psi$
- $p(\phi) \leq p(\psi)$ será representado por $\phi \preceq \psi$

---

Tags: #logica 