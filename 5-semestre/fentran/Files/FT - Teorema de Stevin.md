# Teorema de Stevin

---

### Teorema

Para um **fluido estático incompressível** de [[FT - Massa específica|massa específica]] $\rho$, as pressões $p_1$ e $p_2$ correspondentes às cotas $z_1$ e $z_2$ estão relacionadas por

$$
p_2 = p_1 - \rho g (z_2-z_1) \quad\implies\quad \Delta p = - \rho g \Delta z
$$

Em particular quando se mede a pressão $p$ de um ponto a uma distância $h$ da superfície, temos $p_1=p_{atm}$ e $z_2-z_1=-h$, o que fornece

$$
p = p_{atm} + \rho g h
$$

---

### Demonstração

Da [[FT - Equação Fundamental da Fluidostática|equação fundamental da fluidostática]], temos que 

$$
p_2 = p_1 -  \int_{z_1}^{z_2} \gamma \, \mathrm{d}z
$$

Como o fluido é incompressível, então $\gamma = \rho g$ constante

$$
p_2 = p_1 - \gamma \int_{z_1}^{z_2}  \, \mathrm{d}z = p_1 - \rho g (z_2-z_1)
$$

---

Tags: #fentran 