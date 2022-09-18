# Conjunto das Subfórmulas

---

### Definição

O **conjunto das subfórmulas** de $\phi$, $Sub(\phi)$, é definido recursivamente por

- $Sub(\phi) = \{\,\phi\,\}$, se $\phi$ é atômica
- $Sub(\phi_1 \;\square\; \phi_2) = Sub(\phi_1) \cup Sub(\phi_2) \cup \{\, \phi_1 \;\square\; \phi_2 \,\}$
- $Sub(\neg \phi) = Sub(\phi) \cup \{\,\neg \phi\,\}$

Diz-se que $\psi$ é **subfórmula** de $\phi$ se e só se $\psi \in Sub(\phi)$.

---

Tags: #logica 