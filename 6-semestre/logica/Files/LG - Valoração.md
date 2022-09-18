# Valoração

---

### Definição

Uma aplicação $v: PROP \rightarrow \{0, 1\}$ é uma **valoração** se e só se satisfaz

- $v(\,(\phi \wedge \psi)\,) = \min\{v(\phi), v(\psi)\}$
- $v(\,(\phi \vee \psi)\,) = \max\{v(\phi), v(\psi)\}$
- $v(\,(\phi \rightarrow \psi)\,) = \max\{1 - v(\phi), v(\psi)\}$
- $v(\,(\phi \leftrightarrow \psi)\,) = 1$ se e só se $v(\phi)=v(\psi)$
- $v(\,(\neg \phi)\,) = 1 - v(\phi)$
- $v(\bot)=0$

---

Tags: #logica 