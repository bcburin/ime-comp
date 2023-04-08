
# Problema do Buffer Limitado

O problema do buffer limitado ocorre quando vários processos ou threads compartilham um buffer com tamanho limitado para trocar informações ou dados entre si. O buffer pode ser uma área de memória ou uma fila, e o número de elementos que ele pode conter é fixo.

## Estrutura da solução

- Buffer limitado de tamanho `BUFFER_SIZE` 
- [[SO - Semáforo Mutex|Semáforo mutex]] inicializado com 1
- [[SO - Semáforo de Contagem|Semáforo]] **full** inicializado com 0
- [[SO - Semáforo de Contagem|Semáforo]] **empty** inicializado com `BUFFER_SIZE`

**Estrutura do produtor**

```c

```


#so

