
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

Esse incremento possibilita que uma única instrução de cópia preencha toda uma região de memória.

```asm
mov ecx, 1000
mov eax, 0
rep mov [edi], eax
```

A instrução acima zera um bloco de 4000 bytes apontado por EDI, além de fazer EDI <- EDI + 4000.

Esses registradores também são úteis para copiar o conteúdo de um bloco de memória de uma região para outra. Isso pode ser feito usando os comando `movsb` (8 bits), `movsw` (16 bits), `movsd` (32 bits) e `movsq` (64 bits) em conjunção com `rep`. Código abaixo para um compilador 64 bits.

```asm
int *fonte, *destino
asm {
	mov rcx, 1024
	mov rsi, fonte
	mov rdi, destino
	rep movsq
}
```

#microproc

