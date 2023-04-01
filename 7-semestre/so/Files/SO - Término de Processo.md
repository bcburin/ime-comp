
# Término de Processo

## Unix

- `exit()` processo filho executa sua instrução final e pede ao sistema operacional que o termine
- `wait()` no processo pai para esperar término do processo filho e receber dados enviados pelo filho em `exit()`
- Os recursos do processo filho são desalocados pelo sistema operacional
- `abort()` usado pelo processo pai para terminar a execução dos processos filhos
	- O filho excedeu recursos alocados
	- Tarefa atribuída ao filho não é mais necessária
	- Pai está terminando

### Tipos de término

- **Término normal**
	- retornando de `main`
	- chamada de sistema `exit()`
- **Término anormal**
	- término por *sinal*
	- chamada de sistema `abort()`

#so

