
# Teorema Mestre

---

### Teorema

Sejam as constantes $a \geq 1$ e $b \geq 1$ e seja $f(n)$. A função $T$ definida recursivamente para $n$ inteiro e positivo por

$$
T(n) = a\,T\left(\frac{n}{b}\right) + f(n)
$$

é [[PAA - Dominação Assintótica|assintoticamente dominada]] da seguinte maneira

1. Se $f(n) = O(n^{\log_b(a)-\epsilon})$ para algum $\epsilon > 0$, então $T(n) = \Theta(n^{\log_b(a)})$  

2. Se $f(n) = \Theta(n^{\log_b(a)})$ então $T(n) = \Theta\big(\log(n) \cdot n^{\log_b(a)}\big) = \Theta\big(f(n) \log(n)\big)$

3. Se $f(n) = \Omega(n^{\log_b(a) + \epsilon})$ para algum $\epsilon > 0$ e $af\left(\frac{n}{b}\right)\leq cf(n)$ para algum $c<1$ e $n > n_0$ natural, então $T(n) = \Theta(f(n))$


---

Tags: #paa

