# Potência Relativa
---

### Classificação de Canais

Classificamos os canais (sistemas) de acordo com o ganho/perda de potência

- Ganho em decibéis (dB)
  $$\boxed{G = 10\log{\frac{P_2}{P_1}}\;\mathrm{dB}} \quad (P2 > P1)$$
- Atenuação em decibéis (dB)
$$\boxed{A = 10\log{\frac{P_1}{P_2}}\;\mathrm{dB}} \quad (P2 < P1)$$
Aplicação: quando um sinal atravessa diversos canais/sistemas, o efeito equivalente pode ser obtido pela simples soma dos ganhos e do oposto das atenuações.

### Perdas na transmissão

- **linhas de transmissão, cabos coaxiais e fibras ópticas:** potência de saída decai exponencialmente com a distância
  $$P_{\text{saida}} = 10 ^{-\alpha d /10} \cdot P_{\text{entrada}} \quad\implies\quad \boxed{A_{\mathrm{dB}} = \alpha d}$$
- **Transmissões de rádio:** perda devida à dispersão esférica
  $$
  \begin{align}
	& A = \left( \frac{4\pi l}{\lambda}\right)^2 = \left( \frac{4\pi f l}{c}\right)^2 \\\\
	\implies\quad & \boxed{A_{\mathrm{dB}} = 92,4 + 20\log(f_{\mathrm{GHz}}) + 20\log(d_{\mathrm{km}})}
  \end{align}
  $$

### Unidades de potência absoluta

- dBW => $P_{\mathrm{dBW}} = \log\frac{P}{1\mathrm{W}}$
- dBm =>  $P_{\mathrm{dBm}} = \log\frac{P}{1\mathrm{mW}}$

---

Tags: #principios-telecom 