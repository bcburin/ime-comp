---
alias: APD
---

# Autômato com Pilha Determinístico

Um **autômato com pilha determinístico** é uma tupla $P=(Q,\Sigma, \Gamma, \delta, q_0, Z_0, F)$ em que

- $Q$ -> conjunto finito de estados
- $\Sigma$ -> alfabeto de entrada
- $\Gamma$ -> alfabeto da pilha - símbolos que podem ser escritos na pilha
- $\delta: Q \times (\Sigma \cup \{\epsilon\}) \times \Gamma \to \wp(Q \times \Gamma^*)$
	- A função $\delta$ tem como entradas um estado, possivelmente um símbolo de entrada e um símbolo da pilha (a ser desempilhado), e tem como saída conjuntos de pares de estados e strings de $\Gamma^*$ (a serem empilhados)
	- $|\delta(q,a,X)| \leq 1$ para todo $q \in Q, a \in \Sigma, X \in \Gamma$
	- $|\delta()|$
- $q_0 \in Q$ -> símbolo inicial
- $Z_0 \in \Gamma$ -> Símbolo inicial da pilha
- $F \subseteq Q$ -> conjunto de estados finais


#lfa

