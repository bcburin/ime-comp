
# Linguagem Reconhecida por um AP

Definimos a **linguagem reconhecida** pelo [[LFA - Autômato com Pilha|AP]] $P=(Q,\Sigma, \Gamma, \delta, q_0, Z_0, F)$ com $\delta: Q \times (\Sigma \cup \{\epsilon\}) \times \Gamma \to \wp(Q \times \Gamma^*)$ como

$$
L(P) = \{ w \in \Sigma^* \;|\; \exists q \in F, \exists \alpha\in \Gamma^*,\, (q_0, \omega, Z_0) \vdash^* (q, \epsilon, \alpha) \}
$$

## Derivação de configuração

- Se $(r, x) \in \delta(q,a,b)$ então $(q,a\omega, by) \vdash (r, \omega, xy)$
- Se $(r, x) \in \delta(q,\epsilon,b)$ então $(q,\omega, by) \vdash (r, \omega, xy)$

#lfa

