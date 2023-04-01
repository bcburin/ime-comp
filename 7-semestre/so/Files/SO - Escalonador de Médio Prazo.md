
# Escalonador de Médio Prazo

- O escalonador de médio prazo é responsável por decidir se um processo deve ser colocado em um *estado de hibernação,* ou seja, seus dados são salvos no disco e ele é retirado da memória RAM para *liberar recursos*, mas com a possibilidade de ser retomado posteriormente. 
- Esse tipo de escalonador é executado com *menos frequência* que o [[SO - Escalonador de Curto Prazo|escalonador de curto prazo]], mas *mais frequentemente* que o [[SO - Escalonador de Longo Prazo|escalonador de longo prazo]]. 
- Ele é geralmente acionado quando há *escassez de memória RAM* disponível para alocar novos processos
- Escalonador de médio prazo pode ser adicionado se for necessário diminuir o [[SO - Escalonador de Longo Prazo#Grau Multiprogramação|grau de multiprogramação]]
- Remove processo da memória, armazena em disco, traz de volta do disco para continuar execução: **swapping**

![[Pasted image 20230401124744.png]]

#so

