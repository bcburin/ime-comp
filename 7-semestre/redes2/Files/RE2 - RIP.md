---
alias: RIP
---

# Routing IP

- Primeiro protocolo de roteamento padrão para ambientes TCP/IP
- Protocolo do tipo [[RE2 - Distance Vector Routing|vetor-distância]]
- A métrica utilizada é o *hop* (salto)
	- Para uma rede diretamente conectada, `hop = 1`
	- A contagem de hops é limitada a 15 (`hops = 16` significa inalcançável)
- Mensagens com informações de rota divulgadas por broadcast

## Temporizadores RIP

- *Update Timer* ou *Periodic Timer*
	- A cada 30 s, as tabelas de roteamento são trocadas entre os vizinhos
- *Invalid Timer* ou *Expiration Timer*
	- As rotas aprendidas devem ser atualizadas em até 180 s (3 min)
	- A rota é considerada expirada e a contagem de saltos é atualizada para 16
	- Cada rota tem seu próprio temporizador
- *Flush Timer* ou *Garbage Collection*
	- Mais 120 s (2 min) e as entradas são removidas das tabelas de rotas
	- Total de 5 min sem atualizações numa dada rota
	- Continua anunciando a rota com valor 16 até expirar o temporizador

## Transporte RIP

O RIP opera na porta **UDP** 520.

![[Pasted image 20230411095349.png]]

## RIPv1

![[Pasted image 20230411095723.png]]

**Problemas**

- Pode levar muito tempo para convergir
- Tempo de estabilização: minutos
- Não suporta VLSM - não leva em conta as sub-redes, exceto as diretamente conectadas
- A métrica é limitada, logo não suporta redes de grandes dimensões
- Segurança - não há autenticação de mensagens
- Mensagens em broadcast - todos recebem os datagramas UDP

## RIPv2

![[Pasted image 20230411095807.png]]

- O protocolo não é modificado, os campos com zero no RIPv1 são utilizados para transmissão de outras informações
- Mantém compatibilidade com RIPv1
- Classless routing - máscaras de sub-rede
- Autenticação - campo Family of NET (AFI) - quando usado impossibilita interoperabilidade entre RIPv1 e RIPv2
- Utiliza multicast fixo - endereço 224.0.0.9
- Loops e convergência
	- Route poisoning
	- Poison reverse
	- Hold down

## Limitações

- Restrição do roteamento a uma única métrica: contagem de saltos
- Pequeno valor para infinito (16). Afeta [[RE2 - Sistema Autônomo|SA]] maiores ou que não possuam uma [[RE2 - Roteamento Hierárquico|organização hierárquica]].
- Utilização apenas da contagem de saltos torna o roteamento relativamente estático.

#redes2

