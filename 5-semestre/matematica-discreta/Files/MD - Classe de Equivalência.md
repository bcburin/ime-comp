# Classe de Equivalência
---

### Definição

Seja $\sim$ uma [[MD - Relação de Equivalência|relação de equivalência]] qualquer sobre um conjunto $X$. A classe de equivalência do elemento $a \in X$ é o seguinte conjunto

$$ {[\,a\,] = \{ x \in X \;|\; x \sim a \} } $$

**Exemplo**

$$
\begin{pmatrix} 1 & 1 & 0  \\ 1 & 1 & 0  \\ 0 & 0 & 1 \end{pmatrix}
$$
*Nesse caso,*
 - $[\,1\,]=[\,2\,]=\{1,2\}$
 - $[\,3\,] = \{3\}$

---

### União

Para uma dada relação de equivalência sobre um conjunto, a união de todas as classes de equivalência é o próprio conjunto.

**Demonstração**

Seja $\sim$ uma relação de equivalência sobre o conjunto $X$. Se $x \in X$, então $x \sim x$. Logo $x \in [\,x\,]$ e, portanto, $x \in \bigcup_{t \in X} [\,t\,]$ . Isto é,

$$ X \subset \bigcup_{t \in X}[\,t\,] $$
Se, por outro lado, $x \in \bigcup_{t \in X} [\,t\,]$, então $x \in X$, pois cada classe de equivalência é um subconjunto de $X$. Desse modo,

$$ \bigcup_{t \in X}[\,t\,] \subset X $$

Logo, segue-se que

$$
 { X = \bigcup_{t \in X}[\,t\,] } 
$$

---

### Disjunção

Duas classes de equivalência diferentes são disjuntas.

**Demonstração**

Seja $\sim$ uma relação de equivalência sobre o conjunto $X$. Sejam $x,y\in X$ tal que $x\not\sim y$, ou seja, que $x$ e $y$ estejam em classes de equivalência distintas. Suponha, agora, que $[\,x\,] \cap [\,y\,] \neq \varnothing$ . Então existe $z \in X$ tal que $z \in [\,x,]$ e $z \in [\,y\,]$. Logo $z\sim x$ e $z\sim y$. Aplicando simetria e transitividade, temos $x\sim z \wedge z \sim y \implies x\sim y$, que é um absurdo. Portanto a hipótese é false e $[\,x\,]\cap[\,y\,] = \varnothing$.

---

Tags: #mat-discreta 