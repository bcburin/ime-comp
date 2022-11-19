
# Número de Folhas de uma Árvore

---

### Teorema

Toda [[PAA - Árvore|árvore]] com mais de um vértice possui pelo menos duas folhas.

---

### Demonstração

Seja $G=(V,E)$ uma árvore e $n=|V|$ e $m=|E|$. Usando a [[PAA - Soma de Graus Par em Grafo|soma de graus]] em um grafo e o [[PAA - Número de Arestas de uma Árvore|número de arestas]] de uma árvore, obtemos

$$
\sum\limits_{v \in V}\mathrm{grau}(v) = 2m = 2(n-1) = 2n - 2
$$

Como o grafo é [[PAA - Grafo Conexo|conexo]], então $\mathrm{grau}(v) \geq 1$ para todo $v \in V$. Suponha, por absurdo, que $\mathrm{grau}(v) \geq 2$ para todo $v \in V$. Nesse caso,

$$
\sum\limits_{v \in V}\mathrm{grau}(v) \geq 2n > 2n - 2
$$

O que contraria o resultado anterior. Logo, deve existir um vértice $v_0$ com $\mathrm{grau}(v-0) < 2$. Portanto, $\mathrm{grau}(v_0)=1$. Agora, suponha que $v_0$ seja o único vértice com grau menor que $2$, então

$$
\sum\limits_{v \neq v_0}\mathrm{grau}(v) + \mathrm{grau}(v_0) \geq 2(n-1) + 1 = 2n - 1
$$

O que também contraria o primeiro resultado. Logo, existe ao menos um outro $v_1$ com $\mathrm{grau}(v_1) = 1$. Desse modo, a árvore possui, ao menos, $v_0$ e $v_1$ como folhas.

---

Tags: #paa

