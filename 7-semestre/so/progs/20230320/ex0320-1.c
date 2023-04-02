#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int x;

int main(int argc, char **argv) {
    int pid;
    x = 0;

    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "Falha no Fork\n");
        exit(-1);
    } else if (pid == 0) {
        x = 10;
        exit(1);
    } else {
        wait(NULL);
        printf("%d\n", x);
        exit(0);
    }

    return 0;
}
