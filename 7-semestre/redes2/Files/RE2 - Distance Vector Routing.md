
# Distance Vector Routing

## Descrição

- Algoritmo de roteamento original da Internet (RIP)
- Baseia-se na manutenção de uma tabela atualizada com os custos dos melhores caminhos para cada destino na rede e qual o enlace a ser utilizado para alcançar tal destino
- Estes custos podem ser medidos em hops, retardo, etc
- As tabelas são trocadas entre nós vizinhos em intervalos regulares
- A capacidade e o tráfego do enlace **não** são levados em conta

![[Pasted image 20230307085230.png]]

## Problema

Problema da contagem até o infinito

![[Pasted image 20230307090012.png]]

**Soluções**

#redes2

