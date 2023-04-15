
# Árvore de Derivação

Dada uma [[LFA - Gramática Livre de Contexto|GLC]] $G=(N,\Sigma,P,S)$ e uma [[LFA - Derivação|derivação]] $S\rightarrow^* \omega$ de uma [[LFA - String|string]] $\omega$ pertencente à [[LFA - Linguagem Gerada por uma Gramática|linguagem]] $L(G)$, a **árvore de derivação** resultante dessa derivação é uma [[PAA - Árvore|árvore]] cujos vértices pertencem a $(N \cup \Sigma)$ com raiz $S$. Para cada regra $X \to \beta \in P$ aplicada em $S \to ^* \omega$, o vértice $X$ tem como filhos os símbolos em $\beta$. Para uma string $\omega \in L(G)$, todas as folhas na árvore de derivação são símbolos terminais.

## Tipos de Derivação

Uma GLC e uma derivação determinam uma árvore de derivação. No entanto, a uma dada árvore de derivação, podem corresponder muitas derivações. No geral, trabalha-se com duas em específico: a **derivação mais à esquerda (DME)** e a **derivação mais à direita (DMD)**.

![[Pasted image 20230415002031.png]]

**Exemplo**

![[Pasted image 20230415001717.png]]
 
#lfa

