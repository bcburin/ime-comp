#include "Disciplina.h"

void destruir_disciplina(void *disciplina) {
  free( ((Disciplina*)disciplina)->nome );
  free( ((Disciplina*)disciplina)->professor );
  free( ((Disciplina*)disciplina)->codigo );
  free( ((Disciplina*)disciplina)->creditos );
  free( ((Disciplina*)disciplina) );
}


void fwrite_disciplina(FILE *fp, void* data) { fwrite(data, sizeof(Disciplina), 1, fp); }


void* fread_disciplina(FILE *fp) {
  void *data = malloc(sizeof(Disciplina));
  fread(data, sizeof(Disciplina), 1, fp);
  return data;
}