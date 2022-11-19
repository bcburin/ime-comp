# Valoração de Conjunto Consistente

---

### Teorema

Se existe uma [[LG - Valoração|valoração]] $v$ tal que $v(\phi)=1$ para todo $\phi \in \Gamma$, então $\Gamma$ é [[LG - Conjunto Consistente|consistente]].

Equivalentemente, se um conjunto é [[LG - Proposição Satisfazível|satisfazível]] então ele é [[LG - Conjunto Consistente|consistente]].

---

### Demonstração

Suponha que $\Gamma$ seja inconsistente, ou seja, $\Gamma \vdash \perp$. Então, por [[LG - Corretude|corretude]], segue-se que $\Gamma \models \perp$. Como $v(\phi) = 1$ para todo $\phi \in \Gamma$, então $v(\perp) = 1$, o que é um absurdo, já que $v(\perp) = 0$ para toda valoração. Portanto, $\Gamma$ deve ser consistente.

---

Tags: #logica 