# Gramática sem Regras Nulas

Dada uma [[LFA - Gramática Livre de Contexto|GLC]] $G$, existe uma GLC $G'$ tal que

- $L(G)=L(G')$
- $G'$ não possui regras nulas, exceto possivelmente $S \to \epsilon$ se o símbolo inicial $S$ não aparece do lado direito de alguma regra

## Algoritmo

Dada uma [[LFA - Gramática Livre de Contexto|GLC]], identificam-se todos os [[LFA - Símbolo Nulificável|símbolos nulificáveis]] e constrói-se uma gramática sem regras nulas que [[LFA - Linguagem Gerada por uma Gramática|gera]] a mesma linguagem e que não possui regras nulas, segundo o algoritmo abaixo. Para o caso de $\epsilon$ pertencer à linguagem gerada, cria-se um novo símbolo inicial $S'$ de modo que $S' \to S \;|\; \epsilon$ e $S$ é não nulificável na nova gramática.

![[Pasted image 20230415145042.png]]


#lfa

