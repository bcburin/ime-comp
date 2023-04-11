---
alias: BGP
---

# Border Gateway Protocol

- O **BGP** fornece a cada [[RE2 - Sistema Autônomo|SA]] meios de
	- Obter informação de acessibilidade (alcance) da sub-rede a partir de [[RE2 - Sistema Autônomo|SA]] vizinhos
	- Propagar informação de acessibilidade a todos os roteadores internos ao SA
	- Determinar rotas boas para sub-redes com base na informação e política de acessibilidade
- **BGP** é um protocolo de roteamento do tipo *inter-domínio* que transmite informações de prefixos
- O **BGP** permite, sobretudo, que cada sub-rede anuncie sua existência ao restante da internet.

## Características

- Trata os [[RE2 - Sistema Autônomo|SA]] como se fossem roteadores
- Três categorias
	- **Redes stub:** somente uma conexão com o grafo BGP
	- **Redes multiconectadas:** podem ser usadas para tráfego
	- **Redes de trânsito:** tratar pacotes de terceiros - tarifação
- Protocolo de roteamento do tipo *path vector* - divulga rotas inteiras, ou seja, todos os AS por onde a rota para um destino pode passar.
- Não permite loops na internet

- A troca de mensagens é via *TCP* - porta 179
- Utiliza sessões para controle
- Não há descoberta automática de vizinhos
- Permite a implementação de políticas de roteamento
- Atualizações incrementais - conservação da largura de banda
- Suporte a endereçamento classless (CIDR)
- Permite autenticação
- Interage com [[RE2 - Algoritmo de Roteamento Interno|IGP]]




#redes2

