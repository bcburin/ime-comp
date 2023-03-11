
# Produto de Autômatos

## Definição

Dados dois [[LFA - Autômato Finito Determinístico|AFD]] $M_Q =(Q, \Sigma, \delta_Q, q_0, F_Q)$ e $M_R =(R, \Sigma, \delta_R, r_0, F_R)$, define-se o **produto** entre $M_Q$ e $M_R$ como

$$
M_Q \times M_R = (Q \times R, \Sigma, \delta_{Q \times R}, (q_0, r_0), F_{Q \times R})
$$

Em que $\delta_{Q \times R}: (Q \times R) \times \Sigma \to Q \times R$ definida por

$$
\delta_{Q \times R}((q, r), a) = ( \delta_Q(q, a), \delta_R(r, a) ) 
$$

E $F_{Q \times R}$ pode variar de acordo com os estados que se deseja atingir no produto. Mais comumente, no caso de

- **Conjunção (AND)** -> $F_{Q \times R} = F_Q \cap F_R$
- **Disjunção (OR)** -> $F_{Q \times R} = F_Q \cup F_R$

## Exemplo

Construir um [[LFA - Autômato Finito Determinístico|AFD]] que reconhece [[LFA - String|strings]] sobre o [[LFA - Alfabeto|alfabeto]] $\Sigma = \{0,1\}$ que tenham um número par de zeros **e** um número ímpar de uns.

![[Pasted image 20230311201339.png]]


#lfa

