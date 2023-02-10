
# Mineração de Regras de associação

---

### Definição

Esse processo consiste em encontrar [[IA - Regra de Associação|regras de associação]] que sejam [[IA - Regra de Associação#Regra de Associação Frequente|frequente]] e [[IA - Regra de Associação#Regra de Associação Válida|válidas]] em um dado [[IA - Dataset|dataset]], a partir da especificação dos parâmetros de suporte e confiança mínimos.

---

### Estrutura comum dos algoritmos

- Identificação dos conjuntos de itens frequentes
- Identificação, dentre as regras $R:X\to Y$ geradas a partir de cada conjunto frequente, quais são as válidas

Baseiam-se na propriedade de monotonicidade do suporte.

---

### Monotonicidade do suporte

Um [[IA - K-Itemset|k-itemset]] somente pode ser frequente se todos seus $(k-1)$-subconjuntos forem frequentes.

---

Tags: #inteligencia-artificial

