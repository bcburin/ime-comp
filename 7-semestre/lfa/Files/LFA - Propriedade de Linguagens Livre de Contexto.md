
# Propriedade de Linguagens Livre de Contexto

Sejam $L_1$ e $L_2$ duas [[LFA - Linguagem Livre de Contexto|LLC]], então

- $\overline{L_1}$ é LLC? **Não**
	- Fato: $L_1$ regular e $L_2$ LLC $\implies$ $L_1 \cap L_2$ LLC
	- A Linguagem $L$ abaixo é LLC ![[Pasted image 20230417174915.png]]
	- Suponha que $\overline{L}$ seja LLC. $L_1 = a^*b^*c^*$ é [[LFA - Linguagem Regular|regular]], então $L_1 \cap L = \{ a^nb^nc^n \}$ deveria ser LLC *(contradição)*. Logo $\overline{L}$ não é LLC mesmo que $L$ seja LLC.
- $L_1L_2$ é LLC? **Sim**
	- Sejam $L_1$ e $L_2$ [[LFA - Linguagem Gerada por uma Gramática|geradas]] pelas [[LFA - Gramática Livre de Contexto|GLC]] $G_1 = (N_1,\Sigma,P_1,S_1)$ e $G_2=(N_2,\Sigma,P_2,S_2)$. Então adicionando a regra $S \to S_1S_2$, obtém-se a GLC $G=(N_1 \cup N_2 \cup \{S\}, \Sigma, P_1 \cup P_2 \cup \{S \to S_1 S_2\}, S)$ que gera $L_2L_2$
	- Obs: renomear símbolos não terminais de modo que $N_1 \cap N_2 = \varnothing$
- $L_1^*$ é LLC? **Sim**
	- Se $L_1$ é gerada por $G=(N,\Sigma,P,S)$, seja a nova regra $S' \to SS' | \epsilon$ de modo que tenhamos $G'=(N \cup \{S'\}, \Sigma, P \cup \{S' \to SS', S' \to \epsilon\}, S')$, que é uma LLC que gera $L_1^*$
- $L_1^R$ é LLC? **Sim**
	- Se $L_1$ é gerada por $G=(N,\Sigma,P,S)$ então $G'=(N, \Sigma, P^R, S')$ é uma LLC que gera $L_1^R$
- $L_1 \cup L_2$ é LLC? 
	- Sejam $L_1$ e $L_2$ [[LFA - Linguagem Gerada por uma Gramática|geradas]] pelas [[LFA - Gramática Livre de Contexto|GLC]] $G_1 = (N_1,\Sigma,P_1,S_1)$ e $G_2=(N_2,\Sigma,P_2,S_2)$. Então adicionando as regras $S \to S_1 | S_2$, obtém-se a GLC $G=(N_1 \cup N_2 \cup \{S\}, \Sigma, P_1 \cup P_2 \cup \{S \to S_1 S_2\}, S)$ que gera $L_2L_2$
	- Obs: renomear símbolos não terminais de modo que $N_1 \cap N_2 = \varnothing$


#lfa

