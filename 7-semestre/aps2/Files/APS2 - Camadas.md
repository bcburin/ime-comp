
# Camadas

Arquitetura [[APS2 - Estilo Arquitetural Baseado no Padrão Chamada-Retorno|baseada em chamada-retorno]].

Ajuda a estruturar aplicações que podem ser decompostas em grupos de sub-tarefas em que cada grupo de sub-tarefas está em um nível de abstração específico.

## Exemplo

Modelo OSI.

![[Pasted image 20230409153103.png]]

## Implementação

- Definir o critério de abstração para agrupar tarefas em camadas
	- Exemplo: distância ao hardware
- Determinar o número de níveis de abstração de acordo com seu critério de abstração
	- A tarefa de camada mais alta é a percebida pelo cliente
	- As tarefas das demais camadas visam a ajudar a realização da tarefa da camada mais alta
- Especificar os serviços e a interface de cada camada

## Vantagens e desvantagens

**Vantagens**

- Permite projetos baseados em níveis crescentes de abstração
- Permite partir problemas complexos em uma sequência de passos incrementais
- Permite que diferentes implementações da mesma camada possam ser usadas desde que mantenham a mesma interface com as camadas adjacentes

**Desvantagens**

- É difícil encontrar os níveis de abstração corretos (muitas vezes, os serviços abrangem diversas camadas)
- Propagação de mudança de comportamento
- Menor eficiência

#aps2

