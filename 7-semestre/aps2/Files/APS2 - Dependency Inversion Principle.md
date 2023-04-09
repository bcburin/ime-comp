---
alias: DIP
---

# Dependency Inversion Principle

O princípio de inversão de dependência (DIP) dos princípios SOLID afirma que as classes de nível superior *não devem depender diretamente das classes de nível inferior*, mas ambas devem *depender de abstrações*. Além disso, as abstrações não devem depender dos detalhes, mas os detalhes devem depender das abstrações.

Em outras palavras, o DIP sugere que o código deve depender de abstrações e não de implementações concretas. Isso pode ser alcançado por meio do uso de interfaces ou classes abstratas para definir as dependências de uma classe. Em vez de criar uma instância de uma classe concreta dentro de uma classe de nível superior, a *classe de nível superior deve depender de uma interface ou classe abstrata* que representa a funcionalidade desejada.

## Exemplo

Mudar o engine do banco de dados implicará a modificação da classe `PasswordReminder`.

![[Pasted image 20230409144614.png]]

**Solução**

Inversão de dependência. `PasswordReminder` pode se conectar à base sem saber seu engine.

![[Pasted image 20230409144826.png]]

#aps2

