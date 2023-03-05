
# Path MTU Discovery

1. O nó de origem assume que o MTU máximo do caminho é igual ao MTU do primeiro salto
2. Pacotes maiores do que o suportado por algum roteador ao longo do caminho são descartados, e uma [[RE2 - Classes de Mensagens ICMPv6|mensagem IPv6]] *Package Too Big* é retornada à origem
3. Após o recebimento dessa mensagem, o nó de origem reduz o tamanho dos pacotes de acordo com o MTU indicado
4. O procedimento termina quando o tamanho do pacote for menor ou igual ao menor MTU do caminho
5. Essas iterações podem ocorrer diversas vezes até se encontrar o menor MTU
6. Pacotes enviados a um grupo multicast utilizam tamanho menor ao igual ao MTU do conjunto de destinos

#redes2

