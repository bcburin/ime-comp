#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"
#include "Lista_Alunos.h"
// #include "Lista_Disciplinas.h"

/* OPCOES DO MENU */
typedef enum {CADASTRAR_ALUNO = 1, REMOVER_ALUNO, 
              CADASTRAR_DISCIPLINA, REMOVER_DISCIPLINA
              } Opcao;

void imprimir_borda();
void imprimir_menu();


int main() {
  List *alunos = list_load("alunos.bin", fread_aluno, destruir_aluno);
  // List *disciplinas = list_load("disciplinas.bin", fread_disciplina, destruir_disciplina);

  // Imprimir alunos
  // list_apply(alunos, imprimir_aluno);

  imprimir_menu();

  Opcao op;
  printf("\nOpcao desejada: ");
  scanf("%d", &op);

  int res;
  switch(op) {
    case CADASTRAR_ALUNO:
      res = cadastrar_aluno(alunos);
      if (res == -1) printf("\nCodigo invalido!\n");
      if (res == -2) printf("\nCPF invalido!\n");
      break;
    case REMOVER_ALUNO:
      printf("ra");
      break;
    case CADASTRAR_DISCIPLINA:
      printf("cd");
      break;
    case REMOVER_DISCIPLINA:
      printf("rd");
      break;
    default:
      printf("def");
  }

  
  // Persistir memoria
  list_save(alunos, "alunos.bin", fwrite_aluno);


  // Liberar memoria utilizada para as listas
  list_destroy(alunos);
  // list_destroy(disciplinas);
  
  return 0;
}




void imprimir_borda() {
  printf("\n-----------------------------------------------------\n");
}


void imprimir_menu() {
  imprimir_borda();
  printf("\n1 - Cadastrar aluno\n");
  printf("2 - Remover aluno\n");
  printf("3 - Cadastrar disciplina\n");
  printf("4 - Remover disciplina\n");
  imprimir_borda();
}
