# Codificação Diferencial

---

### Motivação

- É possível usar **predição** para tirar proveito da informação relativa à função autocorrelação do sinal de entrada no processo de codificação.
- Para sinais altamente correlacionados, a amplitude do sinal tende a variar lentamente de uma amostra para a seguinte.

---

### Estratégia

- Realizar a **predição** do valor da amplitude de uma amostra a partir das amostras anteriores.
- **Codificar apenas o erro da predição.**
- Como se espera que esse erro varie muito menos que o sinal propriamente dito, as células de partição poderão ser menores, reduzindo o erro de quantização.

---

### Predição

- A forma mais simples de realizar a predição da próxima amostra é dizer que ela será proporcional à última amostra
$$
\hat{s}(nT_s) = a \cdot s\big((n-1)T_s\big) 
$$

- A constante $a$ pode ser estimada de modo a minimizar a variância do erro de predição; no entanto, será adotado $a=1$, ou seja, assume-se que o valor da próxima amostra será igual ao da amostra anterior.

- **Erro**
$$
e(nT_s) = s(nT_s) - \hat{s}(nT_s)
$$

---

### Esquema Básico

- **Codificador**
![[cod-dif-cod.png|500]]

- **Decodificador**
![[cod-dif-dec.png|420]]

---

Tags: #principios-telecom 