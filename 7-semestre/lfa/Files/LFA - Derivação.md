
# Derivação

## Definição

Dada uma [[LFA - Gramática|gramática]] $G=(N, \Sigma, P, S)$ e $\omega_1, \omega_2 \in (\Sigma \cup N)^*$, diz-se que $\omega_1$ **deriva** $\omega_2$ em $G$ se e só se

1. $\omega_1 = \gamma_1 \alpha \gamma_2$
2. $\omega_2 = \gamma_1 \beta \gamma_2$
3. $\gamma_1, \gamma_2, \alpha, \beta \in (\Sigma \cup N)^*$
4. $\alpha \to \beta \in P$

Nesse caso, representa-se $\omega_1 \rightarrow_G \omega_2$ ou, se claro pelo contexto, $\omega_1 \rightarrow \omega_2$, lendo-se $\omega_1$ deriva em um passo $\omega_2$.

## Em mais de um passo

Define-se $\rightarrow_G^*$ como o [[MD - Fecho Transitivo-Reflexivo|transitivo-reflexivo]] de $\rightarrow_G$

#lfa