# Valoração de Conjunto Consistente (Recíproca)

---

### Teorema

Se  $\Gamma$ é [[LG - Conjunto Consistente|consistente]], então existe uma [[LG - Valoração|valoração]] $v$ tal que $v(\phi)=1$ para todo $\phi \in \Gamma$

Equivalentemente, se um conjunto é [[LG - Conjunto Consistente|consistente]] então ele é [[LG - Proposição Satisfazível|satisfazível]].

---

### Demonstração

Como $\Gamma$ é consistente, existe um $\Gamma^*$ [[LG - Conjunto Maximalmente Consistente|maximalmente consistente]] tal que $\Gamma \subset \Gamma^*$. Defina a valoração $v$  para as proposições atômicas tal que 

$$
v(p_i) = 
\begin{cases} 
 & 1 \quad \text{se } p_i \in \Gamma* \\
 & 0 \quad \text{se } p_i \not\in \Gamma* \\
\end{cases}
$$
e estenda para toda proposição $\phi$. Provemos [[LG - Princípio da Indução sobre a PROP|por indução]] que $v(\phi) = 1 \iff \phi \in \Gamma^*$

1. Para $\phi$ atômica isso se verifica por definição
2. Seja $\phi = \psi \;\square\; \sigma$ e $v(\psi) = 1 \iff \psi \in \Gamma^*$ e $v(\sigma) = 1 \iff \sigma \in \Gamma^*$.
	1. $\phi = \psi \wedge \sigma$
		- $v(\phi) = 1 \implies v(\psi) = 1 \text{ e } v(\sigma) = 1 \implies \psi, \sigma \in \Gamma^* \implies \Gamma^* \vdash \psi \text{ e } \Gamma^* \vdash \sigma \implies \Gamma^* \vdash \psi \wedge \phi$, então $\phi = \psi \wedge \phi \in \Gamma^*$^[[[LG - Todo CMC é Fechado sob Derivabilidade]]].
		- 

---

Tags: #logica 

Related: [[LG - Valoração de Conjunto Consistente]]
