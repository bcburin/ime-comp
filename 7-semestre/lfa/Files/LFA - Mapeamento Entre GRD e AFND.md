
# Mapeamento Entre GRD e AFND

## Teorema

Para toda [[LFA - Gramática Regular à Direita|GRD]] $G$ é possível construir uma [[LFA - Autômato Finito Não Determinístico|AFND]] $M$ tal que $L(G)=T(M)$ e vice-versa. Ou seja, de modo que a [[LFA - Linguagem Gerada por uma Gramática|linguagem gerada]] por $G$ seja igual à [[LFA - Linguagem Reconhecida por um AFND|linguagem reconhecida]] por $M$.

## Demonstração

### GRD -> AFND

Dada uma **GRD** $G=(N, \Sigma, P, S)$, para encontrar um **AFND** que reconheça a mesma linguagem, primeiramente introduz-se um nomo símbolo não terminal $H$ para eliminar as regras de produção de $\alpha\to\beta \in P$ com $\beta\in \Sigma$, obtendo uma nova **GRD** $G'=(N\cup\{H\}, \Sigma, P', S)$ com regras em $P'$ da forma $X \to cY$ ou $X \to \epsilon$, com $X,Y\in N\cup\{H\}$ e $c \in \Sigma$.

Assim, constrói-se o **AFND** como $M = ( N \cup H, \Sigma, \delta, S, F)$, em que $F = \{ X \in N \;|\; \exists\, X \to \epsilon \in P \}$ e de modo que $\delta: (N \cup H) \times \Sigma \to P(N \cup H)$ é dado por
$$
\delta(X, c) = \{ Y \in N \cup H \;|\; \exists\,X \to cY \in P \}
$$
Seja $\omega\in L(G)$, então $S \rightarrow_G^* \omega$

### AFND -> GRD

Dado um **AFND** $M = ( Q, \Sigma, \delta, q_0, F)$, construa a GRD $G=(Q, \Sigma, P, q_o)$, tal que 

$$P = \{ X \to cY \;|\; Y \in \delta(X, c)  \} \cup \{X \to \epsilon \;|\; X \in F\}$$

*TODO: provar L(G)=T(M).*



#lfa

