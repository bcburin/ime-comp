#include <stdio.h>
#include <stdlib.h>


/* Calcula media dos valores de um vetor de numeros reais*/
double mean(const double *arr, int size);

/* Imprime erro na tela caso nao seja passado o numero correto de argumentos ao progrma 
 * Recebe como argumento o nome do programa
 */
int print_error(char *name);


/* MAIN */
int main(int argc, char **argv) {
  // Verificar existencia de argumentos
  if (argc == 1)
    return print_error(argv[0]);

  // Alocar espaco na memoria
  double *array = (double*) malloc( (argc-1)*sizeof(double) );

  // Coletar argumentos
  for (int i = 1; i != argc; ++i) {
    array[i-1] = atof( argv[i] );
    printf("%s: %d\n", argv[i], array[i-1]);
  }

  // Liberar espaco na memoria
  free(array);

  // Calcular media dos valores e imprimi-lo
  printf("\nMedia dos valores: %.2lf\n", mean(array, argc-1));
}



double mean(const double *arr, int size){
  double mean = 0;

  for(int i = 0; i != size; ++i){
    mean += arr[i];
  }

  mean /= size;

  return mean;
}



int print_error(char *name) {
  // Retirar o diretorio do nome do executavel
  for(char *trav = name; *trav != 0; ++trav)
    if (*trav == '\\' || *trav == '/') name = trav+1;

  // Imprimir erro com base no nome do executavel
  printf("\n-------------------------------------------------------------\n");
  printf("Insira os numeros reais cuja media quer ser calculada\n");
  printf("Exemplo: %s 25 15 20 30 25\n", name);
  printf("-------------------------------------------------------------\n");
  return 1;
}