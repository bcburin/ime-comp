#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int x;

void *change_var();

int main(int argc, char **argv) {
    x = 0;
    pthread_t tid;
    pthread_create(&tid, NULL, change_var, argv[1]);
    pthread_join(tid, NULL);
    printf("%d\n", x);
    return 0;
}

void *change_var() {
    x = 10;
    return NULL;
}