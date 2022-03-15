#ifndef LISTA_ALUNOS_H
#define LISTA_ALUNOS_H

#include "List.h"
#include "Aluno.h"
#include "Style.h"

typedef enum {
  CODIGO_INVALIDO = 1,
  CPF_INVALIDO,
  ALUNO_NAO_ENCONTRADO
} ERRO_REGISTRO_ALUNO;

/* FUNCOES PRIVADAS */

int _aluno_validar_codigo(const char *codigo);

int _aluno_validar_cpf(const char *cpf);

char* _aluno_cadastrar_nome();

char* _aluno_cadastrar_codigo();

char* _aluno_cadastrar_cpf();


/* CADASTRAR ALUNO */

int cadastrar_aluno(List *alunos);

/* REMOVER ALUNO */

/* Remove o aluno por meio de uma busca com o codigo fornecido pelo usuario
 */
int remover_aluno(List *alunos);

#endif