#include "Lista_Alunos.h"
#include <string.h>

// TODO: verificar se todos os caracters sao digitos
int _aluno_validar_codigo(const char *codigo) {
  if (strlen(codigo) != 5) return CODIGO_INVALIDO;
  return 0;
}

// TODO: verificar se todos os caracters sao digitos
int _aluno_validar_cpf(const char *cpf) {
  if (strlen(cpf) != 11) return CPF_INVALIDO;
  return 0;
}


char* _aluno_cadastrar_nome() {
  char buffer[50];

  printf("\nInsira o nome do aluno: ");

  fflush(stdin);
  scanf("%[^\n]", buffer);

  // TODO: validar nome

  char *nome = (char*) malloc( (strlen(buffer) + 1) * sizeof(char));

  strcpy(nome, buffer);

  return nome;
}


char* _aluno_cadastrar_codigo() {
  char buffer[20];

  printf("\nInsira o codigo do aluno: ");

  fflush(stdin);
  scanf("%s", buffer);

  int erro = _aluno_validar_codigo(buffer);
  if (erro) return NULL;

  char *codigo = (char*) malloc( CODIGO_SIZE * sizeof(char));

  strcpy(codigo, buffer);

  return codigo;
}


char* _aluno_cadastrar_cpf() {
  char buffer[20];

  printf("\nInsira o CPF do aluno (sem pontos e tracos): ");

  fflush(stdin);
  scanf("%s", buffer);

  int erro = _aluno_validar_cpf(buffer);

  if(erro) return NULL;

  char *cpf = (char*) malloc( CPF_SIZE * sizeof(char));

  strcpy(cpf, buffer);

  return cpf;
}


int cadastrar_aluno(List *alunos) {
  Aluno *aluno = (Aluno*) malloc(sizeof(Aluno)); 

  imprimir_borda();

  aluno->nome = _aluno_cadastrar_nome();
  // if(!aluno->nome) return NOME_INVALIDO;

  aluno->codigo = _aluno_cadastrar_codigo();
  if(!aluno->codigo) return CODIGO_INVALIDO;
  
  aluno->cpf = _aluno_cadastrar_cpf();
  if(!aluno->cpf) return CPF_INVALIDO;
  
  list_push(alunos, aluno);

  return 0;
}


int remover_aluno(List *alunos) {
  imprimir_borda();
  printf("\nInsira o codigo do aluno a ser removido: ");

  char codigo[20];
  scanf("%s", codigo);

  int erro;

  erro = _aluno_validar_codigo(codigo);
  if(erro) return erro;

  if( list_remove_first(alunos,procurar_aluno_por_codigo,codigo))
   return ALUNO_NAO_ENCONTRADO;

  return 0;
}