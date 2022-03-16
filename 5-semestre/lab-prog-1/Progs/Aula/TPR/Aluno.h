
#ifndef ALUNO_H
#define ALUNO_H

#define CODIGO_SIZE 5
#define CPF_SIZE 12

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char* codigo;
  char* cpf;
  char* nome;
} Aluno;

/* FUNCAO DESTRUTORA */

void destruir_aluno(void *aluno);


/* IMPRESSAO DE ALUNO */

void imprimir_aluno(void *aluno);


/* FUNCAO DE PROCURA */

/* - Recebe como parametros um ponteiro para o aluno, alem do codigo em questao
 * - Retorna 1 se o aluno tem o codigo fornecido, 0 caso contrario
 */
int procurar_aluno_por_codigo(void *aluno, void *codigo);

/* - Recebe como parametros um ponteiro para o aluno, alem de uma string (nome)
 * - Retorna 1 se o nome do aluno contem a string fornecida, 0 caso contrario
 */
int procurar_aluno_por_nome(void *aluno, void *nome);

/* - Recebe como parametros um ponteiro para o aluno, alem de uma string (cpf)
 * - Retorna 1 se o aluno tem o cpf em questao, 0 caso contrario
 */
int procurar_aluno_por_cpf(void *aluno, void *cpf);


/* MANIPULACAO DE ARQUIVOS */

void fwrite_aluno(FILE *fp, void* data);

void* fread_aluno(FILE *fp);

#endif