---
alias: BGP
---

# Border Gateway Protocol

O Protocolo **BGP** (Border Gateway Protocol) é um *protocolo de roteamento* usado na *Internet* e em redes de *grande porte*. Sua função principal é permitir que sistemas autônomos ([[RE2 - Sistema Autônomo|ASs]]) interconectados troquem informações sobre rotas de rede, para que possam tomar decisões informadas sobre como encaminhar o tráfego entre eles.

O BGP é um protocolo de roteamento [[RE2 - Distance Vector Routing|baseado em vetores de distância]], em que cada roteador mantém uma tabela de roteamento com informações sobre as *redes alcançáveis* e o *caminho mais curto* para chegar a elas. No entanto, diferentemente de outros protocolos de roteamento, o BGP não usa métricas como a distância ou a largura de banda para escolher a melhor rota. Em vez disso, o BGP considera o *atributo de caminho* (path attribute) de cada rota, que é composto pelo *AS de origem*, *AS de trânsito* e *AS de destino*.

Quando um sistema autônomo deseja anunciar uma rota para outra rede, ele envia uma mensagem BGP ao roteador vizinho, contendo *informações sobre a rota* e seu *atributo de caminho*. O roteador vizinho pode então decidir se deseja *propagar a rota* para outros roteadores em sua rede ou se deseja *descartá-la*. Se o roteador vizinho decidir propagar a rota, ele também pode *modificar o atributo de caminho* para refletir sua própria localização na rede.

O BGP também é capaz de detectar *loops de roteamento*, garantindo que não haja encaminhamento de pacotes em círculos infinitos entre sistemas autônomos. Além disso, o BGP permite a implementação de *políticas de roteamento*, como a preferência de rotas mais curtas ou a escolha de rotas com menor custo.

Em resumo, o protocolo BGP permite que sistemas autônomos se comuniquem e troquem informações sobre rotas de rede, permitindo que eles tomem decisões informadas sobre como encaminhar o tráfego entre eles. Ele é amplamente usado na Internet e em redes de grande porte, e é uma parte essencial da infraestrutura de rede global.

## Apresentação

- O **BGP** fornece a cada [[RE2 - Sistema Autônomo|SA]] meios de
	- Obter informação de acessibilidade (alcance) da sub-rede a partir de [[RE2 - Sistema Autônomo|SA]] vizinhos
	- Propagar informação de acessibilidade a todos os roteadores internos ao SA
	- Determinar rotas boas para sub-redes com base na informação e política de acessibilidade
- **BGP** é um protocolo de roteamento do tipo *inter-domínio* que transmite informações de prefixos
- O **BGP** permite, sobretudo, que cada sub-rede anuncie sua existência ao restante da internet.

## Características

- Trata os [[RE2 - Sistema Autônomo|SA]] como se fossem roteadores
- Três categorias
	- **Redes stub:** somente uma conexão com o grafo BGP
	- **Redes multiconectadas:** podem ser usadas para tráfego
	- **Redes de trânsito:** tratar pacotes de terceiros - tarifação
- Protocolo de roteamento do tipo *path vector* - divulga rotas inteiras, ou seja, todos os AS por onde a rota para um destino pode passar.
- Não permite loops na internet

- A troca de mensagens é via *TCP* - porta 179
- Utiliza sessões para controle
- Não há descoberta automática de vizinhos
- Permite a implementação de políticas de roteamento
- Atualizações incrementais - conservação da largura de banda
- Suporte a endereçamento classless (CIDR)
- Permite autenticação
- Interage com [[RE2 - Algoritmo de Roteamento Interno|IGP]]

## Fundamentos

- Rotas consistem em
	- Destino - usualmente prefixo IP
	- Informações que descrevem o caminho até o destino
- Peers BGP anunciam NLRI (Network Layer Reachability Information) entre si em mensagens do tipo update
- O BGP compara o AS path e outros atributos para selecionar o melhor caminho
	- Rotas indisponíveis podem ser anunciadas
	- Rotas não alcançáveis são removidas

## Path Vector

Informa os números dos [[RE2 - Sistema Autônomo|SA]] que compõe o caminho até uma rede de destino e quais redes podem ser alcançadas por este caminho

![[Pasted image 20230411171519.png]]

## BGP Neighbors

Roteadores vizinhos que rodam BGP são chamados de **neighbors**. Eles são descobertos através de configurações **pré-definidas**, não automaticamante.

#redes2

