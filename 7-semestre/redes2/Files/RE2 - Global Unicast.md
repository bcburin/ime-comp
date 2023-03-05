
# Global Unicast RE2

## Descrição

- Equivalente aos endereços **públicos** IPv4.
- Globalmente roteável e acessível na internet IPv6.

## Constituição

Constituído por três partes

- **Prefixo de roteamento global -** utilizado para identificar o tamanho do bloco atribuído a uma rede
- **Identificação da sub-rede -** utilizado para identificar um enlace em uma sub-rede
- **Identificação de interface -** Identifica de forma única uma interface em uma sub-rede

## Estrutura

Sua estrutura foi projeta para utilizar os 64 bits mais à esquerda para identificação da rede e os 64 bits mais à direita para identificação da interface.

*Obs: exceto em casos específicos, todas as subredes IPv6 tem tamanho 64*

## Faixa reservada

Atualmente, está reservada para atribuição de endereços a faixa 2000::/3

#redes2

