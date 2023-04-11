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



#redes2

