
# Link-Local

## Descrição

- Pode ser usado apenas no enlace específico onde a interface está conectada
- O endereço link-local é atribuído automaticamente utilizando a faixa fe80::/64
- Os 64 bits reservados para a identificação da interface são configurados usando o formato IEEE EUI-64
- Vale ressaltar que os roteadores **não devem** encaminhar para outros enlaces pacotes que possuam como origem ou destino um endereço de link-local

## Características

- Endereço com grande probabilidade de se globalmente único, utilizado apenas para comunicações locais, geralmente dentro de um mesmo enlace ou conjunto de enlaces.
- Não deve ser roteável na internet global
- Utiliza um id global alocado pseudo-randomicamente

## Necessidade

*Por que endereços de link-local são necessários, se há abundância de endereços IPv6?*

Os endereços de link-local no IPv6 são necessários por várias razões, mesmo que haja uma abundância de endereços IPv6 disponíveis. Algumas dessas razões são:

1.  Redes locais: Em redes locais, como LANs, os endereços de link-local são usados ​​para a comunicação interna entre dispositivos. Eles são únicos dentro de um segmento de rede, e não são roteáveis fora desse segmento, o que torna a comunicação mais eficiente e segura.
    
2.  Automação de rede: Os endereços de link-local são usados ​​para a automação de rede, como a descoberta de vizinhos (Neighbor Discovery) e a configuração automática de endereços IP sem a necessidade de um servidor DHCP. Eles também são usados ​​para outros protocolos de rede que exigem endereços únicos e confiáveis, como o Protocolo de Endereçamento Sem Estado (SLAAC).
    
3.  Segurança: O uso de endereços de link-local em redes locais ajuda a aumentar a segurança, pois esses endereços não são roteáveis fora da rede local e, portanto, são menos vulneráveis ​​a ataques externos.
    
4.  Escassez de endereços públicos: Embora haja uma abundância de endereços IPv6, ainda há uma limitação no número de endereços públicos disponíveis. Os endereços de link-local permitem que dispositivos em redes locais se comuniquem sem usar um endereço público.
    

Em resumo, os endereços de link-local são uma parte importante da arquitetura do IPv6, pois permitem a comunicação eficiente e segura entre dispositivos em redes locais, e fornecem suporte para automação de rede e protocolos de rede que exigem endereços únicos e confiáveis.

#redes2

