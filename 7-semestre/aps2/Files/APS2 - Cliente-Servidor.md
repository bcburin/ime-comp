
# Cliente-Servidor

Arquitetura [[APS2 - Estilo Arquitetural Baseado no Padrão Chamada-Retorno|baseada em chamada-retorno]].

- A lógica de apresentação, negócio e gestão dos dados se divide claramente em diferentes níveis
- Não há restrições sobre a implantação de uma aplicação multi-nível
- Todos os níveis podem ser executados na mesma máquina ou em máquinas distintas

![[Pasted image 20230409153939.png]]

## Implementação

- Organizar as funcionalidades do sistema em serviços
	- Unidades distintas
	- Interfaces bem-definidas
- Organizar os possíveis acessos às funcionalidades em diferentes clientes

## Vantagens e desvantagens

**Vantagens**

- A distribuição de dados é fácil e direta
- Faz uso efetivo dos recursos em rede/distribuição
	- Possibilita hardware mais barato
	- É fácil adicionar novos servidores ou atualizar servidores existentes

**Desvantagens**

- Não prevê modelo de dados compartilhado
- Pode haver redundância de serviços em diferentes servidores
- Não prevê registro central de serviços
	- Difícil descobrir quais serviços estão disponíveis

#aps2

