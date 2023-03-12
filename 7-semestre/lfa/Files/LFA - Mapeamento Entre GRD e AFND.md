
# Mapeamento Entre GRD e AFND

## Teorema

Para toda [[LFA - Gramática Regular à Direita|GRD]] $G$ é possível construir uma [[LFA - Autômato Finito Não Determinístico|AFND]] $M$ tal que $L(G)=T(M)$ e vice-versa. Ou seja, de modo que a [[LFA - Linguagem Gerada por uma Gramática|linguagem gerada]] por $G$ seja igual à [[LFA - Linguagem Reconhecida por um AFND|linguagem reconhecida]] por $M$.

## Demonstração

### GRD -> AFND

Dada uma **GRD** $G=(N, \Sigma, P, S)$, para encontrar um **AFND** que reconheça a mesma linguagem, primeiramente introduz-se um nomo símbolo não terminal $H$ para substituir as regras de produção $\alpha\to\beta \in P$  obtendo uma nova **GRD** $G'=(N\cup\{H\}, \Sigma, P', S)$ com regras em $P'$ da forma $X \to cY$ ou $X \to \epsilon$, com $X,Y\in N\cup\{H\}$ e $c \in \Sigma$.

Assim, constrói-se o **AFND** $M = ( N \cup H, \Sigma, \delta, S, F)$, em que $F = \{ X \in N \;|\; \exists\, X \to \epsilon \in P \}$ e de modo que $\delta: (N \cup H) \times \Sigma \to P(N \cup H)$ é dado por
$$
\delta(X, c) = \{ Y \in N \cup H \;|\; \exists\,X \to cY \in P \}
$$
Seja $\omega\in L(G)$, então $S \rightarrow_{G'}^* \omega$. Isso significa que 
$$
S \to \omega_1 \to \omega_2 \to \cdots \to \omega_n = \omega
$$
Como todas as regras de produção são da forma (1) $X_i \to c_i Y_i$ ou (2) $X_i \to c_i$ e como $\omega \in \Sigma^*$ é terminal, sabemos que as $n-1$ primeira aplicações da derivação foram do tipo (1) e a última do tipo (2). Portanto, temos que $\omega$ é da forma

$$
\omega = c_1c_2c_3 \cdots c_{n-1}
$$
*TODO: terminar demonstração de L(G) = T(M).*

### AFND -> GRD

Dado um **AFND** $M = ( Q, \Sigma, \delta, q_0, F)$, construa a GRD $G=(Q, \Sigma, P, q_o)$, tal que 

$$P = \{ X \to cY \;|\; Y \in \delta(X, c)  \} \cup \{X \to \epsilon \;|\; X \in F\}$$

*TODO: provar L(G)=T(M).*



#lfa

