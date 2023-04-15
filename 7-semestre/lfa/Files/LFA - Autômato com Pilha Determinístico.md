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
	- $|\delta(q, \epsilon, X)| \leq 1$ para todo $q \in Q, X \in \Gamma$
	- Se $|\delta(q,a,X)| > 0$ para algum $a \in \Sigma$, então $|\delta(q,\epsilon,X)|=0$
- $q_0 \in Q$ -> símbolo inicial
- $Z_0 \in \Gamma$ -> Símbolo inicial da pilha
- $F \subseteq Q$ -> conjunto de estados finais

*Obs: ao contrário de um [[LFA - Autômato Finito Determinístico|AFD]], não é necessário que, para toda combinação de estados e símbolos de alfabeto de entrada e de pilha, exista um estado resultante. Isto é, pode haver zero ou um caminhos de um estado para outro dado um par de símbolos de alfabeto - diferenciando-se de um [[LFA - Autômato com Pilha|AP]], no qual podem haver múltiplos.*

## Exemplo

**APD** que [[LFA - Linguagem Reconhecida por um AP|reconheça por estado final]] a linguagem $L=\{0^n1^m \;|\; 0 \leq n \leq m\}$

![[Pasted image 20230415134825.png]]

#lfa

