# COMP - IME 24

---

### Como clonar e atualizar o repositório?

Clonar o repositório usando

```bash
git clone https://github.com/bcburin/ime-comp.git
```


Para atualizar o repositório, basta utilizar

```bash
git pull origin main
```

Obs: se os plugins forem habilitados, essa vault já está configurada para usar o plugin Obsidian Git, que automatiza diversos fluxos do Git dentro do Obsidian. Nesse caso, basta abrir o paleta de comandos com `CTRL + P`, e usar o comando `Obsidian Git: Pull`.

### Como visualizar os arquivos?

Todos os arquivos estão no formato .md (markdown). Em tese, qualquer leitor de texto capaz de interpretar markdown (incluindo o VS Code) serviria. No entanto, sugiro fortemente o uso do [Obsidian](https://obsidian.md/). Esse editor, além de interpretar markdown usual, é capaz de processar LaTeX e permite a criação de _crosslinks_ entre os arquivos, ou seja, arquivos podem conter referências clicáveis para outros arquivos. Essa última propriedade é muito importante devido à estrutura adotada, na qual cada matéria tem uma arquivo _hub_ com *crosslinks* para todas as outras notas da matéria.

No Obsidian, é recomendado usar o *modo de leitura* para simples consulta das notas. Para alterar entre *modo de leitura* e *modo de edição*, basta usar o atalho `CTRL + E`.

### Estrutura dos arquivos

Toda matéria tem um arquivo principal, com mesmo nome da pasta, que faz o papel de _hub_: contém links para todos os outros arquivos da matéria. A pasta `Files` contém esses arquivos, mas o acesso é recomendado pelo _hub_. A pasta `Prog`, quando existir, contém os programas utilizados no curso. O .gitingnore do repositório está configurado para ignorar arquivos objeto e executáveis, então não é necessário deletá-los antes de fazer uma pull request.
