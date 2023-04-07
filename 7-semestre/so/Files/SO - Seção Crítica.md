
# Seção Crítica

Segmento de código em que o processo *altera dados compartilhados*.

Quando um processo está executando em sua seção crítica, nenhum outro processo pode executar em sua seção crítica.

## Problema da seção crítica

Uma solução para o problema da exclusão mútua deve satisfazer os seguintes requisitos

- **Exclusão mútua** - se um processo está executando a seção crítica, nenhum outro processo/thread pode estar executando essa seção crítica
- **Progresso** - se nenhum processo estiver executando em sua seção crítica e alguns processos quiserem entrar em suas seções críticas, então a escolha do processo que entrará em sua seção crítica em seguida não pode ser adiada indefinidamente
- **Espera limitada** - é preciso haver um limite no número de vezes que outros processo têm permissão para entrar em suas seções críticas após um processo ter feito uma solicitação para entrar em sua seção crítica e antes que essa solicitação seja atendida.

#so

