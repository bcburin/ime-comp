---
alias: PCB
---

# Bloco de Controle do Processo

Cada [[SO - Processo|processo]] possui um conjunto de informações associado, contendo

- [[SO - Estado de Processo|Estado]] corrente do processo
- Contador de programa e **registradores** da CPU
- Informações de escalonamento da CPU - **prioridade**, etc
- Informação de **gerenciamento de memória**
- Informação contábil: **CPU utilizada**, intervalo de **tempo desde início**, etc
- Informação de status de E/S - **dispositivos E/S associados** ao processo, lista de **arquivos abertos**

![[Pasted image 20230401120029.png]]

## Exemplo

![[Pasted image 20230401120426.png]]

1. Duas instruções de P1 são executadas
2. A execução é passada passada para P2, os valores dos registradores em P1 são salvos em PCB1.
3. A primeira instrução de P2 é executada
4. A execução volta para P1, os valores dos registrados em P2 são salvos em PCB2, e os valores armazenados em PCB1 são carregados
5. P1 executa sua terceira instrução corretamente

*Caso os contextos não fossem salvos nos PCB, a instrução de P2 sobrescreveria o valor em R1, e a terceira intrução de P1 salvaria X + B em R3.*

#so

