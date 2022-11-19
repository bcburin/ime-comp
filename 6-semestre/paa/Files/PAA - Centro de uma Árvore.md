
# Centro de uma Árvore

---

### Teorema

O [[PAA - Centro do Grafo|centro]] de uma [[PAA - Árvore|árvore]] possui exatamente um ou dois vértices.

---

### Demonstração

Seja $G=(V,E)$ uma árvore com $V(G) > 2$. Definem-se $F$ como o conjunto das [[PAA - Folha|folhas]] de $G$ e e $C(G)$ o centro de $G$. Perceba que valem as seguintes propriedades

- Se $v \in C(G)$ então $v \not\in F$ - se $v \in F$, então $\mathrm{grau}(v)=1$. Se $z$ é o vértice mais distante de $v$ em $G$, então $d(v,z) = e(z)$. Se $w$ for o vértice adjacente a $v$, então $d(w,z) < d(v,z) = e(z)$. Logo, $e(w) < e(z)$, de modo que $v \not\in C(G)$.
- $C(G-F)=C(G)$ - Como nenhuma folha faz parte do centro de $G$, então retirar as folhas $G$ não altera o seu centro.

Provaremos o teorema por indução sobre $n=|V(G)|$

Se $n=1$ ou $n=1$, então o teorema vale.

Seja $n>2$ e suponha que o teorema seja válido para toda árvore com menos de $n$ vértices.

Seja $G'=G-F$ e $n'=V(G')$. Do [[PAA - Número de Folhas de uma Árvore|número de folhas]] de uma árvore, sabemos que $n' \leq n - 2 < n$. Ademais $G'$ é [[PAA - Grafo Conexo|conexo]] e [[PAA - Grafo Acíclico|acíclico]] e, portanto, uma árvore. Assim, a hipótese indutiva vale para $G'$ e $C(G')=C(G-F)=C(G)$ tem um ou dois vértices.

---

Tags: #paa
