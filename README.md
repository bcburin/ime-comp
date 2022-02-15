# COMP - IME 24

---

### Como acessar os arquivos?

Há duas possibilidades:

- Baixar o .zip do repositório e extrair (não recomendado);
- Clonar o repositório no ambiente local.

O repositório é constantemente atualizado, e essas mudanças não são automaticamente aplicadas nos arquivos locais. Uma opção seria ficar baixando e extraindo os arquivos, o que não é muito conveniente, dada a quantidade de trabalho manual necessário. A outra possibilidade é clonar o repositório e deixar Git e GitHub fazerem seu trabalho.

### Como clonar o repositório?

*Obs: se já estiver familiarozado com Git, ignore esta seção*

Primeiramente, é necessário instalaro [Git](https://git-scm.com/downloads) no seu computador. Em seguida, em seguida, é possível clonar o repositório direto do prompt de comando, usando
	
	`git clone https://github.com/bcburin/ime-comp.git`

*Obs: para usuários de Windows, é necessário baixar e usar o terminal Git Bash*

### Como visualizar os arquivos?

Todos os arquivos estão no fomato .md (markdown). Em tese, qualquer leitor de texto capaz de interpretar markdown (incluindo o VS Code) serviria. No entanto, sugiro fortemente o uso do [Obsidian](https://obsidian.md/). Esse editor, além de interpretar markdown usual, é capaz de processar LaTeX e permite a criação de *crosslinks* entre os arquivos , ou seja, arquivos podem conter referências clicáveis para outros arquivos.

### Estrutura dos arquivos

Toda matéria tem um arquivo principal, com mesmo nome da pasta, que faz o papel de *hub*: contém links para todos os outros arquivos da matéria. A pasta `Files` contém esses arquivos, mas o acesso é recomendado pelo *hub*. A pasta `Prog`, quando existir, contém os programas utilizados no curso. O .gitingnore do repositório está configurado para ignorar arquivos objeto e executáveis, então não é necessário deletá-los antes de fazer uma pull request.

### Como contribuir com o repositório?

Na situação improvável de você querer contribuir, basta fazer a modificações pertinentes e fazer uma pull request.

---