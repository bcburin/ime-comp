
# Escalonador de Longo Prazo

- O escalonador de longo prazo é responsável por decidir quais processos devem ser *carregados na memória RAM a partir do disco*, com base na disponibilidade de recursos e na prioridade do processo. 
- Esse tipo de escalonador é executado com *menos frequência* (segundos ou minutos), geralmente quando um novo processo é criado ou quando um processo em execução é interrompido por algum motivo.
- Responsável pelo **grau de multiprogramação**

## Grau Multiprogramação

O escalonador de longo prazo é responsável por selecionar quais processos serão carregados na memória RAM a partir do disco, com base em políticas de alocação de recursos, como a prioridade do processo e a quantidade de memória RAM disponível. Se o escalonador de longo prazo decidir carregar muitos processos na memória RAM, o grau de multiprogramação será alto, o que significa que vários processos serão executados simultaneamente, compartilhando os recursos do sistema. Por outro lado, se o escalonador de longo prazo decidir carregar poucos processos na memória RAM, o grau de multiprogramação será baixo, o que significa que apenas alguns processos serão executados simultaneamente, mas com mais recursos disponíveis para cada um deles.

#so

