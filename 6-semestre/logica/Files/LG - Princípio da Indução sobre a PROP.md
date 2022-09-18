# Princípio da Indução

---

### Teorema

Seja $A$ uma propriedade, então $A(\phi)$ se verifica para todo $\phi \in PROP$ se

1. $A(p_i)$, para todo $i$, e $A(\perp)$
2. $A(\phi), A(\psi) \implies A((\phi \;\square\; \psi))$
3. $A(\phi) \implies A((\neg \phi))$

---

### Demonstração

Seja $X = \{\; \phi \in PROP \;|\; A(\phi) \;\}$. Da definição de [[LG - PROP|PROP]], vemos que $X$  atende às suas três propriedades, de modo que $X \subset PROP$. Porém, a $PROP$ é definida como o menor conjunto atendendo-os, assim $PROP \subset X$. Portanto, segue-se que $X = PROP$.

---

Tags: #logica 