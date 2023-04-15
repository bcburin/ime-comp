
# Linguagem Reconhecida por um AP por Pilha Vazia


Definimos a **linguagem reconhecida por pilha vazia** pelo [[LFA - Autômato com Pilha|AP]] $P=(Q,\Sigma, \Gamma, \delta, q_0, Z_0, F)$ com $\delta: Q \times (\Sigma \cup \{\epsilon\}) \times \Gamma \to \wp(Q \times \Gamma^*)$ como

$$
N(P) = \{ w \in \Sigma^* \;|\; \exists q \in Q, \, (q_0, \omega, Z_0) \vdash^* (q, \epsilon, \epsilon) \}
$$

## Teorema

Dado um [[LFA - Autômato com Pilha|AP]] $P$, é possível construir outro AP $P'$ tal que $L(P)=N(P')$. Similarmente, também se pode construir $P''$ tal que $N(P) = L(P'')$.


#lfa

