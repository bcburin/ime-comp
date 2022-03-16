#include "Lista_Alunos.h"


int _aluno_determinar_metodo_de_busca() {
  imprimir_borda();
  printf("%d - Por nome\n", POR_NOME);
  printf("%d - Por codigo\n", POR_CODIGO);
  printf("%d - Por CPF\n", POR_CPF);
  imprimir_borda();

  printf("\nOpcao desejada: ");

  int metodo = 0;
  fflush(stdin);
  scanf("%d", &metodo);

  // Validar metodo

  return metodo;
}



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
  int metodo = _aluno_determinar_metodo_de_busca();
  if(metodo < 0) return metodo; // Retorna erro

  imprimir_borda();
  fflush(stdin);

  char key[50];
  int erro = 0;

  switch (metodo) {
    case POR_NOME:
      printf("\nInsira o nome ou parte do nome: ");
      scanf("%[^\n]", &key);
      if ( list_remove_first(alunos, procurar_aluno_por_nome, key) )
        return ALUNO_NAO_ENCONTRADO;
      break;
    case POR_CODIGO:
      printf("\nInsira o codigo: ");
      scanf("%[^\n]", &key);
      erro = _aluno_validar_codigo(key);
      if (erro) 
        return erro;
      if ( list_remove_first(alunos, procurar_aluno_por_codigo, key) )
        return ALUNO_NAO_ENCONTRADO;
      break;
    case POR_CPF:
      printf("\nInsira o CPF: ");
      scanf("%[^\n]", &key);
      erro = _aluno_validar_cpf(key);
      if (erro) 
        return erro;
      if ( list_remove_first(alunos, procurar_aluno_por_cpf, key) )
        return ALUNO_NAO_ENCONTRADO;
      break;
  }

  return 0;
}


int consultar_aluno(List *alunos) {
  int metodo = _aluno_determinar_metodo_de_busca();
  if(metodo < 0) return metodo; // Retornar erro

  imprimir_borda();
  fflush(stdin);

  Aluno *aluno;
  char key[50];
  int erro = 0;

  switch (metodo) {
    case POR_NOME:
      printf("\nInsira o nome ou parte do nome: ");
      scanf("%[^\n]", &key);
      aluno = list_search(alunos, procurar_aluno_por_nome, key);
      break;
    case POR_CODIGO:
      printf("\nInsira o codigo: ");
      scanf("%[^\n]", &key);
      erro = _aluno_validar_codigo(key);
      if(erro) return erro;
      aluno = list_search(alunos,procurar_aluno_por_codigo,key);
      break;
    case POR_CPF:
      printf("\nInsira o CPF: ");
      scanf("%[^\n]", &key);
      erro = _aluno_validar_cpf(key);
      if(erro) return erro;
      aluno = list_search(alunos,procurar_aluno_por_cpf,key);
      break;
  }

  if(!aluno) return ALUNO_NAO_ENCONTRADO;

  imprimir_borda();
  imprimir_aluno(aluno);

  return 0;
}
