
# Diferenças entre ICMPv4 e ICMPv6

O ICMPv6 foi definido para ser utilizado em conjunto com o IPv6 e apresenta as mesmas funções que o ICMPv4, **reportar erros** de processamento de pacotes e enviar mensagens sobre **estado** ou **comportamento** da rede. Entretanto, o ICMPv6 **não** é compatível com o ICMPv4.

Uma das principais diferenças do ICMPv6 em relação ao ICMPv4 é que ele define **mais mensagens**, assumindo a função de protocolos que existem isoladamente no contexto do IPv4.

- **ARP** *(Address Resolution Protocol)*: IP -> MAC
- **RARP** *(Reverse Address Resolution Protocol)*: MAC -> IP
- **IGMP** *(Internet Group Management Protocol)*: Grupos Multicast

Outra diferença importante é sua utilização **em conjunto com protocolos** implementado funcionalidades

| Sigla                                            | Funcionalidade                        | Descrição                                                                    |
| ------------------------------------------------ | ------------------------------------- | ---------------------------------------------------------------------------- |
| **MLD**                                          | *Multicast Linear Discovery*          | Opera com o gerenciamento de grupos multicast                                |
| [[RE2 - NDP\|NDP]]                               | *Neighbor Discovery Protocol*         | Responsável por identificar e aprender características de rede da vizinhança |
| [[RE2 - Path MTU Discovery\|Path MTU Discovery]] | *Maximum Transmission Unit Discovery* | Trabalha na descoberta do menor MTU no caminho entre dois nós                |
| -                                                | *Mobility Support*                    | Cuida do gerenciamento de endereço de origem de host automaticamente         |
| -                                                | *Autoconfiguração Stateless*          | Permite a aquisição de endereços IPv6 globais sem uso de DHCP                |

#redes2

