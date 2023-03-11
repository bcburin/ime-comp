---
alias: AFND
---

# Autômato Finito Não Determinístico

## Definição

Um **AFND** é definido como uma tupla $M = (Q, \Sigma, \delta, q_0, F)$ em que

- $Q$ -> conjunto de estados
- $\Sigma$ -> [[LFA - Alfabeto|alfabeto]] de entrada
- $\delta: Q \times \Sigma \to P(Q)$ -> função de transição
- $q_0 \in Q$ -> estado inicial
- $F \subseteq Q$ -> conjunto de estados finais

*Note que a única diferença para um [[LFA - Autômato Finito Determinístico|AFD]] é que a função $\delta$ tem contradomínio $P(Q)$, subconjuntos de $Q$, ao invés do próprio $Q$.*

## Representação

![[Pasted image 20230311203909.png]]

#lfa

