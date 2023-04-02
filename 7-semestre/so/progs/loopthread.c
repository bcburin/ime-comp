#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *loop();

int main(int argc, char **argv) {
    pthread_t tid;
    pthread_create(&tid, NULL, loop, argv[1]);
    pthread_join(tid, NULL);
    return 0;
}

void *loop() {
    while (1)
        ;
    return NULL;
}