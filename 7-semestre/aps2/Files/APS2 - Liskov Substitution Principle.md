
# Liskov Substitution Principle

O princípio da substituição de Liskov (LSP) dos princípios SOLID afirma que, *se uma classe A é um subtipo de uma classe B*, então a *classe A pode ser usada no lugar da classe B* sem afetar a correção do programa.

Em outras palavras, u*ma classe derivada deve ser substituível por sua classe base* sem quebrar o comportamento esperado do programa.

O LSP é importante porque garante que o comportamento das classes filhas não afetará o funcionamento das classes pai ou outras classes que dependem delas. Se as classes derivadas não seguirem o LSP, elas podem violar as expectativas do código que depende delas e levar a erros e comportamentos inesperados.

## Exemplo

Um exemplo de aplicação do princípio LSP seria uma hierarquia de classes que representam diferentes formas geométricas, como quadrados e retângulos. Um retângulo pode ser definido como um tipo de quadrado com lados desiguais, mas se você implementar uma classe quadrado que não segue o LSP, ela pode quebrar o comportamento esperado de outras classes que dependem dela.

Seja esse exemplo conforme a seguir.

![[Pasted image 20230409141345.png]]

O seguinte teste funciona para `Rectangle` (classe base), mas falha para `Square` (classe derivada). Portanto, viola o LSP. Isso poderia ser resolvido adicionando uma operação que calcula a área em `Rectangle`.

#aps2

