
# Etapas de um Roteamento

1. O roteador **recebe pacotes** de uma de suas interfaces de rede
2. O roteador passa os pacotes para a **camada de rede**
3. O roteador verifica o **endereço de destino** do cabeçalho
	- Se o destino estiver na **mesma rede** de onde os dados vieram, o roteador **descarta os pacotes**, que já devem ter atingido seu destino
	- Se os dados forem de uma **rede diferente**, o roteador **consulta uma tabela de roteamento** para determinar para onde encaminhar o pacote
- Após determinar qual interface receberá os dados, ele **repassa os pacotes** adiante


#redes2

