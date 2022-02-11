# Relação Simétrica

[[MD - Relação Reflexiva|PREV]]	[[MD - Relação Transitiva|NEXT]]	[[matematica-discreta|HOME]]

---

### Definição

Uma [[MD - Relação sobre um conjunto|relação]] sobre o conjunto $A$ dada por $\mathbf{R} = (A,A,\mathcal{R})$ é simétrica se e somente se, para todo $a_{1},a_{2} \in A$, vale $a_{1}\,\mathcal{R}\,a_{2}\implies a_{2}\,\mathcal{R}\,a_{1}$

---

### Propriedades

Sejam $\mathcal{R}$ e $\mathcal{S}$ relações sobre A, então 

- Se $\mathcal{R}$ é simétrica, $R^{-1}$ também o é
- $\mathcal{R}$ é simétrica se e só se $\mathcal{R}=\mathcal{R}^{-1}$
- Se $\mathcal{R}$ e $\mathcal{S}$ são simétricas, então $\mathcal{R} \cap \mathcal{S}$ e $\mathcal{R} \cup \mathcal{S}$ também o são 

**Demonstração**

---

### Representação matricial

Como consequencia direta das propriedades acima, temos que uma relação é simétrica se e somente as [[MD - Relação Binária#Representação Matricial|representações matriciais]] dela e de sua inversa forem iguais. Como a representação matricial da relação [[MD - Relação Inversa#Representação matricial|inversa]] é a trasposta da matriz que representa a relação original, vale

$$
\boxed{
\begin{align*}
	(M_{\mathcal{R}})^{T} = M_\mathcal{R}
\end{align*}
}
$$

Ou seja, uma relação é reflexiva se e só se a matriz que a representa for simétrica.

---

### **Exemplo**

$$
\begin{pmatrix} 1 & 1 & 0  \\ 1 & 0 & 0  \\ 0 & 0 & 1\end{pmatrix}
$$

*Note que a matriz que representa uma relação simétrica sobre um conjunto sempre será simétrica, como consequência direta da definição. Ou seja, sempre valerá para a matriz $M_\mathcal{R}$*

$$ M_\mathcal{R}^{T} = M_\mathcal{R} $$

---

Tags: #mat-discreta 