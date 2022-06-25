# Grau de um Vértice

---

### Definição

Sendo $G=(V,E)$ um [[MD - Grafo|grafo]] e $v \in V$ um vértice, $\mathrm{grau}(v)$ é o número de arestas [[MD - Relação de Adjacêcia#Terminologia|incidentes]] sobre $v$, ou seja

$$
\mathrm{grau}(v) = \Big| \,\big\{ v_1v_2 \in E \;|\; v_1 = v \big\}\, \Big|
$$

Em um grafo simples, o número de arestas incidentes sobre um vértice é igual ao número de vértices com os quais ele se relaciona, portato

$$
\mathrm{grau}(v) = \Big| \,\big\{ w \in V \;|\; v \sim w \big\}\, \Big|
$$

*Obs: a última relação não é válida para grafos não simples, como multigrafos.*


---

### Grau zero e grau um

- Se $\mathrm{grau}(v) = 0$, então $v$ é **isolado**
- Se $\mathrm{grau}(v) = 1$, entaõ $v$ é uma **ponta**

---

Tags: #mat-discreta 