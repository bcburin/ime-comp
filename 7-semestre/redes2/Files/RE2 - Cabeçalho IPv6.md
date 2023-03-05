
# Cabeçalho IPv6

## Comparação

**Mais simples**
- 40 bytes (tamanho **fixo**)
- Apenas duas vezes maior que o da versão anterior

**Mais flexível**
- Extensão por meio de **cabeçalhos adicionais**, que não precisam ser processados por todos os roteadores intermediários.

**Mais eficiente**
- Minimiza o **overhead nos cabeçalhos**
- Reduz o **custo de processamento** dos pacotes

## Tamanho

Essas alterações permitiram que, mesmo com um espaço para endereçamento de 128 bits, quatro vezes maior do que os 32 bits do IPv4, o tamanho total do cabeçalho IPv6 seja apenas duas vezes maior que o da versão anterior.

![[Pasted image 20230305003128.png]]

## Campos



- **Versão (4 bits) -** Identifica a versão do protocolo IP utilizado
- **Classe de tráfego (8 bits) -** Identifica e diferencia pacotes por classes de serviço ou prioridade. Continua fornecendo as mesmas funcionalidades e definições do campo "Tipo de serviço" do IPv4
- **Identificador de Fluxo (20 bits) -** Identifica e diferencia pacotes do mesmo fluxo na camada de rede. Esse campo permite ao roteador identificar o tipo de fluxo de cada pacote, sem necessidade de verificar sua aplicação.
- **Tamanho de dados (16 bits) -** Indica o tamanho, em bytes, apenas dos dados enviados junto ao cabeçalho IPv6. Os cabeçalhos de extensão também são incluídos no cálculo do tamanho.
- **Próximo cabeçalho (8 bits) -** Indica o cabeçalho que se segue ao cabeçalho IPv6, indicando o valor do cabeçalho de extensão.
- **Limite de encaminhamento (8 bits) -** Indica o número máximo de roteadores pelos quais o pacote IPv6 pode passar antes de ser descartado, sendo decrementado a cada salto.
- **Endereço de origem**
- **Endereço de destino**

#redes2

