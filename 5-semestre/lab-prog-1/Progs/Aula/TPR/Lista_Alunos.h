#ifndef LISTA_ALUNOS_H
#define LISTA_ALUNOS_H

#include "List.h"
#include "Aluno.h"

typedef enum

/* FUNCOES PRIVADAS */

int _aluno_validar_codigo(const char *codigo);

int _aluno_validar_cpf(const char *cpf);

int _aluno_cadastrar_nome(char *nome);

int _aluno_cadastrar_codigo(char *codigo);

int _aluno_cadastrar_cpf(char *cpf);


/* CADASTRAR ALUNO */

int cadastrar_aluno(List *alunos);

#endif