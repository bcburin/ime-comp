# Desempenho de Instruções

---

### Fatores

Um determinado programa exigirá um determinado número de

- instruções de máquina
- ciclos
- segundos (tempo de execução)

---

### Equacionamento

Essas quantidades estão relacionadas por

$$
T_{CPU} = IC \times CPI \times \text{(Tempo de ciclo de clock)}
$$

Em que

- $IC$ => número de instruções de máquina
- $CPI$ => número de ciclos por instrução

---

### Relação com Fatores de Desempenho

- **Algoritmo:** afeta $IC$
- **Linguagem de programação:** afeta $IC$ e $CPI$
- **Compilador:** afeta $IC$ e $CPI$
- **ISA:** afeta $IC$, $CPI$ e $T_{CPU}$

---

Tags: #organ-comp 