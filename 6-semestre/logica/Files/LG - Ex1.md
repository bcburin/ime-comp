
Sabemos que $\phi \sqsubset \psi$. Queremos encontrar $\sigma$ tal que $\phi \sqsubset \sigma$ e $\sigma \sqsubset \psi$ . Para isso, é necessário que $\sigma$ satisfaça quatro condições:

$$
\begin{cases}
\;&\models \phi \rightarrow \sigma \quad && \iff \quad \max\{1 - v(\phi), v(\sigma)\} = 1 \\ \\
\;&\models \sigma \rightarrow \psi \quad &&\iff \quad \max\{1 - v(\sigma), v(\psi)\} = 1 \\ \\ 
\;&\not\models \sigma \rightarrow \phi &&\iff \quad \text{existe $v$ tq $v(\sigma)=1$ e $v(\phi)=0$} \\ \\ 
\;&\not\models \psi \rightarrow \sigma &&\iff \quad \text{existe $v$ tq $v(\psi)=1$ e $v(\sigma)=0$} \\
\end{cases}
$$

Além disso, de $\phi \sqsubset \psi$ temos que 

$$
\begin{cases}
\;&\models \phi \rightarrow \psi \quad && \iff \quad \max\{1 - v(\phi), v(\psi)\} = 1 \\ \\
\;&\not\models \psi \rightarrow \phi &&\iff \quad \text{existe $v$ tq $v(\psi)=1$ e $v(\phi)=0$} \\
\end{cases}
$$
Encontremos quais são as condições sobre $v(\sigma)$ para cada combinação de $v(\phi)$ e $v(\psi)$ analisando, primeiramente, somente as condições impostas pelos $\models$

$$
\begin{cases}
\;& v(\phi) = 0,\, v(\psi) = 0 \implies v(\sigma) = 0 \\\\
& v(\phi) = 1,\, v(\psi) = 1 \implies v(\sigma) = 1 \\ \\
& v(\phi) = 1,\, v(\psi) = 0 \implies v(\sigma) = 1 \\  \\
& v(\phi) = 1,\, v(\psi) = 1 \implies v(\sigma) = 1 \\ \\
\end{cases}
$$