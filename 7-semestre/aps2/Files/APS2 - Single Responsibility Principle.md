---
alias: Responsabilidade Única
---

# Single Responsibility Principle

O princípio Single Responsibility (SRP) dos princípios SOLID afirma que uma classe deve ter apenas uma *única responsabilidade*. Em outras palavras, uma classe deve ter apenas *um motivo para ser alterada*.

O SRP é importante porque classes com várias responsabilidades podem se tornar difíceis de entender, manter e estender. Além disso, se uma classe tiver várias responsabilidades e uma delas precisar ser modificada, isso pode afetar outras partes do código que dependem daquela classe.

Um exemplo de aplicação do princípio SRP seria uma classe que gerencia a exibição e a persistência de dados. Essa classe teria duas responsabilidades distintas e, portanto, violaria o SRP. Em vez disso, essas responsabilidades poderiam ser divididas em duas classes separadas, como uma classe de visualização e uma classe de persistência de dados.

## Problemas causados pela violação do princípio

- **Falta de coesão e alto acoplamento** - mais responsabilidades geram um maior nível de dependências, deixando o sistema engessado e frágil para alterações.
- **Dificuldades de reuso**
- **Dificuldade para gerar testes automatizados**

## Exemplo

![[Pasted image 20230409133556.png]]

Nesse exemplo, a classe Rectangle tem duas responsabilidades: calcular a área e desenhar o retângulo na tela.

**Solução**

Mover a responsabilidade `draw()` para outra classe.

![[Pasted image 20230409133753.png]]


#aps2

