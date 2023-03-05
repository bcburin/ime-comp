
# Soluções Paliativas para Problemas do IPv4

## CIDR/VLSM

O fim do uso de classes de endereços IPv4, permitindo a
alocação de blocos de **tamanho apropriado** à real
necessidade de cada rede, e a **agregação de rotas**,
**reduzindo o tamanho** da tabela de roteamento.

Aborda os seguintes problemas
- **Escassez** de endereços IPv4
- **Aumento** do tamanho das tabelas de reteamento

## Endereços IP privados

Estes endereços são associados aos dispositivos que precisam se comunicar com outros dispositivos em uma rede privada (que não faz parte da Internet).

## NAT

*Network Access Translation*

Permitir que com um único endereço IPv4 público, vários hosts possam  trafegar na internet.

Um dispositivo intermediário (geralmente um roteador) conectado à internet toma a responsabilidade de fazer reenviar os pacotes dos hosts aos quais está conectado em seu nome, através de sua interface com endereço IPv4 público. Ao receber pacotes de resposta, utiliza a informação do número de porta de processo para rotear um novo pacote para o host a quem ela seria dirigida.

Quebra o princípio fim-a-fim.

## CGNAT

*Carrier Grade NAT* ou *Large Scale NAT*

Trata-se de compartilhar um endereço público e dinâmico com mais de um usuário, para poder suprir a demanda. Comum em redes de telefones móveis.

## DHCP

Permitir atribuição de endereços IPv4 temporários

#redes2

