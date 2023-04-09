
# Dutos e Filtros

- Cada passo de processamento é encapsulado em um filtro
- O dado é passado pelos dutos entre filtros adjacentes
- Recombinação de filtros permite a construção de famílias de sistemas relacionados

## Exemplo

Construção de um compilador portável para uma linguagem L

- L é compilada para uma linguagem intermediária I que roda em uma máquina virtual VM
- VM será implementada por um interpretador ou backend específico para diferentes plataformas
- Um backend irá traduzir o código para instruções de máquina de um processador específico para melhor desempenho

![[Pasted image 20230409152059.png]]

## Implementação

- Dividir a tarefa do sistema em uma sequência de passos de processamento
	- Cada estágio deve depender apenas da saída do seu predecessor direto
	- Todos os estágios são conectados pelo fluxo de dados
- Definir o formato dos dados que serão passados por cada duto
- Decidir como implementar cada conexão de duto
- Projetar e implementar os filtros
- Projetar o tratamento de erros

#aps2

