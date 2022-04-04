# Fórmula de Darcy-Weisbach

---

### Fórmula

A [[FT - Perda de Carga Distribuída|perda de carga]] entre dois pontos em um fluido pode ser calculada por

$$
h_p = L \frac{f}{D} \frac{v^2}{2g}
$$

Em que

- L => comprimento entre os pontos 1 e 2
- D => diâmetro interno da tubulação
- V => velocidade média do escoamento
- f => fator de atrito (adimensional), função de [[FT - Número de Reynolds|Re]] e $\varepsilon/D$, em que $\varepsilon$ é a rugosidade do material do tubo

---

### Escoamento laminar

Para o escoamento laminat, $Re < 2300$, o fator de atrito é dado por

$$
f = 64/Re
$$

---

### Escoamento turbulento

Para escoamentos turbulentos, o fator de atrito pode ser aproximado pela equação de Swamee-Jain

$$
f = \frac{0,25}{\left[\log\left(\frac{\varepsilon/D}{3,7} +\frac{5,74}{Re^{0,9}}\right)\right]^2}
$$

*Obs: o método mais prático de se obter $f$, sem fazer contas, é pelo diagrama de Moody.*

---

Tags: 