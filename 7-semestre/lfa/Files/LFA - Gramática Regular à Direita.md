---
alias: GRD
---

# Gramática Regular à Direita

## Definição

Uma [[LFA - Gramática|gramática]] $G=(N, \Sigma, P, S)$ é dita ser **regular à direita** se todas as regras de produção $\alpha \to \beta \in P$ têm uma das seguintes formas

- $X \to cY$
- $X \to c$
- $X \to \epsilon$

Ou seja, quando vale $\alpha\in N$ e $\beta \in \Sigma \cup (\Sigma \cdot N) \cup \{\epsilon\}$.

## Propriedade

Existe um mapeamento direto entre uma **GRD** e um [[LFA - Autômato Finito Não Determinístico|AFND]].

**IDA**

Dada uma GRD $G=(N, \Sigma, P, S)$, para encontrar uma AFND correspondente basta escrever as regras de produção de $\alpha\to\beta \in P$ na forma

- $X \to cY$
- $X \to cH$
- $X \to \epsilon$
- $H \to \epsilon$

Em que $H$ foi um novo símbolo não terminal introduzido para eliminar regras do tipo $\beta\in \Sigma$. Dessa forma, o AFND correspondente é dado por

$$
M = ( N \cup H, \Sigma, \delta, S, F)
$$

Em que $F = \{ X \in N \;|\; \exists\, X \to \epsilon \in P \}$ e $\delta: (N \cup H) \times \Sigma \to P(N \cup H)$ é dado por

$$
\delta(X, c) = \{ Y \in N \cup H \;|\; \exists\,X \to cY \in P \}
$$
**VOLTA**

Dado um AFND $M = ( Q, \Sigma, \delta, q_0, F)$, uma GRD correspondente é 

$$
G=(Q, \Sigma, P, q_o)
$$

Em que $P = \{  \}$

#lfa

