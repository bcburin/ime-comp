---
alias: NDP
---

# Neighbor Discovery Protocol

## Descrição

Desenvolvido sob a finalidade de resolver os problemas de interação entre nós vizinhos de uma rede. Atua sobre dois aspectos

- **Autoconfiguração de nós**
- **Transmissão de Pacotes**

## Autoconfiguração de Nós

Suporte para a realização de três funcionalidades

- **Parameter discovery:** atua na descoberta por um nó de informações sobre o enlace (como o MTU) e sobre a internet (como hop limit)
- **Address autoconfiguration:** trabalha com a autoconfiguração stateless de endereços nas interfaces de um nó
- **Duplicate address detection:** utilizado para descobrir se o endereço que se deseja atribuir a uma interface já está sendo utilizado por outro nó na rede

## Transmissão de Pacotes

Suporte para a realização de seis funcionalidades

- **Router discovery:** trabalha com a descoberta de roteadores pertencentes à rede
- **Prefix discovery:** implementa a descoberta de prefixos de redes do enlace, cuja finalidade é decidir para onde os pacotes serão direcionados numa comunicação (se é para um roteador específico ou direto para um nó de enlace)
- **Address resolution:** descobre o endereço físico através de um endereço lógico IPv6
- **Neighbor unreachability detection:** permite que os nós descubram se um vizinho é ou se continua alcançável, uma vez que problemas podem ocorrer tanto nos nós quanto na rede
- **Redirect:** permite ao roteador informar ao nó uma rota melhor a ser utilizada para enviar pacotes a determinado destino
- **Next-hop determination:** algoritmo para mapear um endereço IP de destino em um endereço IP de um vizinho para onde o tráfego deve ser enviado

## Mensagens NDP

Há dois tipos de mensagem NDP

| Mensagem               | Sigla | Tipo | Descrição                                                                                                                                                                         |
| ---------------------- | ----- | ---- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Router Solicitation    | RS    | 133  | Utilizada por hosts para requisitar aos roteadores mensagens de Router Advertisement imediatamente. Normalmente é enviada para o endereço multicast ff02::2 (all routers or link) |
| Router Advertisement   | RA    | 134  | Enviada periodicamente ou em resposta a um RS. Utilizada pelos roteadores para registrar sua presença no enlace.                                                                  |
| Neighbor Solicitation  | NS    | 135  | Mensagem multicast enviada por um nó para determinar o endereço MAC e a acessibilidade de um vizinho, além de detectar a existência de endereços duplicados                       |
| Neighbor Advertisement | NA    | 136  | Enviada em resposta a uma mensagem NS ou espontaneamente para anunciar a mudança de alguma característica                                                                                                                                                                                   |


#redes2

