
---
alias: DX, EDX, RDX
---

# Endereçador de I/O e Registrador de Dados

**DX / EDX / RDX**

- Usado junto com o [[MP - Acumulador Primário|acumulador]] em algumas operações aritméticas
- Em algumas operações de I/O, fornece o endereço, coisa que nenhum outro registrador pode fazer

```asm
mov dx, 300h    # endereço do I/O
out dx, eax     # envia 32 bits de EAX para I/O
```

#microproc

