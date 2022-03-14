# Potências de Elemento de um Grupo

---

### Definição

Seja um [[MD - Grupo|grupo]] $(G,\otimes)$ com elemento neutro $\varepsilon$ e $a\in G$; definem-se as **potências** de $a$ como

$$
\begin{align*}
& a^0 = \varepsilon \\\\
& a^n = a \otimes a^{n-1}, \quad &&n \geq 1 \\\\
& a^{-n} = (a^n)^{-1}, \quad &&n \geq 1 
\end{align*}
$$

---

### Propriedades

Para $m,n \in \mathbb{Z}$

- $a^{-n} = (a^n)^{-1} = (a^{-1})^n$
- $a^m \otimes a^n = a^{m+n}$
- $(a^m)^n = a^{mn}$

---

### Lema

Demonstremos, por indução, que $a^n = a \otimes a^{n-1} = a^{n-1} \otimes a$ para $k \geq 1$

- Para $n=1$, a relação é válida diretamente pela definição de elemento neutro
- Para $n=k$, seja válida $a^k = a \otimes a^{k-1} = a^{k-1} \otimes a$
- Para $n=k+1$
	$$
	\begin{align*}
	a^{k+1} &= a \otimes a^k = a \otimes (a^{k-1} \otimes a) 
	= (a \otimes a^{k-1}) \otimes a = a^k \otimes a
	\end{align*}
	$$
		
O que completa a demonstração.

---

### Demonstração 1

Indução finita para o caso $n \geq 0$

- Para $n=0$, a relação é válida trivialmente
- Para $n=k$, seja válida $a^{-k}=(a^k)^{-1}=(a^{-1})^k$
- Para $n=k+1$
	$$
	\begin{align*}
	a^{-(k+1)} &= (a^{k+1})^{-1} = (a \otimes a^k)^{-1} = (a^k)^{-1} 		   \otimes a^{-1}\\\\
	&= (a^{-1})^k \otimes a^{-1} = (a^{-1})^{k+1}
	
	\end{align*}
	$$
	
Para $n < 0$, seja $m=-n$ e provemos por indução que $a^m = (a^{-m})^{-1} = (a^{-1})^{-m}$

- Para $m=0$, a relação é válida trivialmente, pois todos os termos são o elemento neutro
- Para $m=k$, seja válida $a^k = (a^{-k})^{-1} = (a^{-1})^{-k}$
- Para $m=k+1$
	$$
	\begin{align*}
	a^{k+1} &= a \otimes a^{k} = a \otimes (a^{-k})^{-1} = (a^{-k} \otimes a^{-1})^{-1}\\
	&= ((a^{-1})^k \otimes a^{-1})^{-1} = ((a^{-1})^{k+1})^{-1}\\
	&= (a^{-(k+1)})^{-1}\\\\
	a^{k+1} &= (a^{-(k+1)})^{-1} = ((a^{-1})^{k+1})^{-1} = 		(a^{-1})^{-(k+1)}
	\end{align*}
	$$
	
O que completa a demonstração.

---

### Demonstração 2

Para um dado $m \in \mathbb{Z}$, provemos por indução $a^m \otimes a^n = a^{m+n}$ para $n \geq 0$

- Para $n=0$, a relação é válida por consequência da definição de elemento neutro
- Para $n=k$, seja válida $a^m \otimes a^k = a^{m+k}$
- Para $n=k+1$
	$$
	\begin{align*}
	a^m \otimes a^{k+1} &= a^m \otimes ( a^k \otimes a ) = (a^m \otimes a^k) \otimes a \\
&= a^{m+k} \otimes a = a^{m+k+1}
	\end{align*}
	$$
	
Para $n<0$,

$$
a^m \otimes a^n = (a^{-1})^{-m} \otimes (a^{-1})^{-n} = (a^{-1})^{(-m)+(-n)} = a^{m+n}
$$

O que completa a demonstração.

---

Tags: #mat-discreta 