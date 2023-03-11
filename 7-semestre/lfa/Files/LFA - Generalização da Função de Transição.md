
# Generalização da Função de Transição

## Definição

Dado um [[LFA - Autômato Finito Determinístico|AFD]] $M=(Q, \Sigma, \delta, q_0, F)$ com $\delta: Q \times \Sigma \to Q$, estende-se a definição de $\delta$ para a função $\hat{\delta}: Q \times \Sigma^* \to Q$ como a única função tal que $\forall q \in Q, \forall a \in \Sigma, \forall \omega\in \Sigma^*$

$$
\begin{align*}
\hat{\delta}(q, \epsilon) &= q\\
\hat{\delta}(q, a\omega) &= \hat{\delta}(\delta(q,a), \omega) 

\end{align*}
$$

*Intuição: a ideia é que a função $\hat{\delta}$ permite caminhar pela AFD a partir de certo estado, geralmente $q_0$, usando como passos os caracteres de $\Sigma$ na ordem em que aparecem em $\omega$. Outra forma de ver, é que $\hat{\delta}(q, \omega)$ representa o estado alcançado partindo de $q$ e seguindo o caminho traçado por $\omega$.*

#lfa

