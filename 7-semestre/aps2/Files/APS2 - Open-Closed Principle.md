---
alias: OCP
---

# Open-Closed Principle

Classes (módulos) devem estar *abertas para extensão*,
mas *fechadas para modificação*. Quando novos comportamentos e recursos precisam ser adicionados no software, deve-se procurar *estender* e *não alterar o código fonte original*.

Quando os requisitos mudam, deve-se estender o módulo para se adicionar o comportamento. Para isso, encapsulamento é um conceito chave. Como consequência disso, deve-se evitar variáveis públicas e globais.

## Exemplo

![[Pasted image 20230409135927.png]]

- Se for necessário adicionar uma nova figura, seria necessário adicionar um novo `if`
- Risco de adicionar erros em algo que já era funcional
- Risco de transformar classe em *Large Class*

**Solução**

Criar uma abstração e acoplar o cliente a ela.

![[Pasted image 20230409140103.png]]

#aps2

