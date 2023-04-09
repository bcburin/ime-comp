
# Estilo Arquitetural Baseado em Repositórios

- Os componentes interagem mediante grandes coleções de dados compartilhados persistentes
- Em muitos casos, o acesso ao repositório é mediado por um componente que fornece uma interface chamada-retorno para a recuperação e gestão de dados

O estilo arquitetural baseado em repositório é um padrão de design que *separa a lógica de negócios* da *lógica de armazenamento* de dados em um sistema de software. Ele é frequentemente usado em sistemas que envolvem a manipulação de dados, como aplicativos de gerenciamento de conteúdo, sistemas de gerenciamento de banco de dados e aplicativos empresariais.

Nesse estilo arquitetural, a lógica de negócios não depende diretamente do armazenamento de dados. Em vez disso, é definida uma *camada intermediária* de acesso a dados, conhecida como repositório. O repositório atua como uma camada de abstração entre a lógica de negócios e a lógica de armazenamento de dados, permitindo que as classes de negócios interajam com o repositório para recuperar e armazenar dados.

O repositório é geralmente implementado como uma *interface que define os métodos necessários para acessar os dados* armazenados. Cada entidade ou tabela de banco de dados tem seu próprio repositório, que é responsável por recuperar e persistir os dados associados a essa entidade ou tabela.

#aps2

