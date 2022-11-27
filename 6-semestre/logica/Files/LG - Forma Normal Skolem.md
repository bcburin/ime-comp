
# Forma Normal Skolem

---

### Definição

Uma [[LG - FORM|fórmula]] está na **forma normal skolem** se está na [[LG - Forma Normal Prenex|forma normal prenex]] e possui apenas quantificadores *universais*. 

---

### Skolemização

Consiste em substituir [[LG - Variáveis Ligadas em Fórmulas|variáveis ligadas]] a quantificadores existenciais por constantes ou funções de variáveis universais.

- Se a variável ligada ao quantificador existencial aparece antes de qualquer quantificador universal, ela é substituída por uma constante.
- Se a variável ligada ao quantificador existencial aparece após algum quantificador universal, ela é substituída por uma função cujos argumentos são as variáveis universais que a precedem.

---

### Exemplos

$$
\begin{align*}
& \exists y \exists x \,\alpha(x,y) \iff \alpha(b,a) \\\\
& \exists y \forall x \,\alpha(x,y) \iff \forall x \, \alpha(x, a) \\\\
& \forall x \exists y \,\alpha(x,y) \iff \forall x \, \alpha(x, f(x))
\end{align*}
$$


---

Tags: #logica

