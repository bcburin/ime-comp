
# Linguagem Reconhecida por um AFD

## Definição

Dado um [[LFA - Autômato Finito Determinístico|AFD]] $M=(Q, \Sigma, \delta, q_0, F)$, define-se a **linguagem reconhecida** por $M$ como 

$$
T(M) = \{\omega \in \Sigma^* \;|\; \hat{\delta}(q_0, \omega) \in F \}
$$
Em que $\hat{\delta}$ é a [[LFA - Generalização da Função de Transição|generalização]] de $\delta$.

#lfa

