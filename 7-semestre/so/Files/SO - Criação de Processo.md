
# Criação de Processo

Um processo pai cria processos filhos, que, por sua vez, criam outros processos, formando uma [[SO - Árvore de Processos|árvore de processos]].

## Unix

- `fork` cria um novo processo que é uma duplicata do pai
- `exec` chamada de sistema  usada após um `fork` para substituir o espaço de memória do processo por um novo programa
- Os processos pai e filho executam concorrentemente, mas o pai pode usar a chamada `wait` para esperar o filho terminar

![[Pasted image 20230401161826.png]]

#so

