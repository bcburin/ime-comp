#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define V_SIZE 100
#define T_SIZE 7

const int INTERVAL_SIZE = (V_SIZE / T_SIZE) + (V_SIZE % T_SIZE != 0);

int v[V_SIZE];
int sum = 0;

pthread_t tid[T_SIZE];
pthread_mutex_t lock;

void *calculate_psum(void *args);

int main(int argc, char **argv) {
    // Inicializar vetor v
    for (int i = 0; i != V_SIZE; ++i) v[i] = i + 1;

    // Criar threads
    for (int i = 0; i != T_SIZE; ++i) {
        int *arg = malloc(sizeof(int));
        *arg = i;
        pthread_create(tid + i, NULL, calculate_psum, arg);
    }

    // Esperar todas as threads acabarem
    for (int i = 0; i != T_SIZE; ++i) pthread_join(tid[i], NULL);

    printf("%d\n", sum);

    return 0;
}

void *calculate_psum(void *arg) {
    int pos = *(int *)arg;
    int psum = 0;
    free(arg);

    for (int i = INTERVAL_SIZE * pos;
         i < INTERVAL_SIZE * (pos + 1) && i < V_SIZE; ++i)
        psum += v[i];

    pthread_mutex_lock(&lock);
    sum += psum;
    pthread_mutex_unlock(&lock);

    return NULL;
}