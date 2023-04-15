
# Pares Simples

Dada uma [[LFA - Gramática Livre de Contexto|GLC]] $G=(N,\Sigma, P, S)$, definimos seu conjunto de **pares simples** como

$$
PS(G) = \{ (X,Y) \;|\; X,Y \in N \text{ e } X \rightarrow^* Y \text{ usando apenas RS} \}
$$

Uma **regra simples (RS)** é uma regra $A\rightarrow B \in P$ tal que $A,B\in N$.

*Obs: $PS(G)$ pode ser visto como o [[MD - Fecho Transitivo-Reflexivo|fecho transitivo-reflexivo]] de $N$ sob a relação "ser derivável por regras simples".*

## Algoritmo

![[Pasted image 20230415152902.png]]

#lfa

