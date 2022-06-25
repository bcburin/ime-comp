# Número de Vértices de Grau Ímpar

---

### Teorema

Em um [[MD - Grafo|grafo]], o número de vértices de [[MD - Grau de um Vértice|grau]] ímpar é par.

---

### Demonstração

Seja o grafo $G=(V,E)$. Seja $I\subset V$ o subconjunto vértices de grau ímpar e, similarmente, $P \subset V$ o subconjunto dos vértices de grau par. Como $I$ e $P$ determinam uma partição de $V$, tem-se, da [[MD - Soma dos Graus|soma dos graus dos vértices]], que

$$
\sum_{v\in V} \mathrm{grau}(v) = \sum_{v \in I} \mathrm{grau}(v) + \sum_{v \in P} \mathrm{grau}(v) = 2|E|
$$

Os termos $\textstyle\sum_{v \in P}\mathrm{grau}(v)$ e $2|E|$ são pares. Logo, a soma $\textstyle\sum_{v \in I}\mathrm{grau}(v)$ deve, também, ser par. Como todos os termos nessa soma são ímpares, então o número de somandos deve ser par, isto é, deve haver um número par de vértices de grau ímpar.

---

Tags: #mat-discreta 