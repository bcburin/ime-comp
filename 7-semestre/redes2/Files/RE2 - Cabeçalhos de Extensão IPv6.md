
# Cabeçalhos de Extensão IPv6

## Descrição

- Opções adicionais (além das presentes no [[RE2 - Cabeçalho IPv6|cabeçalho IPv6]]) são tratadas por meio de cabeçalhos de extensão
- Localizam-se entre o cabeçalho base e o cabeçalho da camada de transporte
- Não há quantidade nem tamanho fixo para esses cabeçalhos

![[Pasted image 20230305005353.png]]

## Objetivo

Sua utilização visa a aumentar a velocidade de processamento nos roteadores, já que o único cabeçalho de extensão processado por cada roteador é o **Hop-by-Hop**. Os demais são tratados *apenas* pelo host de destino. 

Esse esquema também possibilita a criação de novos cabeçalhos de extensão.

## Cabeçalhos de Extensão

A especificação do IPv6 define **seis** cabeçalhos de extensão

- **Hop-by-Hop Options**
- **Destination Options**
- **Routing**
- **Fragmentation**
- **Authentication Header**
- **Encapsulating Security Payload**


#redes2

