
# Algoritmo Genérico de Roteamento

## Algoritmo Sem Sub-Redes

```
Extrair o endereço IP de destino (IPd) do datagrama

Calcular o endereço PI da rede de destino (IPn)

SE IPn é igual a uma rede diretamente conectada
	ENTÂO enviar datagrama diretamente ao destino

SENÃO SE IPn aparace na tabela
	ENTÃO rotear datagrama conforme especificado na
	tabela

SENÃO SE um roteador default foi especificado
	ENTÃO envira datagrama para roteador default

SENÃO erro no roteamento
```

## Algoritmo Com Sub-Redes

```
Extrair o endereço IP de destino (IPd) do datagrama

Calcular o endereço PI da rede de destino (IPn)

SE IPn é igual a uma rede diretamente conectada
	ENTÂO enviar datagrama diretamente ao destino

SENÃO SE IPn aparace na tabela
	ENTÃO PARA CADA entrada na tabela de roteamento
		FAÇA calcule N fazendo AND bit a bit entre ID  
		e máscara de sub-rede da entrada
		SE N é igual ao endereço da rede da entrada
			ENTÃO rotear datagrama para próximo passo 
			especificado
		FIM

SE NÂO forem encontrada correspondências
	ENTÃO declarar erro de roteamento (ICMP)
```


#redes2

