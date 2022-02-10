# Ruído
---

### Descrição 

- Fenômeno inevitável, indesejável, cuja amplitude é aleatória e variante no tempo. 
- É modelado por meio de leis probabilísticas. 
- Sua natureza pode ser interna ou externa ao sistema. 
- Normalmente, considera-se o ruído como **aditivo**, ou seja, que se soma ao sinal.

*e.g.: a forma mais comum é o ruído térmico presente em todos os receptores.*

### Relação Sinal/Ruído (SNR)

Representa a razão entre a potência so sinal que carrega a informação e a potência do ruído, **na entrado do receptor**. Usualmente é expressa em decibéis, conforme definição abaixo.

$$\boxed{\mathrm{SNR\,(dB)} = 10 \,\log\frac{P_s}{P_r}}$$

- SNR => signal-to-noise ratio
- $P_s$ => potência do sinal
- $P_r$ => potência do ruído

### Capacidade de Informação dos Sistemas

Pode-se melhorar o desempenho de um sistema aumentando uma das seguintes características.

- **SNR:** para compensar ou acomodar a limitação imposta pela banda disponível do canal
- **Banda passante:** para compensar a limitação imposta pela baixa SNR.

### Teorema de Shannon-Hartley

A capacidade **máxima** de transmissão de informação de um sistema depende da SNR e da banda passante, sendo dada por

$$ \boxed{ C = B \,\log_2(1+\mathrm{SNR}) } $$

---

Tags: #principios-telecom 