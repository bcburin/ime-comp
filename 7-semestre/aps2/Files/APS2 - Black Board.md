---
alias: Repositório Centralizado
---

# Black Board (Repositório Centralizado)

Arquitetura [[APS2 - Estilo Arquitetural Baseado em Repositórios|baseada em repositório]].

- Os componentes interagem através de um repositório de dados compartilhados
- Possibilita múltiplos componentes acessar a dados persistentes e favorece a modificação de produtores e consumidores de dados

![[Pasted image 20230409155830.png]]

## Exemplo

![[Pasted image 20230409155737.png]]

## Implementação

- Definir o esquema de dados do repositório
- Definir a interface do componente controlador
- Distribuir as funcionalidades nos demais componentes

## Vantagens e desvantagens

**Vantagens**

- Maneira eficiente de compartilhar grandes quantidades de dados
- Dados aderem a uma representação comum
- Simplifica o projeto de aplicações fortemente baseadas em dados, tanto para troca de informações quanto para armazenamento

**Desvantagens**

- O subsistemas devem estar de acordo com um modelo de dados padronizado
	- Dificulta a evolução
	- Dificuldade para distribuir de forma eficiente

#aps2

