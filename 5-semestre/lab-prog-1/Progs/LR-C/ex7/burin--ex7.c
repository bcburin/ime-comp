#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MIN 0
#define MAX 99


/* Implementar algoritmo  */
void sort(int *arr, int size);

void switch_ints(int *a, int *b);


/* Imprimir array */
void print_array(int *arr, int size, char *nome);


/* Generar inteiro aleatorio. Argumentos:
 * - min: menor valor possivel
 * - max: maior valor possivel
 */
int generate_random(int min, int max);


/* Imprime erro na tela caso nao seja passado o numero correto de argumentos ao progrma 
 * Recebe como argumento o nome do programa
 */
int print_error(char *name);


/* MAIN */
int main(int argc, char *argv[]) {
  // Utilizar tempo atual como seed para gerador aleatorio
  srand(time(NULL));

  // Verificar existencia de argumentos para o comando
  if (argc == 1) 
    return print_error(argv[0]);

  // Valores padrao de maximo e minimo
  int min = MIN;
  int max = MAX;

  // Declarar tamanho do veror
  int size = 0;

  // Checar existencia de flags
  for (int i = 1; i != argc; ++i) {
    // Flag -m (minimo)
    if (strcmp(argv[i], "-m") == 0) {
      min = atoi(argv[++i]); 
      continue;
    }
    // Flag -M (maximo)
    if (strcmp(argv[i], "-M") == 0) {
      max = atoi(argv[++i]); 
      continue;
    }
    // Coletar tamanho do vetor a ser ordenado
    size = atoi(argv[i]);
  }

  // Validar entradas
  if (size == 0) {
    printf("O numero de elementos deve ser fornecido!");
    return 2;
  }
  if (size < 0) {
    printf("O numero de elementos deve ser um inteiro positivo");
    return 3;
  }
  if (min > max) {
    printf("O valor minimo deve ser menor que o maximo!");
    return 4;
  }

  // Alocar espaco na memoria
  int *array = (int*) malloc( size*sizeof(int) );
  
  // Gerar vetor com valores aleatorios
  for (int i = 0; i != size; ++i) {
    array[i] = generate_random(min, max);
  }


  // Imprimir array inicial
  print_array(array, size, "INITIAL");

  // Ordenar array
  sort(array, size);

  // Imprimir array ordenada
  print_array(array, size, "SORTED");

  // Liberar espaco na memoria
  free(array);

  return 0;
}


void sort(int *arr, int size) {
  for (int i = size-1; i >= 0; --i) {
    for (int j = i; arr[j] > arr[j+1] && j != size-1; j++) {
      switch_ints(&arr[j], &arr[j+1]);
    }
  }
}

void switch_ints(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


int generate_random(int min, int max) {
  return min + rand() % (max - min + 1);
}


void print_array(int *arr, int size, char *nome) {
  printf("\n%s: ", nome);
  for (int i = 0; i != size; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}


int print_error(char *name) {
  // Retirar o diretorio do nome do executavel
  for(char *trav = name; *trav != 0; ++trav)
    if (*trav == '\\' || *trav == '/') name = trav+1;

  // Imprimir erro com base no nome do executavel
  printf("\n----------------------------------------------------------------------------------\n");
  printf("Insira o numero de elementos a serem criados e ordenados na linha de comando\n\n");
  printf("Flags opcionais:\n");
  printf("-m => determina o menor valor a ser assumido pelos numeros aleatorios \n");
  printf("-M => determina o maior valor a ser assumido pelos numeros aleatorios \n\n");
  printf("Obs: os valores padrao de minimo e maximo sao 0 e 99, respectivamente\n\n");
  printf("Exemplo: %s 5\n", name);
  printf("Exemplo: %s 5 -m 1 -M 10\n", name);
  printf("Exemplo: %s -M 12 -m 2 20\n", name);
  printf("Exemplo: %s -m 1 20 -M 10\n", name);
  printf("----------------------------------------------------------------------------------\n");
  return 1;
}