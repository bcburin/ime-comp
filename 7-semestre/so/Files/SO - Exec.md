
# Exec

- Quando um processo chama `exec`, ele é substituído pelo novo programa
- O novo programa começa a ser executado a partir da sua função `main`

![[Pasted image 20230401162331.png]]

## Variações

```c
int execl(const char *path, const char *arg, ... /* (char *) NULL */);
int execle(const char *path, const char *arg, ..., char * const envp[]);
int execlp(const char *file, const char *arg, ... /* (char *) NULL */);
int execv(const char *path, char *const argv[]);
int execvp(const char *file, char *const argv[]);

```

- A função `execl()` permite que um programa seja executado com um número variável de argumentos. Os argumentos são especificados como uma lista separada por vírgulas, com o último argumento sendo NULL.
- A função `execle()` é semelhante a `execl()`, mas também permite que o ambiente de execução seja especificado como um vetor de strings.
- A função `execlp()` procura o arquivo executável especificado em uma lista de diretórios pré-definidos do sistema. Se o nome do arquivo executável contiver um caminho, a pesquisa será ignorada e o arquivo será executado diretamente.
- A função `execv()` é semelhante a `execl()`, mas os argumentos são especificados como um vetor de strings, com o último elemento sendo NULL.
- A função `execvp()` é semelhante a `execv()`, mas procura o arquivo executável especificado em uma lista de diretórios pré-definidos do sistema. Se o nome do arquivo executável contiver um caminho, a pesquisa será ignorada e o arquivo será executado diretamente.

#so

