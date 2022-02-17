#include <stdio.h>
#include <stdlib.h>

/* Implementar algoritmo bubble sort */
void bubble_sort(int *arr, int size);
void switch_ints(int *a, int *b);

/* Imprimir array */
void print_array(int *arr, int size, char *nome);

int main(int argc, char *argv[]) {
  // Verificar existencia de argumentos
  if (argc == 1) {
    printf("\n-------------------------------------------------------------\n");
    printf("Insira os inteiros a serem ordenados na linha de comando\n");
    printf("Exemplo: burin--bubble-sort 5 4 6 8 7 1\n");
    printf("-------------------------------------------------------------\n");
    return 1;
  }

  // Alocar espaco na memoria
  int *array = (int*) malloc( (argc-1)*sizeof(int) );

  // Coletar argumentos
  for (int i = 1; i != argc; ++i) {
    array[i-1] = atoi( argv[i] );
  }

  // Imprimir array inicial
  print_array(array, argc-1, "INITIAL");

  // Ordenar array
  bubble_sort(array, argc-1);

  // Imprimir array ordenada
  print_array(array, argc-1, "SORTED");

  // Liberar espaco na memoria
  free(array);

  return 0;
}

void switch_ints(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void bubble_sort(int *arr, int size) {
  for (int i = size-1; i >= 0; --i) {
    for (int j = i; arr[j] > arr[j+1] && j != size-1; j++) {
      switch_ints(&arr[j], &arr[j+1]);
    }
  }
}

void print_array(int *arr, int size, char *nome) {
  printf("\n%s: ", nome);
  for (int i = 0; i != size; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
