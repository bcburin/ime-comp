
# Detecção de Vizinhos Inacessíveis

- Utilizado para rastrear a acessibilidade *host-a-host*, *host-a-roteador* e *roteador-a-host*
- Um nó considera um vizinho accessível se ele recebeu recentemente a confirmação de entrega de algum pacote a esse vizinho
- Para acompanhar os estados dos vizinhos, o nó IPv6 utiliza duas tabelas
	- **Neighbor Cache:** mantém uma lista de vizinhos locais para os quais foi enviado tráfego recentemente. Armazena IP, MAC e se o vizinho é host ou roteador
	- **Destination Cache:** mantém informações sobre destinos para os quais foi enviado tráfego recentemente
- Procedimento executado apenas para endereços *unicast*

![[Pasted image 20230305163835.png]]

![[Pasted image 20230305164024.png]]

#redes2

