# Relação Antissimétrica

[[MD - Relação de Igualdade]]	[[MD - Relação de Ordem|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Uma [[MD - Relação sobre um conjunto|relação]] $\mathcal{R}$ sobre um conjunto $A$ é antissimétrica se e somente se para todo $a_{1},a_{2} \in A$, vale

$$ a_{1}\;\mathcal{R}\;a_{2}\;\wedge\;a_{2}\;\mathcal{R}\;a_{1}\quad\implies \quad a_{1}= a_{2} $$

---

### Propriedades

Seja $\mathcal{R}$ uma relação sobre $A$, então $R$ é antissimétrica se e somente se $\mathcal{R} \cap \mathcal{R}^{-1} \subseteq \Delta$. Em que $\Delta$ é a [[MD - Relação de Igualdade|relação de igualdade]].

---


### **Exemplos**

- As relações definidas sobre $\mathbb{Z}$ a seguir são antissimétricas: $\leq, \geq, <, >$;
- A relação representada pela matriz $M_\mathcal{R}$ abaixo é antissimétrica

$$
\begin{pmatrix} 1 & 1 & 0 \\ 0 & 1 & 0 \\ 0 & 0 & 0\end{pmatrix}
$$
*Note que a matriz $M_\mathcal{R}$ representa uma relação antissimétrica se e só se para cada entrada $a_{ij}=1$, tem-se $a_{ji}=0$ com $i \neq j$. 

---

Tags: #mat-discreta  