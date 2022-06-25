# Grafo Complementar

---

### Definição

O **grafo complemetar** do [[MD - Grafo|grafo]] $G=(V,E)$ é o grafo $G'=(V,E')$, tal que

$$
E' = \{v_1v_2 \;\big|\; v_1v_2 \not\in E\}
$$

Em termos de [[MD - Relação de Adjacêcia|relação de adjacêcia]], $v_1 \sim' v_2$ se e só se $v_1 \not\sim v_2$.

---

### Número de Arestas

Para um dado grafo $G=(V,E)$ não nulo, com $|V|=n$ e grafo complementar $G'=(V,E')$, temos que

$$
\boxed{ |E| + |E'| = \binom{n}{2}}
$$

##### Demonstração

Para um conjunto de $n$ vértices, existem $\binom{n}{2}$ combinações dois a dois, isto é, arestas possíveis. Por definição, o conjunto $E'$ é a diferença entre o conjunto de todas as arestas possíveis e o conjunto $E$, logo

$$
|E'| = \binom{n}{2} - |E|
$$

O que completa a demonstração.

---

Tags: #mat-discreta 