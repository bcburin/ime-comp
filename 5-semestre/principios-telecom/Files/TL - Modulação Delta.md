# Codificação Diferencial - Modulação Delta

---

### Descrição

- [[TL - DPCM|DPCM]] utilizando apenas dois níveis de representação ($+\Delta$ e $-\Delta$);
- Dessa forma, reduz-se o tamanho da palavra código necessesário para representar o sinal de informação, pois as variações $\pm \Delta$ podem ser representadas pelos bits '0' e '1'.
- Adimitindo que o erro de predição seja pequeno (o sinal não varia significativamente entre os instantes de amostragem), a aproximação pode ser considerada satisfatória
	- Para isso, o índece de correlação entre amostras sucessivas deve ser elevado;
	- Para aumentar o índice de correlação, aumenta-se a taxa de amostragem (na modulação Delta, o sinal de entrada é amostrado numa taxa muito maior que a [[TL - Taxa de Nyquist|taxa de Nyquist]]).

---

### Vantagens e Desvantagens

##### Vatagens

- **Ganho de banda em relação ao PCM:**
	-  admitindo-se que $f_s$ seja a frequência de amostragem, a taxa de bits na saída do codificador é $R_b = f_s \times R$ para [[TL - Codificação PCM|PCM]] e $R_b=f_s$ para modulação Delta.

##### Desvantagens

- **Dois tipos de erro de quantização**
	- **Distorção por inclinação excessiva** 
		- Incapacidade de acompanhar variações rápidas de sinal
		- Quanto maior o $\Delta$, menor será esse ruído
	- **Ruído granular**
		- Erro entre sinal quantizado e sinal de entrada
		- Quanto menor o $\Delta$, menor será esse ruído

---

Tags: #principios-telecom 