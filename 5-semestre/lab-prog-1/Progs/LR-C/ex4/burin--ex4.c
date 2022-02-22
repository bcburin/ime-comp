#include <stdio.h>
#include <stdlib.h>

int main() {
  // Abrir arquivo
  FILE *fp = fopen("file.txt", "r");

  // Verificar sucesso da abertura do arquivo
  if (!fp) return 1;

  // Armazenam as medias dos homens e das mulheres
  double mean_m = 0;
  double mean_f = 0;

  // Armazenam as quantidades de homens e mulheres
  int size_m = 0;
  int size_f = 0;

  // Armazenam sexo e nota de determinada linha
  char gender;
  int grade;

  // Le arquivo linha a linha
  while ( fscanf(fp, "%c %d ", &gender, &grade) != EOF ) {
    switch (gender) {
    case 'm':
    case 'M':
      mean_m += (double) grade;
      size_m++;
      break;
    case 'f':
    case 'F':
      mean_f += (double) grade;
      size_f++;
      break;
    }
  }

  // Calcular medias
  mean_m /= size_m;
  mean_f /= size_f;

  int men_bigger = mean_m > mean_f;
  
  printf("\n%c %.2f\n", men_bigger ? 'M' : 'F', men_bigger ? mean_m : mean_f);
}