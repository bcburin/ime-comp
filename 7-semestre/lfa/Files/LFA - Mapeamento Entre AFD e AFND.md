
# Mapeamento Entre AFD e AFND

## Teorema

Para todo [[LFA - Autômato Finito Não Determinístico|AFND]] $M_1$ é possível construir um [[LFA - Autômato Finito Determinístico|AFD]] $M_2$ tal que $T(M_1) = T(M_2)$. Ou seja, a [[LFA - Linguagem Reconhecida por um AFND|linguagem reconhecida]] por $M_1$ é igual à [[LFA - Linguagem Reconhecida por um AFD|linguagem reconhecida]] por $M_2$.

## Demonstração

### AFD -> AFND

Dado um **AFD** $M_1 = (Q, \Sigma, \delta_1, q_0, F)$, a construção do **AFND** $M_2 = (Q, \Sigma, \delta_2, q_0, F)$ é trivial. Basta que $\delta_1: Q \times \Sigma \to Q$ e $\delta_2: Q \times \Sigma \to P(Q)$ sejam tal que
$$
\delta_2(q, c) = \{\delta_1(q_c)\}
$$
Tome $\omega\in T(M_1)$. Então $\hat{\delta_1}(q_0, \omega) \in F$. Considere $\omega = c_1 c_2 \cdots c_n$ com $c_i \in \Sigma$, então

$$
\begin{align*}
\hat{\delta_2}(q_0, \omega)
&= \hat{\delta_2}(\delta_1(q_0, c_1), c_2\cdots c_n) = \hat{\delta_2}(\delta_1(\delta_1(q_0, c_1), c_2), c_3\cdots c_n)\\
&= \cdots = \hat{\delta_2}(\delta_1(\delta_1(\delta_1 \cdots \delta_1(q_0, c_1), \cdots), c_{n-1}), c_n)
\end{align*}
$$

*TODO: terminar demonstração AFD -> AFND*

### AFND -> AFD

Dado um **AFND** $M_1 = (Q, \Sigma, \delta_1, q_0, F)$, constrói-se o **AFD** 

$$M_2 = (P(Q), \Sigma, \delta_2, \{q_0\}, {x \in P(Q) \;|\; x \cap F \neq \varnothing})$$

De modo que $\delta_2: P(Q) \times \Sigma \to P(Q)$ seja dada por

$$
\delta_2(x, c) = \bigcup_{q \in x} \delta_1(q, c)
$$

*TODO: demonstrar AFND -> AFD*

## Exemplo
´
![[Pasted image 20230312002706.png]]

#lfa

