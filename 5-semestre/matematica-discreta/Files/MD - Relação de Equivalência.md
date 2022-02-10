# Relação  de Equivalência
---

### Definição

Uma [[MD - Relação sobre um conjunto|relação sobre um conjunto]] é uma relação de equivalência se e somente se é [[MD - Relação Reflexiva|reflexiva]], [[MD - Relação Simétrica|simétrica]] e [[MD - Relação Transitiva|transitiva]].

---

### **Exemplo**

$$
\begin{pmatrix} 1 & 1 & 0  \\ 1 & 1 & 0  \\ 0 & 0 & 1 \end{pmatrix}
$$

*Facilmente verifica-se que $M_\mathcal{R}^T=M_\mathcal{R}$ (a relação é simétrica) e que a sua diagonal principal é toralmente preenchida com o valor 1 (a relação é reflexiva). Para verficar a transitividade, calcula-se $M_\mathcal{R}^2$*

$$
M_\mathcal{R}^{2}=
\begin{pmatrix} 1 & 1 & 0  \\ 1 & 1 & 0  \\ 0 & 0 & 1 \end{pmatrix}
\begin{pmatrix} 1 & 1 & 0  \\ 1 & 1 & 0  \\ 0 & 0 & 1 \end{pmatrix} =
\begin{pmatrix} 2 & 2 & 0  \\ 2 & 2 & 0  \\ 0 & 0 & 1 \end{pmatrix}
$$
*Como cada entrada não nula de $M_\mathcal{R}^{2}$ corresponde a uma entrada não nula em $M_\mathcal{R}$, então a relação $\mathcal{R}$ é transitiva. Portantanto, é também relação de equivalência.*

--- 
Tags: #mat-discreta 