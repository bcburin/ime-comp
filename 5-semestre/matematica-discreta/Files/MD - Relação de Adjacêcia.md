# Relação  de Adjacência

---

### Definição

Dado o [[MD - Grafo|grafo]] $G=(V,E)$, define-se a [[MD - Relação sobre um conjunto|relação]] de **adjacência** $(V,V,\sim)$ tal que para $v_1,v_2 \in V$, $(v_1,v_2) \in \sim$ se e só se $v_1v_2 \in E$.

---

### Terminologia

Para $v_1,v_2 \in V$ tal que $v_1 \sim v_2$, temos que $e=v_1v_2 \in E$. Nesse caso, diz-se que

- A aresta $e$  **incide** sobre $v_1$ e $v_2$
- $v_1$ e $v_2$ são  **adjacentes**

---

### Relação Simétrica

A relação de adjacência é uma [[MD - Relação Simétrica|relação simétrica]].

##### Demonstração

Sejam $v_1,v_2 \in V$ tal que $v_1 \sim v_2$.  Então existe a aresta $v_1v_2 \in E$. Como $E$ é um conjunto de pares não ordeados, $v_2v_1 = v_1v_2 \in E$. Logo $v_2 \sim v_1$, então a relação é simétrica.

---

Tags: #mat-discreta 