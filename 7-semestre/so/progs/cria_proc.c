#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char **argv) {
  int pid;
  /* cria outro processo */
  pid = fork();
  if (pid < 0) { /* ocorreu erro na execução do Fork */
    fprintf(stderr, "Falha no Fork\n");
    exit(-1);
  }
  else if (pid == 0) { /* processo filho */
    execlp("~/IME/7-semestre/OS/loop","loop",NULL);
    exit(1);
  }
  else { /* processo pai */
    wait(NULL); /* pai espera o término do filho */
    printf("Filho terminou\n");
    exit(0);
  }
}
