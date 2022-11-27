
# Forma Normal Prenex

---

### Definição

Uma [[LG - FORM|fórmula]] é dita estar na **forma normal prenex** se ela está escrita como uma sequência de quantificadores e [[LG - Variáveis Ligadas em Fórmulas|variáveis ligadas]] (**prefixo**) seguida de uma fórmula na qual não ocorrem quantificadores (**matriz**).

---

### Conversão

Toda fórmula é equivalente a uma fórmula na forma prenex. Para a conversão, podem ser usadas propriedades expressas como regras abaixo.

#### Conjunção

Se $x \not \in FV(\psi)$, então vale a equivalência

$$
\begin{align*}
\forall x \phi \wedge \psi \iff \forall x (\phi \wedge \phi)\\
\exists x \phi \wedge \psi \iff \exists x (\phi \wedge \phi)
\end{align*}
$$

Se $x \in FV(\psi)$, então faz-se a substituição $\forall x' \phi [x/x']$ ou $\exists x'\phi[x/x']$ em que $x' \not\in FV(\psi)$.

#### Conjunção

Se $x \not \in FV(\psi)$, então vale a equivalência

$$
\begin{align*}
\forall x \phi \vee \psi \iff \forall x (\phi \vee \phi)\\
\exists x \phi \vee \psi \iff \exists x (\phi \vee \phi)
\end{align*}
$$

Se $x \in FV(\psi)$, então faz-se a substituição $\forall x' \phi [x/x']$ ou $\exists x'\phi[x/x']$ em que $x' \not\in FV(\psi)$.

#### Negação

$$
\begin{align*}
&\neg \exists x \phi\iff \forall x \neg \phi \\\\
&\neg \forall x \phi \iff \exists x \neg \phi
\end{align*}
$$

### Implicação

As regras a seguir podem ser deduzidas aplicando a transformação $\phi \rightarrow \psi \iff \neg \phi \vee \psi$ e aplicando as regras anteriores. Para remover quantificadores do antecedente, usa-se

$$
\begin{align*}
& \forall x \phi \rightarrow \psi \iff \exists x (\phi \rightarrow \psi) \\
& \exists x \phi \rightarrow \psi \iff \forall x (\phi \rightarrow \psi)
\end{align*}
$$
Por outro lado, para o consequente, são válidas

$$
\begin{align*}
& \phi \rightarrow \forall \psi \iff \forall x (\phi \rightarrow \psi) \\
& \phi \rightarrow \exists \psi \iff \exists x (\phi \rightarrow \psi)
\end{align*}
$$

---

Tags: #logica