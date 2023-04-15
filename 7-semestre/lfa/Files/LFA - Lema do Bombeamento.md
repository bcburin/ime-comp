
# Lema do Bombeamento


Se $L$ é uma linguagem regular, então 

$$\exists n, \, \forall w \,\left(w \in L \text{ e } |w| \geq n \implies \exists u,v,x, \, w=uvx \text{ tal que} 

\begin{cases} 
& v \neq \varepsilon \\
&|uv| < n \\
&\forall k, uv^kx \in L
\end{cases}

\right)$$

**Negação**

$$
\forall n, \, \exists w \,\left(w \in L \text{ e } |w| \geq n \implies \forall u,v,x, \, w=uvx \text{ e } 

\begin{cases} 
& v \neq \varepsilon \\
&|uv| < n \\
\end{cases}

\text{ então } \exists k, uv^kx \not\in L

\right)
$$

**Exemplo:** ver [[LFA 2023-03-08]]

#lfa

