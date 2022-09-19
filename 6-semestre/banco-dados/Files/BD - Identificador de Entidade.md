
# Identificador de Entidade

---

### Definição

[[BD - Atributos|Atributo]] simples ou composto que identifica unicamente cada instância da entidade.

---

O identificador de uma entidade pode ser formado
- por um subconjunto dos atributos que a descrevem
- pela combinação de seus atributos com os identificadores das entidades com as quais ela possua um relacionamento funcional mandatório

---

### Propriedades

- Não podem existir duas instâncias da entidade com o mesmo valor do identificador
- Se qualquer componente do identificador for retirado, a propriedade de unicidade deixa de ser satisfeita
- Todos os componentes de um identificador devem ser mandatórios, isto é, não podem ser nulos

---

### Tipos de Identificadores

- Identificador interno e simples
![[identificador-interno-simples.png|400]]

- Identificador interno e composto
![[identificador-interno-composto.png|400]]



### Entidade Fraca

Entidade cujo identificador é externo ou misto.

![[entidade-fraca.png|550]]

---

Tags: #banco-dados

