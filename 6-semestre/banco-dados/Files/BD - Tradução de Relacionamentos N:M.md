
# Tradução de Relacionamentos N:M

---

- Criar [[BD - Relação|relação]] adicional para representar relacionamento
	- Essa relação tem como [[BD - Chave Primária|chave primária]] o par de chaves primárias das entidades relacionadas
	- Os elementos da chave primária são também [[BD - Chave Estrangeira|chaves estrangeiras]] que referenciam as relações das entidades relacionadas
- Independe das cardinalidades mínimas - caso uma entidade não apareça, sua chave primária simplesmente não aparecerá na chave primária da entidade do relacionamento (não há valores nulos)

---

![[traducao-relacionamento-nm.png|500]]


---

Tags: #banco-dados

