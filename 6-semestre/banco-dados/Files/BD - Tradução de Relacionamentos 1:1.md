
# Tradução de Relacionamentos 1:1

---

### Ambas Entidades com Mesmo Identificador

- Entidades são agrupadas em uma mesma relação.
- Identificador em comum se torna a [[BD - Chave Primária|chave primária]] da relação

![[traducao-relacionamento-11-mesmo-id.png|500]]

---

### Entidades com Identificadores Distintos

- Entidades são agrupadas em uma mesma relação
- Ambos identificadores são incluídos na relação como [[BD - Atributo|atributos]]
	- Um dos identificadores deve ser escolhido como [[BD - Chave Primária|chave primária]] (a escolha pode se basear na demanda por consultas críticas)
	- O outro identificador é uma [[BD - Chave Candidata|chave candidata]]

![[traducao-relacionamento-11-diferentes-id.png|500]]

---

### Uma das Entidades tem Participação Opcional

**Primeira opção:**
- Criar uma relação para cada entidade
- Criar uma relação para o relacionamento
	- O identificador de uma das entidades terá que ser escolhido como [[BD - Chave Primária|chave primária]] do relacionamento
	- O outro identificador será [[BD - Chave Candidata|chave candidata]]

![[traducao-relacionamento-11-um-opcional-sem-fundir.png|500]]

**Segunda opção:**
- Criar uma relação para cada entidade
- Fundir o relacionamento à entidade mandatória

![[traducao-relacionamento-11-um-opcional-com-fusao.png|500]]

*Obs: se, na segunda opção, a fusão ocorresse com a entidade opcional (cliente), haveria a necessidade de utilizar valores nulos na coluna do relacionamento (deve ser evitado).*

---

### Ambas Entidades tem Participação Opcional

- Cria-se uma relação para cada entidade
- Cria-se uma relação para o relacionamento
	- Como [[BD - Chave Primária|chave primária]] dessa relação, basta utilizar o identificador de uma das entidades
	- O outro identificador é uma [[BD - Chave Candidata|chave candidata]]

![[traducao-relacionamento-11-ambos-opcionais.png|500]]

---

Tags: #banco-dados

