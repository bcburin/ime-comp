---
alias: SJF
---

# Shortest Job First

- Associa a cada processo a duração de seu próximo burst de CPU
- Tarefas com menor tempo de burst são escalonadas antes
- **SJF** é ótimo - provê o menor tempo de espera médio para um determinado conjunto de processos
- Dois tipos
	- **não-preemptivo:** uma vez dado o controle a um processo, ele não pode ser interrompido até o burst termine
	- **preemptivo:** se um novo processo chegar com um tamanho de burst menor que o tempo restante do processo executando, o processo em execução é retirado. (**SRTF**)

## Estimando a duração do próximo burst para um processo

Para o escalonador de longo prazo, a estimativa é dada pelo usuário. Para o escalonador de curto prazo, calcula-se estimativa a partir dos bursts de CPU anteriores

$$
\tau_{n+1} = \alpha t_n + (1 -\alpha) \tau_n
$$

- $t_n$ -> duração real do n-ésimo burst de CPU
- $\tau_{n+1}$ -> duração prevista para o próximo burst de CPU
- $\tau_n$ -> última previsão de duração de burst de CPU
- $\alpha$ -> constante $0 \leq \alpha \leq 1$


#so

