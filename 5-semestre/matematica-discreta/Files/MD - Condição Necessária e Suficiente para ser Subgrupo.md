# Condição Necessária e Suficiente para ser Subgrupo

---

### Teorema

Se $(G,\cdot)$ é um [[MD - Grupo|grupo]], então $H \subset G$ não vazio é [[MD - Subgrupo|subgrupo]] de $G$ se e só se, para todo $x,y \in H$, tem-se $x \cdot y^{-1} \in H$.

*Obs: em outras palavras, basta verificar o fechamento de $\cdot$ em $H$ e a existência de inversos, para $H$ ser subgrupo.*

---

### Demonstração

**(IDA)** Seja $H < G$. Nesse caso, $\forall x,y \in H$, temos $x \cdot y \in H$, do fechamento. Também, para qualquer $y \in H$, tem-se $y^{-1} \in H$. Disso, segue-se que $x \cdot y^{-1} \in H$.

**(VOLTA)** Seja $H \subset G$ tal que, $\forall x,y \in H$, vale $x \cdot y^{-1} \in H$. Verifiquemos

- **Existência de elemento neutro -** Para o caso $x=y \in H$, tem-se $x \cdot x^{-1} \in H$, donde $\varepsilon \in H$. 
- **Existência de elemento inverso -** Como $\varepsilon, x \in H$ para $x$ qualquer,  $x^{-1} = \varepsilon \cdot x^{-1} \in H$. 
- **Fechamento -** Para $x,y \in H$ quaisquer, temos $y^{-1} \in H$, de modo que $x \cdot (y^{-1})^{-1} = x \cdot y \in H$
- **Associatividade -** Como $\cdot$ é associativa em $G$, deve também ser associativa em $H$.

   Portanto, $H$ é grupo e $H<G$.

---

Tags: #mat-discreta 