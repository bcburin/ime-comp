
# Algoritmo com Flags de Pronto

Em um processo com `n` threads `Ti`, usam-se `n` flags compartilhadas para registrar quando cada processo está pronto para entrar em sua seção crítica

- `boolean flag[n]`
- inicialmente `flag[i] = false`
- `flag[i] == true` -> `Ti` está pronto para entrar em sua seção crítica

Satisfaz [[SO - Seção Crítica#Problema da seção crítica|exclusão mútua]], mas **não** satisfaz [[SO - Seção Crítica#Problema da seção crítica|progresso]].

## Implementação

*Obs: essa implementação assume somente duas threads. Para mais de duas threads, seria necessário fazer um OR de todos os `j != i` no laço while.*

```c
do {
	flag[i] = true;
	while (flag[j])
		;
	// seção crítica
	flag[i] = false;
	// restante do programa
} while (1);
```

## Problema

Não satisfaz a condição de progresso.

Se, a qualquer momento, duas flags assumir o valor `true` será atingido um dead lock no qual nenhuma das threads vai executar e ambas vão esperar a outra terminar. Se isso ocorrer, o processo todo será bloqueado.

![[Pasted image 20230407201406.png]]

#so

