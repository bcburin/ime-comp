---
alias: OSPF
---


# Open Shortest Path First

## Características

- Protocolo de [[RE2 - Link State|estado de enlace]]
- É um protocolo aberto -> substituto popular para protocolos proprietários
- Realiza roteamento de acordo com o tipo de serviço
- Suporta rotas classless
- Utiliza multicast
- Segurança - pode utilizar mecanismos de autenticação e criptografia
- Topologia de rede virtual

## Recursos avançados

- Segurança - todas as mensagens OSPF podem ser autenticadas
- Múltiplos caminhos de mesmo custo permitidos (apenas um caminho no [[RE2 - RIP|RIP]])
- Realiza roteamento de acordo com o tipo de serviço (ToS)
	- Para cada enlace, múltiplas métricas de custo para ToS diferentes (e.g. custo de enlace de satélite definido baixo para melhor esforço, alto para tempo real)
- Faz balanceamento de carga ao invés de só usar o melhor caminho
- Suporte integrado para unicast e multicast
	- Multicast OSPF (MOSPF) usa a mesma base de dados de topologia que OSPF
- OSPF pode utilizar hierarquia em grandes domínios - reduz requisitos de memória

## Funcionamento

- Utiliza o IP diretamente
- Um grafo do AS é construído
	- Os vértices são roteadores, redes ou estações diretamente conectadas aos roteadores
	- As arestas são as conexões entre roteadores ou entre roteadores e redes. Podem ser bidirecionais (custos distintos) - grafo direcionado.
	- Informações sobre os vizinhos são divulgadas para todos os demais roteadores do AS.
- Custos
	- Um custo é associado a cada saída de um roteador
	- Estes custos são adimensionais e podem ser baseados em throughput, RTT, confiabilidade, etc
	- Custos para redes em outros AS são obtidos de um  EGP
	- O custo de uma rede para um roteador é zero
	- Há balanceamento de carga quando existem várias rotas para um destino
	- A melhor rota para cada rede é calculada por Dijkstra - o resultado do cálculo é um banco de dados da topologia da rede, a partir do qual cada roteador constrói uma árvore de caminhos mais curtos, tendo a si mesmo como raiz da árvore. Esta árvore de caminho mais curto fornece a rota a cada destino.

## Cabeçalho da mensagem OSPF

![[Pasted image 20230411110213.png]]

**Tipos**

| Tipo                 | Descrição                                                                            |
| -------------------- | ------------------------------------------------------------------------------------ |
| Hello                | Usada para descobrir vizinhos e para manter relacionamentos com eles                 |
| Database Description | Lista as informações de estado de enlace sem realmente fornecê-las                   |
| Link State Request   | Requisita uma ou mais partes específicas da informação de estado de enlace           |
| Link State Update    | A principal mensagem no OSPF - usada para distribuir informações de estado de enlace |
| Link State Ack       | Confirma o recebimento seguro da informação de estado de enlace                                                                                     |

## Hierarquia no OSPF

- [[RE2 - Sistema Autônomo|SA]] muito grandes são divididos em áreas
- Uma área é uma rede ou conjunto de redes contíguas
- Áreas não se sobrepõe
- Pode haver roteadores que não pertencem a nenhuma área
- Existe uma **área de backbone** (área 0)
	- Cada área possui seu próprio banco de dados de sua topologia e deve possuir pelo menos 1 roteador conectado ao **backbone**
	- Há três tipos de rotas: na mesma área, entre áreas e entre SA.
- Hierarquia em dois níveis: área local, backbone
	- Anúncios de estado de enlace somente na área
	- Cada nó tem topologia de área detalhada; somente direção conhecida (caminho mais curto) para redes e

#redes2

