
# Complemento de um AFD

## Definição

Dado um [[LFA - Autômato Finito Determinístico|AFD]] $M=(Q, \Sigma, \delta, q_0, F)$, define-se seu **complemento** como

$$
M=(Q, \Sigma, \delta, q_0, \bar{F})
$$

Em que $\bar{F} = Q - F$ é o complemento de $F$.

## Exemplo

- Autômato sobre $\Sigma = \{0,1\}$ que reconhece todas as strings sobre $\Sigma$ que têm *substring* 11
![[Pasted image 20230311193844.png]]

- Autômato sobre $\Sigma = \{0,1\}$ que reconhece todas as strings sobre $\Sigma$ que **não** têm *substring* 11
![[Pasted image 20230311194236.png]]

#lfa

