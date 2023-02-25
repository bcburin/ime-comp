
# Registradores de Indexação

- **SI / ESI / RSI** -> registrados **fonte** de indexação
- **DI / EDI / RDI** -> registrador **destino** de indexação

Acessos à memória usando qualquer um desses registradores é, normalmente, chamado de *operação de string*.

A diferença entre usar um registrador de indexação e um de finalidade geral é que os de indexação passam a apontar para endereço seguinte ao último que foi acessado.

## Exemplos

```asm
mov [edi], eax  # EDI <- EDI + 4
mov rax, [rsi]  # RSI <- RSI + 8
```

Esse incremento

```asm
```

#microproc

