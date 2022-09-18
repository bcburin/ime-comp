# Conjunto Consistente

---

### Definições

Um conjunto de proposições $\Gamma \subset PROP$ é consistente se e só se $\Gamma \not\vdash \perp$. Reciprocamente, $\Gamma$ é inconsistente se e só se $\Gamma \vdash \perp$.

---

### Teorema

As seguintes afirmações são equivalentes

1. $\Gamma$ é consistente
2. Para nenhuma proposição $\phi$, $\Gamma \vdash \phi$ e $\Gamma\vdash \neg \phi$
3. Existe pelo menos uma proposição $\phi$ tal que $\Gamma \not \vdash \phi$

De mesmo modo, são equivalentes as

4. $\Gamma$ é inconsistente
5. Existe uma proposição $\phi$ tal que $\Gamma \vdash \phi$ e $\Gamma\vdash \neg \phi$
6. Para toda proposição $\phi$, $\Gamma \vdash \phi$

---

### Demonstração

**(4 -> 5)** Como $\Gamma$ é inconsistente, então $\Gamma \vdash \;\perp\;$, ou seja, há uma derivação $D$ com hipóteses em $\Gamma$ e consequência $\;\perp\;$. Pela regra $(\perp)$ pode-se deduzir $\phi$, de modo que $\Gamma \vdash \phi$. Analogamente, $\Gamma \vdash \neg \phi$.

**(5 -> 6)** Seja $\psi$ tal que $\Gamma \vdash \psi$ e $\Gamma \vdash \neg \psi$, ou seja, há derivações $D_1$ e $D_2$ com hipóteses em $\Gamma$ e e conclusões $\psi$ e $\neg \psi$. Pela regra $(E \rightarrow)$, deduz-se $\;\perp$. Logo, pela regra $(\perp)$ pode-se deduzir $\phi$, para qualquer proposição $\phi$. Como todas as hipóteses estão em $\Gamma$, então $\Gamma \vdash \phi$, para qualquer $\phi$.

**(6 -> 4)** Como $\Gamma \vdash \phi$ para todo $\phi$, então $\Gamma \vdash \psi$ e $\Gamma \vdash \neg \psi$. Isto é, há derivações $D_1$ e $D_2$ ambas com hipóteses em $\Gamma$ que concluem $\psi$ e $\neg \psi$. Pela regra $(E \rightarrow)$, tem-se que elas resultam em $\perp$. Assim, tem-se $\Gamma \vdash \;\perp\;$, ou seja, $\Gamma$ é inconsistente.

---

Tags: #logica 