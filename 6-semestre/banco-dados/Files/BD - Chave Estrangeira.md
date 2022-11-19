
# Chave Estrangeira

---

### Definição

Um conjunto $FK$ de [[BD - Atributo|atributos]] de um [[BD - Esquema de uma Relação|esquema]] de relação $R_1$ é dito **chave estrangeira** de $R_1$ se satisfizer as seguintes condições

- Os atributos de $FK$ assumirem valores dos mesmos domínios correspondentes aos atributos  $PK$ da [[BD - Chave Primária|chave primária]] de outro esquema de relação $R_2$
- O valor de $FK$ em qualquer tupla de $R_1$ ou é nulo ou é igual ao valor de $PK$ para alguma tupla de $R_2$

-----

![[chave-estrangeira.png]]

---

Tags: #banco-dados

