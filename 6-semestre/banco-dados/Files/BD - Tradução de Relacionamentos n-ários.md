
# Tradução de Relacionamentos n-ários

---

- Cria-se uma [[BD - Relação|relação]] para cada entidade
- Cria-se uma relação para o relacionamento n-ário
	- A [[BD - Chave Primária|chave primária]] é composta pelos identificadores das entidades
	- Restrições adicionais podem ser implementadas excluindo um dos identificadores da chave primária

---

### Exemplo

![[traducao-relacionamento-nario.png|500]]

**Adicionando restrição -** cada par peça-projeto pode ser fornecido por um único fornecedor: basta remover $COD\_FORN$ da chave primária da relação $FORNECEDOR$ no exemplo acima.

---

Tags: #banco-dados

