# Teorema Pi de Buckingham

---

### Teorema

Seja um fenômeno que envolve $n$ variáveis dimensionais $u_i$ tal que

$$
G(u_1,u_2,\cdots,u_n) = 0
$$

É possível reduzir o número de variáveis dimensionais $n$ a um número $k < n$ de variáveis adimensionais $\Pi_k$

$$
g(\Pi_1,\Pi_2,\cdots,\Pi_k) = 0
$$

com  $k = n - r$, sendo $r$ o número grandezas básicas envolvidas no problema.

---

### Metodologia

1. Listar as grandezas dimensionais envolvidas
2. Expressar cada uma delas em função das dimensões básicas envolvidas
3. Determinar o número $k$  de $\Pi_i$ necessários pela $k = n - r$
4. Obter os $\Pi_i$, fazendo $\Pi_1$ ser aquele que contém a variável de interesse.
5. Expressar o resultado como uma função dos demais adimensionais

$$
\boxed{
\Pi_1 = f(\Pi_2, \cdots, \Pi_k)
}
$$

---

### Exemplo

Seja o caso em que queremos encontrar a força de arrasto como função $F_D = F_D(L,V,\rho,\mu)$. Temos um caso de $5$ varíaveis

$$
G(F_D, L, V, \rho, \mu) = 0
$$

Realizando o segundo passo,

Grandeza dimensional | Análise dimensional
-------------------- | -------------------
$F_D$ | $MLT^{-2}$
$L$ | $L$
$V$ | $LT^{-1}$
$\rho$ | $ML^{-3}$
$\mu$ | $ML^{-1}T^{-1}$

Logo, a quantidade de grandezas básicas é $r=3$ $(M,L,T)$. Assim, $k=5-3=2$. Esolhamos, pois, dois adimensionais: o [[FT - Número de Reynolds|número de Reynolds]] e o [[FT - Coeficientes de Arrasto e Sustentação#Coeficiente de Arrasto|coeficiente de arrasto]]. Como a variável de interesse é $F_D$, seja

$$
\begin{cases}
	\Pi_1 = C_D = \frac{F_D}{\frac{1}{2}\rho V L^2} \\\\
	\Pi_2 = Re = \frac{\rho V L}{\mu}
\end{cases}
$$

Por fim, expressa-se $C_D = f(Re)$ e se obtém o gráfico de $f$ experimentalmente. De posse de $f$, pode-se utilizar os valores do problema para para encontrar $C_D$ e, posteriormente, $F_D$.

---

Tags: #fentran  