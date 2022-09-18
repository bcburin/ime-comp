# Derivação da Negação

---

### Teorema

Para um conjunto de proposições $\Gamma$ e uma proposição $\phi$, tem-se

1. $\Gamma \cup \{\neg\phi\}$ é [[LG - Conjunto Consistente|inconsistente]] => $\Gamma \vdash \phi$
2. $\Gamma \cup \{\phi\}$ é [[LG - Conjunto Consistente|inconsistente]] => $\Gamma \vdash \neg \phi$

---

### Demonstração

1. Temos que $\Gamma \cup \{\neg \phi\} \vdash \;\perp$, então existe uma derivação $D$ com $\mathrm{hyp}(D) \subset \Gamma \cup \{\neg \phi\}$ que conclui $\perp$.  Sejam dois casos
	1. $\neg\phi \not\in \mathrm{hyp}(D)$ -> nesse caso, tem-se $\mathrm{hyp}(D) \subset \Gamma$ e se aplica a regra $(\perp)$ para concluir $\phi$, de modo que há uma derivação com hipóteses em $\Gamma$ concluindo $\phi$, ou seja, $\Gamma \vdash \phi$.
	2. $\neg\phi \in \mathrm{hyp}(D)$ -> nesse caso, aplica-se a RAA (redução ao absurdo) e conclui-se $\phi$ cortando a hipótese $\neg \phi$ , logo há uma derivação com hipóteses em $\Gamma$ que conclui $\phi$, isto é, $\Gamma \vdash \phi$.
2. Análoga à demonstração anterior, mas quando $\phi \in \mathrm{hyp}(D)$ utiliza-se $(\rightarrow I)$ ao invés de RAA.

---

Tags: #logica 