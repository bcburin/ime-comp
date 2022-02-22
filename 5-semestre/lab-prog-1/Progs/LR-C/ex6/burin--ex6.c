#include <stdio.h>
#include <stdlib.h>

/*   INTERFACE: 
 * Calcula o numero da sequencia de fibonacci correspondente a um dado indice 
 * Aos termos 1,1,2,3,5,8... correspondem os indices 0,1,2,3,4,5,...
 *
 *   IMPLEMENTACAO:
 * Implementa iterativamente o calculo do numero da sequencia de fibonacci
 * Complexidade de O(n)
 */
int fibonacci (int n);


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
  int f1 = 1;
  int f2 = 1;
  int fn;

  for (int i = 3; i <= n; ++i) {
    fn = f1 + f2;
    f1 = f2;
    f2 = fn;
  }

  return fn;
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