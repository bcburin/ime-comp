
# Fragmentação IPv6

## Descrição

- No IPv6, a fragmentação **só ocorre na origem**
- Path MTU Discovery (Descoberta de Caminho MTU)
- A fragmentação no IPv6 é **fim-a-fim** - roteadores **não** fragmentam

## Fragmentação fim-a-fim

- Reduz overhead nos roteadores
- Não concilia mudança de rota
- Para resolver o problema de mudança de rota que afete a MTU no caminho, o IPv6 oferece uma nova mensagem de erro ICMP
- Quando o roteador descobre que a fragmentação é necessária, envia uma mensagem ICMP informando a origem
- A origem, então, realiza uma nova descoberta de caminho MTU e fragmenta o datagrama conforme seu novo valor

## Cabeçalho

A fragmentação é tratada em um [[RE2 - Cabeçalhos de Extensão IPv6|cabeçalho de extensão]], já que é pertinente apenas para os dispositivos de borda de rede (fragmentação fim-a-fim).

![[Pasted image 20230305010233.png]]

*Obs: cada fragmento precisa ser múltiplo de 8 octetos*

#redes2

