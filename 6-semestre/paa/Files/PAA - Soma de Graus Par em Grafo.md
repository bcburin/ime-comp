
# Soma de Graus Par em Grafo

---

### Teorema

Em um [[PAA - Grafo|grafo]] $G=(V,E)$ a soma dos [[PAA - Grau de um Vértice|graus]] de todos os vértices é igual ao dobro do número de arestas.

$$
\sum\limits_{v \in V} \mathrm{grau}(v) = 2|E|
$$

---

### Demonstração

Seja o grafo $G=(V,E)$, com $|E|=m$. Construamos o grafo $G_0 = (V,\{\,\})$. Para $G_0$, a soma dos graus dos vértices é zero. Escolhendo um vértice qualquer de $e_1 \in E$, sejam $E_1=\{e_1\}$ e $G_1=(V,E_1)$. Como há uma única aresta, seus extremos terão grau 1, e os outros vértices, grau zero.  Logo, a soma dos graus para $G_1$ é 2. Seja $e_2 \in E$, $e_2 \not\in E_1$, e $E_2 = \{e_1,e_2\}$ e $G_2 = (V,E_2)$, teremos que os graus de dois vértices aumentarão em uma unidade por conta da inserção de $e_2$. Portanto, a soma dos graus dos vértices será $4=2+2$ para $G_2$. Repetindo o processo até termos $e_m \in E$, $e_m \not\in E_{m-1}$, e $E_m = \{e_1,e_2,\dots,e_m\}$ e $G_m=(V,E_m)$, teremos que a soma dos graus para os vértices de $G_m$ será

$$
\underbrace{2+2+2+\cdots+2}_{m} = 2m
$$

Mas, por construção $E_m = E$ e, portanto, $G_m=G$. Logo a soma dos graus dos vértices de $G$ é $2m$.

---

### Corolário

Em um grafo, há um número par de vértices de grau ímpar.

##### Demonstração

Seja o grafo $G=(V,E)$ e a partição $V=V_I \cup V_P$, na qual $V_I$ contém os vértice de grau ímpar e $V_P$, os de grau par. Do teorema acima,

$$
\sum\limits_{v\in V_I}\mathrm{grau}(v) +
\sum\limits_{v\in V_P}\mathrm{grau}(v) = 2 |E|
$$

Logo

$$
\sum\limits_{v\in V_I}\mathrm{grau}(v) = 2 |E| -
\sum\limits_{v\in V_P}\mathrm{grau}(v)
$$

O lado à direita da igualdade é par, de modo que o somatório à esquerda também o será. Como esse somatório contém apenas números ímpares, então deve haver um número par de termos. Como o número de termos é igual a $|V_I|$, então $|V_I|$ é par.

---

Tags: #paa

