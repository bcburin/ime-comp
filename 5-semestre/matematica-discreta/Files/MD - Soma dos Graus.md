# Soma do Graus de um Grafo

---

### Teorema

Para todo [[MD - Grafo|grafo]] não nulo $G=(V,E)$, vale

$$
\boxed{
\sum\limits_{v \in V}\mathrm{grau}(v) = 2\,|E|
}
$$

Ou seja, a soma dos [[MD - Grau de um Vértice|graus]] dos vértices de um grafo é o dobro do número de arestas.

---

### Demonstração

Seja o [[MD - Grafo Nulo|grafo não nulo]] $G=(V,E)$, com $|E|=m$. Construamos o [[MD - Grafo Vazio|grafo vazio]] $G_0 = (V,\{\,\})$. Para $G_0$, a soma dos graus dos vértices é zero. Escolhendo um vértice qualquer de $e_1 \in E$, sejam $E_1=\{e_1\}$ e $G_1=(V,E_1)$. Como há uma única aresta, seus extremos terão grau 1, e os outros vértices, grau zero.  Logo, a soma dos graus para $G_1$ é 2. Seja $e_2 \in E$, $e_2 \not\in E_1$, e $E_2 = \{e_1,e_2\}$ e $G_2 = (V,E_2)$, teremos que os graus de dois vértices aumentarão em uma unidade por conta da inserção de $e_2$. Portanto, a soma dos graus dos vértices será $4=2+2$ para $G_2$. Repetindo o processo até termos $e_m \in E$, $e_m \not\in E_{m-1}$, e $E_m = \{e_1,e_2,\dots,e_m\}$ e $G_m=(V,E_m)$, teremos que a soma dos graus para os vértices de $G_m$ será

$$
\underbrace{2+2+2+\cdots+2}_{m} = 2m
$$

Mas, por construção $E_m = E$ e, portanto, $G_m=G$. Logo a soma dos graus dos vértices de $G$ é $2m$.

---

Tags: #mat-discreta 