
# Linguagem Reconhecida por um AFND

## Definição

Dado um [[LFA - Autômato Finito Não Determinístico|AFND]] $M=(Q, \Sigma, \delta, q_0, F)$, define-se a **linguagem reconhecida** por $M$ como 

$$
T(M) = \{\omega \in \Sigma^* \;|\; \hat{\delta}(q_0, \omega) \cap F \neq \varnothing\}
$$
Em que $\hat{\delta}$ é a [[LFA - Generalização da Função de Transição para AFND|generalização]] de $\delta$.

#lfa

