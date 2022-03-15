#include "Lista_Alunos.h"
#include <string.h>

enum 

// TODO: verificar se todos os caracters sao digitos
int _aluno_validar_codigo(const char *codigo) {
  if (strlen(codigo) != 5) return -1;
  return 0;
}

// TODO: verificar se todos os caracters sao digitos
int _aluno_validar_cpf(const char *cpf) {
  if (strlen(cpf) != 11) return -2;
  return 0;
}


int _aluno_cadastrar_nome(char *nome) {
  char buffer[50];

  printf("\nInsira o nome do aluno: ");

  fflush(stdin);
  scanf("%[^\n]", buffer);

  // TODO: validar nome

  nome = (char*) malloc( (strlen(buffer) + 1) * sizeof(char));

  strcpy(nome, buffer);

  return 0;
}


int _aluno_cadastrar_codigo(char *codigo) {
  char buffer[20];

  printf("\nInsira o codigo do aluno: ");

  fflush(stdin);
  scanf("%s", buffer);

  int erro = _aluno_validar_codigo(buffer);

  if (erro) return erro;

  codigo = (char*) malloc( CODIGO_SIZE * sizeof(char));

  strcpy(codigo, buffer);

  return 0;
}


int _aluno_cadastrar_cpf(char *cpf) {
  char buffer[20];

  printf("\nInsira o CPF do aluno (sem pontos e tracos): ");

  fflush(stdin);
  scanf("%s", buffer);

  int erro = _aluno_validar_cpf(buffer);

  if(erro) return erro;

  cpf = (char*) malloc( CPF_SIZE * sizeof(char));

  strcpy(cpf, buffer);
}


int cadastrar_aluno(List *alunos) {
  Aluno *aluno = (Aluno*) malloc(sizeof(Aluno)); 

  int erro = 0;

  erro = _aluno_cadastrar_nome(aluno->nome);
  if(erro) return erro;

  erro = _aluno_cadastrar_codigo(aluno->codigo);
  if(erro) return erro;
  
  erro = _aluno_cadastrar_cpf(aluno->cpf);
  if(erro) return erro;
  
  list_push(alunos, aluno);

  return 0;
}