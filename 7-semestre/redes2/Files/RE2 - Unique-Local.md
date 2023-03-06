
# Unique Local Address (ULA)

É composto das seguintes partes

- **Prefixo -** fc00::/7
- **Flag local**
	- Se o valor for 1 (FD), o prefixo é atribuído localmente
	- Se o valor for 0 (FC), o prefixo é atribuído por uma organização central (ainda a definir)
- **Identificador global -** identificador de 40 bits usado para criar um prefixo globalmente único
- **Identificador de interface -** identificador da interface, de 64 bits

A estrutura de um endereço ULA é `FDUU:UUUU:UUUU::`, onde `U` são os bits do identificador único, gerado aleatoriamente por um algoritmo específico.

## Diferença para endereço link-local

Em IPv6, os endereços link-local e unique-local são tipos diferentes de endereços IPv6 que servem a propósitos diferentes:

1.  Endereços link-local: são usados para comunicações restritas a um único segmento de rede (ou "link"). Os endereços link-local são usados para comunicações de baixo nível, como a descoberta de vizinhos e a configuração automática de endereços. Esses endereços têm prefixo "fe80::/10" e são atribuídos automaticamente a cada interface IPv6 quando ela é ativada.
    
2.  Endereços unique-local: são usados para comunicações dentro de uma organização ou entre várias organizações que não precisam ser roteados pela Internet pública. Os endereços unique-local são semelhantes aos endereços privados na IPv4, mas têm uma série de recursos adicionais, como a capacidade de gerar aleatoriamente parte do endereço para garantir a unicidade. Esses endereços têm prefixo "fc00::/7" e são atribuídos pelos próprios usuários ou administradores da rede.
    

Em resumo, enquanto os endereços link-local são usados para comunicações locais restritas a um único segmento de rede, os endereços unique-local são usados para comunicações mais amplas dentro de uma organização ou entre várias organizações que não precisam ser roteados pela Internet pública.


#redes2

