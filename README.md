# COMP - IME 24

---

### Como clonar e atualizar o repositório?

*Obs: se já estiver familiarozado com Git, ignore esta seção*

Primeiramente, é necessário instalar [Git](https://git-scm.com/downloads) no seu computador. Em seguida, em seguida, é possível clonar o repositório 

- Utilizando o [GitHub Desktop](https://desktop.github.com/), que fornece uma GUI intuitiva;
- Direto do terminal, usando o comando

	`git clone https://github.com/bcburin/ime-comp.git`

	*Obs: para usuários de Windows, é necessário usar o terminal Git Bash.*

Para atualizar o repositório, pode-se utilizar a interface do GitHub Desktop ou o terminal, com o comando

	git pull origin main

### Como visualizar os arquivos?

Todos os arquivos estão no fomato .md (markdown). Em tese, qualquer leitor de texto capaz de interpretar markdown (incluindo o VS Code) serviria. No entanto, sugiro fortemente o uso do [Obsidian](https://obsidian.md/). Esse editor, além de interpretar markdown usual, é capaz de processar LaTeX e permite a criação de *crosslinks* entre os arquivos, ou seja, arquivos podem conter referências clicáveis para outros arquivos. Essa última propriedade é muito importante devido à estrutura adotada, na qual alguns arquivos servem como *hub* para vários arquivos.

### Estrutura dos arquivos

Toda matéria tem um arquivo principal, com mesmo nome da pasta, que faz o papel de *hub*: contém links para todos os outros arquivos da matéria. A pasta `Files` contém esses arquivos, mas o acesso é recomendado pelo *hub*. A pasta `Prog`, quando existir, contém os programas utilizados no curso. O .gitingnore do repositório está configurado para ignorar arquivos objeto e executáveis, então não é necessário deletá-los antes de fazer uma pull request.

### Como contribuir com o repositório?

Na situação improvável de você querer contribuir, basta fazer a modificações pertinentes e fazer uma pull request. Peço só para manter o padrão de nomes e de estrutura. Faça as modificações em um *branch* com o seu nome e, opcionalmente, com uma breve descrição do que é modificado nele. 

*e.g.* burin--atualizar-readme

---