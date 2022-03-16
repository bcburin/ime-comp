#include <string.h>
#include "Aluno.h"

void destruir_aluno(void *aluno) {
  free( (((Aluno*)aluno))->nome );
  free( ((Aluno*)aluno)->codigo );
  free( ((Aluno*)aluno)->cpf );
  free( ((Aluno*)aluno) );
}


void imprimir_aluno(void *aluno) {
  printf("\nALUNO: %s\n", ((Aluno*)aluno)->nome);
  printf("CODIGO: %s\n", ((Aluno*)aluno)->codigo);
  printf("CPF: %s\n", ((Aluno*)aluno)->cpf);
}


int procurar_aluno_por_codigo(void *aluno, void *codigo) {
  char *codigo_aluno = ((Aluno*)aluno)->codigo;

  // OBS: a funcao strcmp retorna zero se e so se seus parametros forem iguais
  return strcmp(codigo_aluno, codigo) == 0;
}


int procurar_aluno_por_nome(void *aluno, void *nome) {
  char *aluno_nome = ((Aluno*)aluno)->nome;

  return strstr(aluno_nome, (char*) nome) != NULL; 
}


int procurar_aluno_por_cpf(void *aluno, void *cpf) {
  char *cpf_aluno = ((Aluno*)aluno)->cpf;

  // OBS: a funcao strcmp retorna zero se e so se seus parametros forem iguais
  return strcmp(cpf_aluno, cpf) == 0;
}



void fwrite_aluno(FILE *fp, void* aluno) { 
  char *nome = ((Aluno*)aluno)->nome;
  char *codigo = ((Aluno*)aluno)->codigo;
  char *cpf = ((Aluno*)aluno)->cpf;

  // Salvar tamanho do nome do aluno, para poder recupera-lo dinamicamente depois
  int nome_size = strlen(nome)+1;

  // Escrever dados no arquivo
  fwrite( &nome_size, sizeof(int), 1, fp );
  fwrite( nome , sizeof(char), nome_size, fp);
  fwrite( codigo , sizeof(char), CODIGO_SIZE, fp);
  fwrite( cpf , sizeof(char), CPF_SIZE, fp);
}


void* fread_aluno(FILE *fp) { 
  // Alocar espaco para aluno a ser inserido na lista
  Aluno *aluno = malloc(sizeof(Aluno));

  // Ler tamanho do nome do aluno
  int nome_size = 0;
  fread(&nome_size, sizeof(int), 1, fp);

  // Alocar espaco para os campos a serem lidos do arquivo
  char *nome = malloc( sizeof(char) * nome_size );
  char *codigo = malloc( sizeof(char) * CODIGO_SIZE);
  char *cpf = malloc( sizeof(char) * CPF_SIZE);
  

  // Ler outras entradas do arquivo
  fread( nome , sizeof(char), nome_size, fp);
  fread( codigo , sizeof(char), CODIGO_SIZE, fp);
  fread( cpf , sizeof(char), CPF_SIZE, fp);

  // Colocar dados lidos na estrutura
  aluno->nome = nome;
  aluno->codigo = codigo;
  aluno->cpf = cpf;

  return (void*) aluno; 
}