---
alias: CX, ECX, RCX
---

# Registrador Base

**CX / ECX / RCX**

- Decrementado durante operações com loops e strings (envolve SI e DI)
- Tipicamente é usado para controlar o número de repetições de uma instrução de string antecedida pelo prefixo `rep`

```asm
sal eax, cl                # shift left EAX, CL vezes
rep mov byte ptr [di], al  # copia CX vezes 1 byte 
```

#microproc

