
# Dominação Assintótica de Polinômios

---

### Teorema

Se $p$ é um polinômio em $n$ de grau $k$, então $O\big(p(n)\big) \subseteq O(n^k)$.

---

### Demonstração

O polinômio $p$ é uma combinação linear de monômios de grau menor ou igual a $k$

$$
p(n) = a_kn^k + \cdots + a_1n + a_0
$$
Da [[PAA - Dominação Assintótica de Monômios|dominação assintótica em monômios]], sabemos que cada parcela $n^i \in O(n^k)$ para $i=k,\dots,1,0$. Do [[PAA - Fechamento Linear da Dominação Assintótica|fechamento linear]], conclui-se que $p(n) \in O(n)$. Portanto, $O(p(n)) \subseteq O(n^k)$. ^[[[PAA - Subconjunto do Conjunto O]]]

---

Tags: #paa

