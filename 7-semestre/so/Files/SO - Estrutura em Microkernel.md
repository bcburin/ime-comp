
# Estrutura em Microkernel

- Removem-se todos os componentes não essenciais do kernel, implementando-os como programas em nível de sistema e usuário
- Microkernel oferece gerenciamento mínimo de
	- processo e memória, 
	- comunicação entre programa e cliente e
	- serviços executados no espaço de usuário
- A comunicação ocorre entre módulos de usuário, usando a passagem de mensagens

![[Pasted image 20230402130843.png]]

- **Vantagens**
	- Mais fácil de estender
	- Mais fácil de portar para novas arquiteturas
	- Mais confiável (menos código está executando no modo kernel)
	- Mais seguro
- **Desvantagens**
	- Overhead de desempenho de comunicação entre espaço de usuário e espaço de kernel

#so

