
# Criação de Processo

## Unix

- `fork` cria um novo processo que é uma duplicata do pai
- `exec` chamada de sistema  usada após um `fork` para substituir o espaço de memória do processo por um novo programa
- Os processos pai e filho executam concorrentemente, mas o pai pode usar a chamada `wait` para esperar o filho terminar

![[Pasted image 20230401161826.png]]

### Fork

- Quando um processo é “forked” (bifurcado), um novo processo é criado
- O segmento de dados e códigos do novo processo é o mesmo do original
- Um novo [[SO - Bloco de Controle do Processo|PCB]] é criado para o novo processo

#so

