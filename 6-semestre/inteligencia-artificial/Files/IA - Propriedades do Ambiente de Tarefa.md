
# Propriedades do Ambiente de Tarefa

---

- **Completamente observável** (versus **parcialmente observável**)
	- Os sensores do agente dão acesso ao estado completo do ambiente em cada estado
	- Todos os aspectos relevantes do ambiente são acessíveis
- **Determinístico** (versus **estocástico**)
	- O próximo estado do ambiente é completamente determinado pelo estado atual e pela ação executada pelo agente
	- Se o ambiente é determinístico, exceto pelas ações de outros agente, dizemos que o ambiente é estratégico
- **Episódico** (versus **sequencial**)
	- A experiência do agente pode ser dividida em episódios (percepção e execução de uma única ação)
	- A escolha da ação em cada episódio só depende do próprio episódio
- **Estático** (versus **dinâmico**)
	- O ambiente não muda enquanto o agente pensa
	- A situação inicial do ambiente se mantém até a tomada de decisão
- **Discreto** (versus **contínuo**)
	- Um número limitado e claramente definido de percepções e ações
- **Agente único** (versus **multi-agente**)
	- Um único agente operando sozinho no ambiente
	- No caso multi-agente, podemos ter
		- Multi-agente cooperativo
		- Multi-agente competitivo

---
|  |  |
| --- | --- |
| completamente observável | parcialmente observável |
| determinístico | estocástico |
| episódico | sequencial |
| estático | dinâmico |
| discreto | contínuo |
| agente único | multi-agente$^*$ |

1. * cooperativos e competitivos

---

Tags: #inteligencia-artificial

