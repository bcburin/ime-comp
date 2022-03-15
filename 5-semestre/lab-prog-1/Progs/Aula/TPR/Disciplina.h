#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char* codigo;
  char* nome;
  char* professor;
  int* creditos;
} Disciplina;

/* FUNCAO DESTRUTORA */
void destruir_disciplina(void *disciplina);

/* MANIPULACAO DE ARQUIVOS */

void fwrite_disciplina(FILE *fp, void* data);

void* fread_disciplina(FILE *fp);

#endif