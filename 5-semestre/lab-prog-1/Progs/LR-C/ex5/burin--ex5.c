#include <stdio.h>
#include <stdlib.h>

/* INTERFACE: 
 * Calcula o numero da sequencia de fibonacci correspondente a um dado indice 
 * Aos termos 1,1,2,3,5,8... correspondem os indices 0,1,2,3,4,5,...
 */
int fibonacci (int n);


/* IMPLEMENTACAO:
 * Implementa recursivamente o calculo do numero da sequencia de fibonacci
 * Algoritmo otimizado por meio da utilizacao de um cache
 * Complexidade reduzida de O(2^n) a O(n)
 */
int _fibonacci (int n, int *cache);


/* Imprime erro na tela caso nao seja passado o numero correto de argumentos ao progrma 
 * Recebe como argumento o nome do programa
 */
int print_error(char *name);


/* Função MAIN */
int main(int argc, char **argv) {
  // Verificar existencia de argumento
  if (argc != 2) 
    return print_error(argv[0]);

  // Utilizar input do usuario
  int n = atoi(argv[1]);

  // Calcular n-esimo termo da seq de fibonacci e retorna-lo
  printf("\nfibonacci(%d): %d\n", n, fibonacci(n));
}

int fibonacci (int n) {
  // Alocar espaco para o cache e inicializar todos os elementos com 0
  int *cache = (int*) calloc(n+1, sizeof(int));

  // Inicializar valores iniciais
  cache[0] = 0;
  cache[1] = 1;

  // Calcular o valor desejado
  int fib = _fibonacci(n, cache);

  // Desalocar espaco usado na memoria
  free(cache);

  // Retornar valor calculado
  return fib;
}

int _fibonacci (int n, int *cache) {
  // Se fib(n) ja foi calculado, retornar valor armazenado no cache
  if (cache[n] != 0 || n == 0) return cache[n];

  // Caso contrario, calcular valor, armazena-lo e retorna-lo
  return cache[n] = _fibonacci(n-1, cache) + _fibonacci(n-2, cache);
}

int print_error(char *name) {
  // Retirar o diretorio do nome do executavel
  for(char *trav = name; *trav != 0; ++trav)
    if (*trav == '\\' || *trav == '/') name = trav+1;

  // Imprimir erro com base no nome do executavel
  printf("\n----------------------------------------------------------------------------------\n");
  printf("Insira o indice do termo desejado da sequencia de fibonacci na linha de comando\n");
  printf("Exemplo: %s 25\n", name);
  printf("----------------------------------------------------------------------------------\n");
  return 1;
}