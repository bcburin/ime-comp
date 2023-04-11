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
	- Total de 5 min sem atualizações numa dada roat


#redes2

