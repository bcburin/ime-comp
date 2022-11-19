
# Tradução de Auto Relacionamentos

---

### Auto Relacionamento n:n

- Cria-se uma relação para a entidade
- Cria-se uma relação para o auto relacionamento
- A [[BD - Chave Primária|chave primária]] do auto relacionamento é composta por atributos que referenciam cada lado do auto relacionamento, sendo também [[BD - Chave Estrangeira|chaves estrangeiras]]

![[traducao-autorrelacionamento-nn.png|400]]

---

### Auto Relacionamento 1:n

**Sem tolerância a nulos**

- Cria-se uma relação para a entidade
- Cria-se uma relação para o auto relacionamento
	- A [[BD - Chave Primária|chave primária]] é dada pelo identificador do lado com cardinalidade máxima igual a 1
	- O identificador do outro lado ainda aparece como [[BD - Chave Estrangeira|chave estrangeira]], possivelmente múltiplas vezes

![[traducao-autorrelacionamento-1n.png|400]]


**Com tolerância a nulos**

- Cria-se uma relação para entidade, e o auto relacionamento é fundido a ela
	- A [[BD - Chave Primária|chave primária]] é o identificador da entidade
	- O identificador do outro lado aparece como [[BD - Chave Estrangeira|chave estrangeira]] opcional

![[traducao-autorrelacionamento-1n-nulos.png|400]]

---

Tags: #banco-dados

