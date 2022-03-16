#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"
#include "Lista_Alunos.h"
#include "Style.h"
// #include "Lista_Disciplinas.h"

/* OPCOES DO MENU */
typedef enum {CADASTRAR_ALUNO = 1, REMOVER_ALUNO, 
              CADASTRAR_DISCIPLINA, REMOVER_DISCIPLINA,
              MOSTRAR_ALUNOS, MOSTRAR_DISCIPLINAS,
              CONSULTAR_ALUNO, CONSULTAR_DISCIPLINA,
              SAIR
              } Opcao;

void imprimir_menu();


int main() {
  List *alunos = list_load("alunos.bin", fread_aluno, destruir_aluno);
  // List *disciplinas = list_load("disciplinas.bin", fread_disciplina, destruir_disciplina);


  Opcao op;
  int sair = 0;

  while(!sair) {
    imprimir_menu();
    printf("\nOpcao desejada: ");

    fflush(stdin);
    scanf("%d", &op);

    int erro = 0;
    switch(op) {
      case CADASTRAR_ALUNO:
        erro = cadastrar_aluno(alunos);
        if (erro == CODIGO_INVALIDO) printf("\nCodigo invalido!\n");
        if (erro == CPF_INVALIDO) printf("\nCPF invalido!\n");
        break;
      case REMOVER_ALUNO:
        erro = remover_aluno(alunos);
        if (erro == CODIGO_INVALIDO) printf("\nCodigo invalido!\n");
        if (erro == CPF_INVALIDO) printf("\nCPF invalido!\n");
        if (erro == ALUNO_NAO_ENCONTRADO) printf("\nAluno nao encontrado!\n");
        break;
      case CADASTRAR_DISCIPLINA:
        printf("cd");
        break;
      case REMOVER_DISCIPLINA:
        printf("rd");
        break;
      case MOSTRAR_ALUNOS:
        list_apply(alunos, imprimir_aluno);
        pressione_para_continuar();
        break;
      case MOSTRAR_DISCIPLINAS:
        printf("md");
        break;
      case CONSULTAR_ALUNO:
        erro = consultar_aluno(alunos);
        if (erro == CODIGO_INVALIDO) printf("\nCodigo invalido!\n");
        if (erro == CPF_INVALIDO) printf("\nCPF invalido!\n");
        if (erro == ALUNO_NAO_ENCONTRADO) printf("\nAluno nao encontrado!\n");
        pressione_para_continuar();
        break;
      case CONSULTAR_DISCIPLINA:
        printf("cd");
        break;
      case SAIR:
        sair = 1;
        break;
      default:
        printf("def");
    }
  } 

  imprimir_borda();
  printf("\nSalvando alteracoes...\n");
  imprimir_borda();
  
  // Persistir memoria
  list_save(alunos, "alunos.bin", fwrite_aluno);


  // Liberar memoria utilizada para as listas
  list_destroy(alunos);
  // list_destroy(disciplinas);
  
  return 0;
}


void imprimir_menu() {
  imprimir_borda();
  printf("\n%d - Cadastrar aluno\n", CADASTRAR_ALUNO);
  printf("%d - Remover aluno\n", REMOVER_ALUNO);
  printf("%d - Cadastrar disciplina\n", CADASTRAR_DISCIPLINA);
  printf("%d - Remover disciplina\n", REMOVER_DISCIPLINA);
  printf("%d - Mostrar alunos cadastrados\n", MOSTRAR_ALUNOS);
  printf("%d - Mostrar disciplinas cadastradas\n", MOSTRAR_DISCIPLINAS);
  printf("%d - Consultar aluno\n", CONSULTAR_ALUNO);
  printf("%d - Consultar disciplina\n", CONSULTAR_DISCIPLINA);
  printf("%d - Sair\n", SAIR);
  imprimir_borda();
}
