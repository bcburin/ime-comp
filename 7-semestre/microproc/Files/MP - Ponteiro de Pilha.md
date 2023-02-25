---
alias: Stack Pointer
---

# Ponteiro de Pilha

**SP / ESP / RSP**

- É um contador, *decrementado* após um *push* e *incrementado* após um *pop*
- Aponta para o primeiro dado disponível no topo da pilha
- Basta decrementá-lo para realizar a alocação dinâmica de variáveis, e incrementá-lo para liberar as variáveis alocadas dinamicamente
- A escolha de qual registrador (16 bits, 32 bits ou 64 bits) depende do compilador e do sistema operacional

*Obs: a pilha cresce de cima pra baixo*

#microproc

