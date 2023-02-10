
# Partição de Dados

---

Consiste em separa os dados em

- **Dados para treinamento** 
- **Dados para testes**

---

### Holdout

Este método divide aleatoriamente os registros em uma porcentagem fixa $p$ para treinamento e $1-p$ para teste.

*Geralmente se usa $p=2/3$.*

---

### Validação cruzada com $K$ conjuntos

- Dividem-se aleatoriamente o conjunto de dados com $N$ elementos em $K$ subconjuntos disjuntos *(folds)*, com aproximadamente o mesmo número de elementos
- Cada um dos $K$ subconjuntos é utilizado como conjunto de teste e os $K-1$ demais subconjuntos são reunidos em um conjunto de treinamento
- O processo é repetido $K$ vezes, sendo gerados e avaliados $K$ modelos de conhecimento

---

### Validação cruzada com $K$ conjuntos estratificada

- Aplicável eme problemas de classificação
- Método similar à *validação cruzada com $K$ subconjuntos*
- Ao gerar subconjuntos mutuamente exclusivos, a proporção de exemplos em cada uma das classes é considerada durante a amostragem

*e.g. se o conjunto original possui duas classes com distribuição 20% e 80%, cada subconjunto também deverá ter aproximadamente essa proporção.*

---

### Bootstrap

- O **conjunto de treinamento** é gerado a partir de $N$ sorteios aleatórios e com **com reposição** a partir do conjunto de dados original ($N$ registros)
- O **conjunto de teste** é composto pelos registros do conjunto original não sorteados para o conjunto de treinamento
- 

---
![[ml-particao-de-dados.png|400]]

---

Tags: #inteligencia-artificial

