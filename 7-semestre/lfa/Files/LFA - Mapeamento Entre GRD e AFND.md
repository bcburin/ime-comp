
# Mapeamento Entre GRD e AFND

## Teorema

Para toda [[LFA - Gramática Regular à Direita|GRD]] $G$ é possível construir uma [[LFA - Autômato Finito Não Determinístico|AFND]] $M$ tal que $L(G)=T(M)$ e vice-versa. Ou seja, de modo que a [[LFA - Linguagem Gerada por uma Gramática|linguagem gerada]] por $G$ seja igual à [[LFA - Linguagem Reconhecida por um AFND|linguagem reconhecida]] por $M$.

## Demonstração

### GRD -> AFND

Dada uma **GRD** $G=(N, \Sigma, P, S)$, para encontrar um **AFND** que reconheça a mesma linguagem, primeiramente introduz-se um nomo símbolo não terminal $H$ para substituir as regras de produção $X \to c \in P$ com $X \in N$ e $c \in \Sigma$ por regras $X \to cH$ e $H \to \epsilon$.  

Assim, obtém-se uma nova **GRD** $G'=(N\cup\{H\}, \Sigma, P', S)$ em que todas as regras de produção em $P'$ são da forma $X \to cY$ ou $X \to \epsilon$, com $X,Y\in N\cup\{H\}$ e $c \in \Sigma$.

Logo, constrói-se o **AFND** $M = ( N \cup H, \Sigma, \delta, S, F)$, em que $F = \{ X \in N \;|\; \exists\, X \to \epsilon \in P \}$ e de modo que $\delta: (N \cup H) \times \Sigma \to P(N \cup H)$ é dado por
$$
\delta(X, c) = \{ Y \in N \cup H \;|\; \exists\,X \to cY \in P \}
$$
Tome $\omega\in L(G)$, então $\omega\in \Sigma^*$ e $S \rightarrow_{G'}^* \omega$. Isso significa que 

$$
S \to \omega_1 \to \omega_2 \to \cdots \to \omega_n = \omega
$$

Como todas as regras de produção são da forma (1) $X_i \to c_i Y_i$ ou (2) $X_i \to c_i$ e como $\omega \in \Sigma^*$ é terminal, sabemos que as $n-1$ primeira aplicações da derivação foram do tipo (1) e a última do tipo (2).  Seja a última regra aplicada $X_n \to \epsilon$ com $X_n \in N \cup H$. Então sabemos que $\{X_n\} \in \hat{\delta}(X_n, \epsilon) \subseteq \hat{\delta}(S, \omega)$. Porém, como $X_n \to \epsilon$, então $X_n \in F$. Portanto $\hat{\delta}(S, w) \cap G \neq \varnothing$. Assim, $\omega \in T(M)$ e, consequentemente, $L(G) \subseteq T(M)$.

Por outro lado, tome $\omega \in T(M)$. Então $\hat{\delta}(S, \omega) \in F \neq \varnothing$. Seja $X \in \hat{\delta}(S, \omega) \cap F$. Como $X \in F$, então $X \to \epsilon$.

### AFND -> GRD

Dado um **AFND** $M = ( Q, \Sigma, \delta, q_0, F)$, construa a GRD $G=(Q, \Sigma, P, q_o)$, tal que 

$$P = \{ X \to cY \;|\; Y \in \delta(X, c)  \} \cup \{X \to \epsilon \;|\; X \in F\}$$

*TODO: provar L(G)=T(M).*



#lfa

