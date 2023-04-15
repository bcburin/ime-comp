---
alias: AP
---

# Autômato com Pilha

Um **autômato com pilha** é uma tupla $P=(Q,\Sigma, \Gamma, \delta, q_0, Z_0, F)$ em que

- $Q$ -> conjunto finito de estados
- $\Sigma$ -> alfabeto de entrada
- $\Gamma$ -> alfabeto da pilha - símbolos que podem ser escritos na pilha
- $\delta: Q \times (\Sigma \cup \{\epsilon\}) \times \Gamma \to \wp(Q \times \Gamma^*)$
	- A função $\delta$ tem como entradas um estado, possivelmente um símbolo de entrada e um símbolo da pilha (a ser desempilhado), e tem como saída conjuntos de pares de estados e strings de $\Gamma^*$ (a serem empilhados)
- $q_0 \in Q$ -> símbolo inicial
- $Z_0 \in \Gamma$ -> Símbolo inicial da pilha
- $F \subseteq Q$ -> conjunto de estados finais

## Exemplo 1

O seguinte **AP** [[LFA - Linguagem Reconhecida por um AP|reconhece]] a linguagem $\{a^nb^n | n \geq 0\}$

![[Pasted image 20230415010642.png]]

## Exemplo 2

O seguinte **AP** [[LFA - Linguagem Reconhecida por um AP|reconhece]] a linguagem $\{ x \;|\; x = \omega \omega^R, \, \omega \in \Sigma^+\}$

![[Pasted image 20230415010908.png]]

#lfa

