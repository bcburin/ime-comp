
# Generalização da Função de Transição para AFND

## Definição

Dado um [[LFA - Autômato Finito Não Determinístico|AFND]] $M=(Q, \Sigma, \delta, q_0, F)$ com $\delta: Q \times \Sigma \to P(Q)$, estende-se a definição de $\delta$ para a função $\hat{\delta}: Q \times \Sigma^* \to P(Q)$ como a única função tal que $\forall q \in Q, \forall a \in \Sigma, \forall \omega\in \Sigma^*$

$$
\begin{align*}
\hat{\delta}(q, \epsilon) &= \{q\}\\
\hat{\delta}(q, a\omega) &= \bigcup_{r \in \delta(q,a)} \hat{\delta}(r, \omega) 

\end{align*}
$$
*Intuição: a ideia é que $\hat{\delta}(q, \omega)$ representa o todos os estados que podem ser alcançados partindo de $q$ e seguindo os caminhos que podem ser traçados a partir de um dado estado e de um caractere de $\omega$.*

#lfa

