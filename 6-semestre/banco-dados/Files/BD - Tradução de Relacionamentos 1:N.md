
# Tradução de Relacionamentos 1:N

---

### Ambas Entidades com Participação Obrigatória

- Cria-se uma [[BD - Relação|relação]] para cada entidade
- Relacionamento é absorvido por entidade com [[BD - Cardinalidade|cardinalidade máxima]] igual a 1

![[traducao-relacionamento-1n-ambas-obrigatorias.png|500]]

---

### Uma Entidade com Participação Opcional

- **Se entidade opcional tem cardinalidade máxima = n**
	- Faz-se como no item anterior
- **Se entidade opcional tem cardinalidade máxima = 1**
	- Cria-se uma relação para cada entidade
	- Cria-se uma relação para o relacionamento
		- Sua [[BD - Chave Primária|chave primária]] será também [[BD - Chave Estrangeira|chave estrangeira]] que referencia a entidade com cardinalidade máxima igual a 1
		- A outra entidade também terá uma chave estrangeira associada

![[traducao-relacionamento-1n-opcional.png|500]]

---

*Obs: na prática, apenas a cardinalidade mínima da entidade com cardinalidade máxima igual a 1 importa*
	- *Se ela for 1, então todas as entradas participam do relacionamento, de modo que a coluna do relacionamento não possuirá valores nulos. Perceba que a cardinalidade mínima da outra entidade não é relevante nesse caso: se for 1, todas aparecem pelo menos uma vez nessa coluna; se for 0, há valores que não aparecem (mas não há nulos)*
	- Se ela for 0, a estratégia anterior implicaria a existência de nulos na coluna da relação, por isso se cria uma outra relação contendo apenas as tuplas que participam da relação

---

Tags: #banco-dados

