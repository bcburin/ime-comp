
# FORM

---

### Definição

O **conjunto das fórmulas** $FORM$ é o menor subconjunto $X$ de uma [[LG - Linguagem de Tipo de Similaridade|linguagem de tipo de similaridade]] com as seguintes propriedades

1. Os **átomos** pertencem a $X$
	- $\perp \in X$
	- $P_i \in X$ se $r_i = 0$
	- $t_1,\cdots,t_{r_i} \in TERM \implies P_i(t_1,\cdots,t_{r_i}) \in X$
	- $t_1,t_2 \in TERM \implies t_1=t_2\in X$
2. $\phi,\psi \in X \implies (\phi \;\square\; \psi) \in X$ em que $\;\square\;\in\{\wedge, \vee, \rightarrow, \leftrightarrow\}$
3. $\phi \in X \implies (\neg \phi) \in X$
4. $\phi \in X \implies ((\forall x_i)\phi), ((\exists x_i)\phi) \in X$ 

---

Tags: #logica

