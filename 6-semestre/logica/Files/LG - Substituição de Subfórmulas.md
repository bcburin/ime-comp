# Substituição de Subfórmulas

---

### Definição

Define-se a **substituição** em $\phi$ da proposição atômica $p_i$ pela fórmula $\psi$ como a aplicação $\phi[\psi/p_i]: PROP\to PROP$, que pode ser dado por recursão, segundo

$$
\begin{align*}
	&\phi[\psi/p_i]  && =
    
    \begin{cases}
        \;\phi, \quad \text{se } \phi \text{ atômica e } \phi\neq p_i\\
        \;\psi, \quad \text{se } \phi = p_i  
    \end{cases}\\
  
    &(\phi_1 \;\square\; \phi_2)[\psi/p_i] && = \phi_1[\psi/p_i] \;\square\;\phi_2[\psi/p_i]\\

    &(\neg \phi)[\psi/p_i] && = \neg \phi[\psi/p_i] 

\end{align*}

$$

---

Tags: #logica 