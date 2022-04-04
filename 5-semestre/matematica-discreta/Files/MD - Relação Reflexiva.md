# Relação Reflexiva

[[MD - Relação Sobrejetora|PREV]]	[[MD - Relação Simétrica|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Uma [[MD - Relação sobre um conjunto|relação]] sobre o conjunto $A$ dada por $\mathbf{R} = (A,A,\mathcal{R})$ é reflexiva se e somente se, para todo $a \in A$, $a\, \mathcal{R}\, a$, ou seja, se $(a,a)\in \mathcal{R}$ para todo $a\in A$.

---

### Propriedades

Sejam $\mathcal{R}$ e $\mathcal{S}$ relações sobre $A$.

- $\mathcal{R}$ é reflexiva se e somente se $\Delta \subseteq \mathcal{R}$
- Se $\mathcal{R}$ é reflexiva, $\mathcal{R}^{-1}$ também o é 
- Se $\mathcal{R}$ e $\mathcal{S}$ são reflexivas, $\mathcal{R}\cap \mathcal{S}$ e $\mathcal{R}\cup \mathcal{S}$ também o são.

**Demonstração**

**(IDA)** Seja $\mathcal{R}$ sobre $A$ reflexiva e suponha $(a,a) \in \Delta$ com $a \in A$. Como $R$ é reflexiva, então $(a,a)\in \mathcal{R}$. Portanto $\Delta \subseteq \mathcal{R}$.

**(VOLTA)**  Se $\Delta \subseteq \mathcal{R}$, então

$$
\forall a \in A, \quad (a,a) \in \Delta \implies (a,a) \in \mathcal{R}
$$


Ou seja, $(a,a)\in \mathcal{R}$ para todo $a \in A$, de modo que $\mathcal{R}$ é reflexiva.

Outras demontrações

- Seja $\mathcal{R}$ reflexiva, então $\Delta \subseteq \mathcal{R} \iff \Delta^{-1} \subseteq \mathcal{R}^{-1} \iff \Delta \subseteq \mathcal{R}^{-1}$. Logo, $\mathcal{R}^{-1}$ é transitiva.

---

### Representação matricial

Uma relação é reflexiva se e só se a sua [[MD - Relação Binária#Representação Matricial|representação matricial]] tiver a diagonal principal completamente preenchida com o valor $1$.

---

### **Exemplos**

- $\mathbf{R} = (\varnothing, \varnothing, \varnothing)$
- $\mathbf{R} = (\;\{1,2\}, \{1,2\}, \{(1,1),(2,2)\}\;)$

---

Tags: #mat-discreta 