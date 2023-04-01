
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
int execve(const char *filename, char *const argv[], char *const envp[]);

int execvp(const char *file, char *const argv[]);
```

- A função `execl()` permite que um programa seja executado com um número variável de argumentos. Os argumentos são especificados como uma lista separada por vírgulas, com o último argumento sendo NULL.
- A função `execle()` é semelhante a `execl()`, mas também permite que o ambiente de execução seja especificado como um vetor de strings.
- A função `execlp()` procura o arquivo executável especificado em uma lista de diretórios pré-definidos do sistema (PATH). Se o nome do arquivo executável contiver um caminho (ou seja, se houver um caractere `/` no nome do arquivo), a pesquisa será ignorada e o arquivo será executado diretamente.
- A função `execv()` é semelhante a `execl()`, mas os argumentos são especificados como um vetor de strings, com o último elemento sendo NULL.
- A função `execve()` substitui o processo atual pelo programa especificado pelo caminho `filename`. Os argumentos para o programa são fornecidos como um vetor de strings `argv`, com o último elemento sendo NULL. O ambiente de execução para o programa é fornecido como um vetor de strings `envp`. Cada elemento do vetor `envp` deve ser uma string da forma "VARIAVEL=VALOR", representando uma variável de ambiente e seu valor. O último elemento do vetor `envp` também deve ser NULL.
- A função `execvp()` é semelhante a `execv()`, mas procura o arquivo executável especificado em uma lista de diretórios pré-definidos do sistema. Se o nome do arquivo executável contiver um caminho, a pesquisa será ignorada e o arquivo será executado diretamente.

![[Pasted image 20230401170951.png]]

#so

