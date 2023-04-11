
# Link State

Funcionamento básico do roteamento por estado de enlace

- Descobrir os vizinhos e aprender seus endereços de rede
- Medir o *retardo* ou o *custo* para cada um dos vizinhos
- Criar pacote que diga tudo o que acaba de aprender (LSA)
- enviar esse pacote para todos os outros roteadores
- calcular o caminho mais curto para cada um dos outros roteadores

**Descobrindo os vizinhos**

Ao inicializar, a a primeira tarefa do roteador é descobrir seus vizinhos. Isso é feito por meio de um pacote HELLO especial para cada interface. O roteador da outra extremidade responde quem é.

**Medindo os custos das linhas**

Todo roteador deve conhecer o retardo para cada um de seus vizinhos. Pacotes ECHO são utilizados para que o retardo ou uma métrica seja medida para cada roteador vizinho. A carga das linhas deve ou não ser considerada durante a mediação.

**Criando pacotes por estado de enlace**

- Um outro pacote é criado para divulgar as métricas para os roteadores vizinhos. O pacote contém a identidade do transmissor, um número de sequência, a idade e uma lista dos retardos para os vizinhos do transmissor.
- A criação destes pacotes pode ser realizada em intervalos regulares ou na ocorrência de eventos significativos.

![[Pasted image 20230410232010.png]]

- Os pacotes de enlace podem ser distribuídos de forma confiável. Essa distribuição pode ser realizada por flooding e é controlada pelo número de sequência e pela entidade (TTL), de forma a evitar redundâncias e informações desatualizadas.
- De posse das informações dos roteadores, o caminho mais curto é  calculado para os destinos possíveis.

O algoritmo OSPF utiliza um algoritmo de roteamento por estado de enlace.

## Distance Vector x Link State

O roteamento de vetores de distância (distance vectors) determina a direção (vetor) e a distância de todos os links na internetwork.

O roteamento por estado de enlace (link state) recria a topologia exata da internetwork inteira, ou pelo menos da parte onde o roteador está situado.

#redes2

