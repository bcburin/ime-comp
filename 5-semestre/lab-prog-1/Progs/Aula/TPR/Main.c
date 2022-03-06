#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"

typedef struct {
  char* codigo;
  char* cpf;
  char* nome;
} Aluno;

typedef struct {
  char* codigo;
  char* nome;
  char* professor;
  int* creditos;
} Disciplina;

typedef enum {CADASTRAR_ALUNO = 1, REMOVER_ALUNO, 
              CADASTRAR_DISCIPLINA, REMOVER_DISCIPLINA
              } Opcao;

void imprimir_borda();
void imprimir_menu();

int cadastrar_aluno(List *alunos);

/* FUNCOES DESTRUTORAS */
void destruir_aluno(void *aluno);
void destruir_disciplina(void *disciplina);

int main() {
  List *alunos = list_create(destruir_aluno);
  List *discps = list_create(destruir_disciplina);

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


  // Liberar memoria utilizada para as listas
  list_destroy(alunos);
  list_destroy(discps);
  
  return 0;
}


int cadastrar_aluno(List *alunos) {
  Aluno *aluno = (Aluno*) malloc(sizeof(Aluno)); 
  char buffer[20];

  imprimir_borda();

  /* Cadastrar nome do aluno */
  printf("\nInsira o nome do aluno: ");
  fflush(stdin);
  scanf("%s", buffer);
  aluno->nome = (char*) malloc( (strlen(buffer) + 1) * sizeof(char));
  strcpy(aluno->nome, buffer);

  /* Cadastrar codigo do aluno */
  printf("\nInsira o codigo do aluno: ");
  fflush(stdin);
  scanf("%s", buffer);
  // Validar resposta
  if (strlen(buffer) != 5) return -1;
  aluno->codigo = (char*) malloc( 6 * sizeof(char));
  strcpy(aluno->codigo, buffer);

  /* Cadastrar cpf do aluno */
  printf("\nInsira o CPF do aluno (sem pontos e tracos): ");
  fflush(stdin);
  scanf("%s", buffer);
  // Validar resposta
  if (strlen(buffer) != 11) return -2;
  aluno->cpf = (char*) malloc( 12 * sizeof(char));
  strcpy(aluno->cpf, buffer);

  list_push(alunos, aluno);

  return 0;
}


void destruir_aluno(void *aluno) {
  free( (((Aluno*)aluno))->nome );
  free( ((Aluno*)aluno)->codigo );
  free( ((Aluno*)aluno)->cpf );
  free( ((Aluno*)aluno) );
}


void destruir_disciplina(void *disciplina) {
  free( ((Disciplina*)disciplina)->nome );
  free( ((Disciplina*)disciplina)->professor );
  free( ((Disciplina*)disciplina)->codigo );
  free( ((Disciplina*)disciplina)->creditos );
  free( ((Disciplina*)disciplina) );
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
