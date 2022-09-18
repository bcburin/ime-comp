# Propriedades do Conjunto Maximalmente Consistente

---

### Teorema

Se $\Gamma$ é [[LG - Conjunto Maximalmente Consistente|maximalmente consistente]], então 

1. Para todo $\phi$, ou $\phi\in\Gamma$ ou $\neg\phi\in\Gamma$ (mas não ambos)
2. Para todo $\phi, \psi$, $\phi\rightarrow\psi \iff (\phi\in\Gamma \implies \psi \in \Gamma)$ 

---

### Demonstração

1. Se $\phi\in\Gamma$ e $\neg\phi\in\Gamma$, então $\Gamma \vdash \phi$ e $\Gamma \vdash \neg\phi$ e $\Gamma$ [[LG - Conjunto Consistente|inconsistente]]^[[[LG - Conjunto Consistente#Teorema]]], o que seria um absurdo, portanto $\phi$ e $\neg\phi$ não podem ambos estar em $\Gamma$. Para dado $\phi$, considere o conjunto $\Gamma'=\Gamma\cup\{\phi\}$ e sejam os casos
	1. $\Gamma'$ **consistente**: como $\Gamma \subset \Gamma'$ e $\Gamma$ é maximalmente consistente, então $\Gamma'=\Gamma$ e, então, $\phi \in \Gamma$
	2. $\Gamma'$ **inconsistente**: como  e $\Gamma \cup \{\phi\}$ é inconsistente, então $\Gamma \vdash \neg\phi$ ^[[[LG - Derivação da Negação]]]. Como $\Gamma$ é maximalmente consistente, ele é fechado sob derivação^[[LG - Todo Conjunto Maximalmente Consistente é Fechado sob Derivabilidade]], então $\neg\phi \in \Gamma$.
	
	Portanto, ou $\phi \in \Gamma$ ou $\neg\phi\in\Gamma$.

2. Como $\Gamma$ é maximalmente consistente, ele é fechado sob derivação
	1. **IDA:** suponha $\phi \rightarrow \psi \in \Gamma$ e que $\phi \in \Gamma$, então $\Gamma \vdash \phi \rightarrow \psi$ e $\Gamma \vdash \phi$. Pela regra $(\rightarrow E)$ obtém-se $\Gamma \vdash \psi$. Como $\Gamma$ é fechado sob derivação, então $\psi \in \Gamma$.
	2. **VOLTA:** suponha que $\phi \in \Gamma$ implica em $\psi \in \Gamma$. Assim, se $\phi \in \Gamma$ então $\psi \in \Gamma$ e, portanto, $\Gamma \vdash \psi$. Usando a regra $(\rightarrow I)$, obtemos $\phi \rightarrow \psi \in \Gamma$. Como $\Gamma$ é fechado sob derivação, temos $\phi \rightarrow \psi \in \Gamma$.

---

### Corolário

Se $\Gamma$ é [[LG - Conjunto Maximalmente Consistente|maximalmente consistente]], então $\phi \in \Gamma \iff \neg\phi \not\in \Gamma$ e, equivalentemente, $\neg\phi \in \Gamma \iff \phi\not\in\Gamma$.

---

Tags: #logica 