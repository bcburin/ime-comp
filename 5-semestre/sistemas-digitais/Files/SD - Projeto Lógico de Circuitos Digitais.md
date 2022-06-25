# Projeto Lógico de Circuitos Digitais

---

### Metodologia

1) Levantamento de requisitos e especificações
2) Modelagem como um sistema binário
3) Modelagem como conjunto de funções booleanas: obter uma expressão booleana para cada saída
	1) Se a quantidade total de bits de entrada for menor ou igual a 4:
		1) Obter a tabela-verdade
		2) Mapa de Karnaugh
		3) Expressão booleana (MSP ou MPS)
	2) Se a quatidade total de bits de entrada for maior do que 4: 
		1) Solução computacional
		2) Dividir o sistema em sistemas menores, que tenham menos do que 5 entradas
4) Otimização
	1) Otimização de dois níveis (two level optimization) => MSP ou MPS
	2) Solução de multinível (multi-level optimization)
		1) Minimizar a quantidade de operadores (OR, AND, NOT)
		2) Minimizar a quantidade de portas lógicas (sem restrição de tip ou número de entradas)
		3) Área de silício necessária para implementação física do circuito
		4) Reduzir a quantidade de chips de lógica padrão necessários para implementação física do circuito

---

### Termos Comuns

- bit
- word (palavra)
- nibble
- byte
- MSb
- LSb

---

### Praxe

- Representação de zero à esquerda
- Indexação de bits

---

Tags: #sistemas-digitais 