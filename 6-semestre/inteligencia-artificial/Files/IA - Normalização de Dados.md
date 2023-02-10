
# Normalização de Dados

---

- Ajuste de escala dos valores de forma que eles fiquem em pequenos intervalos, tais como $[-1,1]$ ou $[0,1]$.
- Evita que atributos influenciem de forma tendenciosa a mineração por ordem de grandeza

---

### Técnicas

- **Linear** -> $A' = (A - Min) / (Max - Min)$
- **Score** -> $A' = (A - M_A) / \sigma$
- **Soma** -> $A' = A / \Sigma$
- **Máximo** -> $A' = A / Max$
- **Escala Decimal** -> $A' = A /10^j$


---

Tags: #inteligencia-artificial

