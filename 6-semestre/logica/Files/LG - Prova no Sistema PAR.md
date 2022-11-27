
# Prova no Sistema PAR

---

Sejam $\alpha$ uma fórmula e $\Gamma$ um conjunto de fórmulas de primeira ordem denominadas *hipóteses*. Uma prova de $\alpha$ a partir de $\Gamma$ no sistema axiomático PA é uma sequência de fórmulas $\alpha_1,\cdots,\alpha_n$ na qual $\alpha_n = \alpha$ e para todo $1 \leq i  \leq n$

- $\alpha_i$ é um [[LG - Axiomas do Sistema PAR|axioma]] 
- $\alpha_i$ pertence a $\Gamma$
- $\alpha_i$ pode ser deduzida por [[LG - Regra de Inferência do Sistema PA#Modus Ponens|MP]] de $\alpha_j$ e $\alpha_k$ em que $j < i$, $k < i$ e $\alpha_k \equiv \alpha_j \rightarrow \alpha_i$
- $\alpha_i$ pode ser deduzida por [[LG - Regras de Inferência do Sistema PAR#Regra da Generalização|GE]] aplicado a $\alpha_j$, com $j < i$.


---

Tags: #logica

