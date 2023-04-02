#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define V_SIZE 100
#define T_SIZE 11

const int INTERVAL_SIZE = (V_SIZE / T_SIZE) + (V_SIZE % T_SIZE != 0);

int v[V_SIZE];
int s[T_SIZE];
int psum[T_SIZE];
pthread_t tid[T_SIZE];

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

    // Calcular soma
    int sum = 0;
    for (int i = 0; i != T_SIZE; ++i) sum += psum[i];

    printf("%d\n", sum);

    return 0;
}

void *calculate_psum(void *args) {
    int pos = *(int *)args;
    free(args);

    psum[pos] = 0;

    for (int i = INTERVAL_SIZE * pos;
         i < INTERVAL_SIZE * (pos + 1) && i < V_SIZE; ++i)
        psum[pos] += v[i];

    return NULL;
}