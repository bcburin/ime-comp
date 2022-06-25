# Teorema da Amostragem

---

### Teorema

Um [[TL - Sinais em tempo contínuo e em tempo discreto|sinal contínuo no tempo]], limitado em banda e de [[TL - Sinais de energia e sinais de potência|energia finita]] que não possua frequências maiores que $W$ é descrito completamente se as amostras forem tomadas a uma taxa de amostragem $f_s$ tal que

$$ f_s \geq 2W $$

Ou, equivalentemente, com um período de amostragem tal que

$$ T_s \leq \frac{1}{2W} $$

Caso contrário, ocorrerá o fenômeno de *aliasing*.

---

### Prática

- Na prática, todo sinal, por ser limitado no tempo, é ilimitado na frequência;
- Para garantir que não ocorra *aliasing*, utiliza-se um filtro passa baixa **antes** do processo de amostragem (filtro *anti-aliasing*).

---

Tags: #principios-telecom 