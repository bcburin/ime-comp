
# Deadlock

Um **deadlock** é um problema que ocorre quando dois ou mais threads/processos aguardam indefinidamente por um evento que só poderá ser causado por um dos processos que está aguardando.

## Exemplo

Considere dois semáforos `S` e `Q` inicializados com o valor 1.

![[Pasted image 20230408172737.png]]

Suponha que as duas threads comecem a execução simultaneamente. `P0` adquire `S`, enquanto `P1` adquire `Q`. Em seguida, `P0` tenta adquirir `Q`, mas não pode, pois `P1` já o adquiriu. Da mesma forma, `P1` tenta adquirir `S`, mas não pode, pois `P0` já o adquiriu. Nesse ponto, ambas as threads estão esperando a liberação do recurso que a outra está mantendo.

Como resultado, o sistema fica em um estado de impasse ou deadlock, onde nenhuma das threads pode progredir. Ambas as threads ficam presas em um loop infinito, aguardando a liberação de recursos que nunca serão liberados.

#so

