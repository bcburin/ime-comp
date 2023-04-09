
# Interface Segregation Principle

O princípio da segregação de interface (ISP) dos princípios SOLID afirma que *uma classe não deve ser forçada a implementar interfaces que não serão usadas*. Em vez disso, as interfaces devem ser segregadas para atender às necessidades específicas dos clientes que as utilizam.

Em outras palavras, é melhor ter *muitas interfaces específicas* do que uma única interface grande que força as classes a implementar métodos que não precisam ser utilizados.

O ISP é importante porque *evita a criação de classes "inchadas"* que implementam *muitos métodos desnecessários*, tornando o código mais difícil de ler, entender e manter. Além disso, ele permite que as *classes sejam mais especializadas* e adaptem-se melhor às necessidades dos clientes que as utilizam.

## Exemplo

Um exemplo de aplicação do princípio ISP seria uma interface para um sistema de processamento de pagamentos que inclui muitos métodos, como autorização, captura, estorno e reembolso. Se uma classe cliente só precisa implementar a funcionalidade de autorização, ela ainda deve ser forçada a implementar todos os outros métodos, mesmo que eles não sejam necessários para a sua funcionalidade. Isso violaria o princípio ISP e pode levar a código redundante e ineficiente.

Uma solução melhor seria segregar a interface em várias interfaces menores, cada uma contendo um conjunto específico de métodos. Dessa forma, a classe cliente só implementaria a interface que contém os métodos necessários para sua funcionalidade, evitando a implementação de métodos desnecessários. Isso tornaria o código mais limpo, eficiente e mais fácil de manter.

## Exemplo

No exemplo abaixo, `Square` não precisa de `volume()`, mesmo assim é abrigada a implementá-lo.

![[Pasted image 20230409143220.png]]

**Solução**

Segregar a interface em interfaces menores.

![[Pasted image 20230409143354.png]]

#aps2

