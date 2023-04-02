#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int fd[2], pid1, pid2;
    char *ls[3] = {"/bin/ls", "-l", NULL};
    char *wc[2] = {"/usr/bin/wc", NULL};

    pipe(fd);

    if ((pid1 = fork()) == 0) {
        dup2(fd[1], STDOUT_FILENO);
        close(fd[0]);
        close(fd[1]);
        execv(ls[0], ls);
    }

    if ((pid2 = fork()) == 0) {
        dup2(fd[0], STDIN_FILENO);
        close(fd[0]);
        close(fd[1]);
        execv(wc[0], wc);
    }

    close(fd[0]);
    close(fd[1]);
    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);

    return 0;
}