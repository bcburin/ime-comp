//
//  main.c
//  bolha
//
//  Created by Luiz Araujo on 29/09/20.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 200000

int S[TAMANHO];

void insertion (int *v)
{
    int i, j, aux;
    for (i=0; i<TAMANHO-1; i++)
    {
        j=i+1;
        while (v[j-1]>v[j] && j > 0)
        {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }
}

void selecao (int *v)
{
    int i,j,aux, minimo, pos_minimo;
    for (i=0; i < TAMANHO-1; i++)
    {
        minimo = v[i];
        pos_minimo = i;
        for (j=i+1; j < TAMANHO; j++)
        {
            if (minimo > v[j])
            {
                minimo = v[j];
                pos_minimo = j;
            }
        }
        if (pos_minimo != i)
        {
            aux = v[pos_minimo];
            v[pos_minimo] = v[i];
            v[i] = aux;
        }
    }
}

void bolha (int *v)
{
    int troca=1;
    int i=0;
    int aux;
    int tam = TAMANHO;
    while (troca)
    {
        troca = 0;
        while (i < tam - 1)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                troca = 1;
            }
            i++;
        }
        tam --;
        i = 0;
    }
}

void descer (int *v, int pai, int tam)
{
    int filho_e, filho_d, maior_filho, aux;
    filho_e = 2*pai+1;
    filho_d = 2*pai+2;
    if (filho_e < tam)
    {
        maior_filho=filho_e;
        if (filho_d < tam)
            if (v[filho_d]>v[filho_e])
                    maior_filho = filho_d;
        if (v[maior_filho]>v[pai])
        {
            aux = v[pai];
            v[pai]=v[maior_filho];
            v[maior_filho]=aux;
            descer (v,maior_filho, tam);
        }
    }
}

void monta_heap (int *v)
{
    int no_int = TAMANHO/2 - 1;
    int i;
    for (i = no_int; i >= 0; i--)
        descer (v, i, TAMANHO);
}

void heap_sort (int *v)
{
    int tam_heap, aux;
    tam_heap = TAMANHO - 1;
    
    monta_heap (v);
    
    while (tam_heap > 0)
    {
        aux = v[tam_heap];
        v[tam_heap]=v[0];
        v[0]=aux;
        tam_heap--;
        descer (v,0,tam_heap+1);
    }
}

void check (int *v)
{
    int i;
    int ord=1;
    for (i = 0; i < TAMANHO-1; i++)
      if (v[i]>v[i+1])
          ord = 0;
    if (ord)
        printf("Vetor ordenado! \n");
    else
        printf("Vetor não ordenado! \n");
    return;
}

void merge (int *v,int i, int f)
{
    int meio, i1, i2, iaux, j;
    int *vaux;
    if (i==f)
        return;
    else
    {
        meio = (i+f)/2;
        merge (v,i,meio);
        merge (v,meio+1,f);
        vaux = malloc ((f-i+1) * sizeof (int));
        i1 = i;
        i2 = meio+1;
        iaux = 0;
        while ((i1 <= meio) || (i2 <= f) )
        {
            if ((i1 <= meio) && (i2 <= f))
            {
                if (v[i1] < v[i2])
                {
                    vaux[iaux]=v[i1];
                    i1++;
                }
                else
                {
                    vaux[iaux]=v[i2];
                    i2++;
                }
                iaux++;
            }
            else if (i1 <= meio)
            {
                vaux[iaux]=v[i1];
                i1++;
                iaux++;
            }
            else
            {
                vaux[iaux]=v[i2];
                i2++;
                iaux++;
            }
        }
        iaux=0;
        for (j=i; j<=f; j++)
        {
            v[j]=vaux[iaux];
            iaux++;
        }
        free (vaux);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    float ms;
    clock_t start, stop;
    printf("Bolha\n");
    for (i=0; i < TAMANHO; i++)
        S[i]=TAMANHO-i;
    start = clock();
    printf("Start -->  %12lu\n", start);
    bolha (S);
    stop = clock();
    printf("Stop --> %12lu\n", stop);
    ms = (stop-start)*1000/CLOCKS_PER_SEC;
    printf("Stop - Start --> %6.3f\n", ms);
    check (S);
    
    printf("Seleção\n");
    for (i=0; i < TAMANHO; i++)
        S[i]=TAMANHO-i;
    start = clock();
    printf("Start -->  %12lu\n", start);
    selecao (S);
    stop = clock();
    printf("Stop --> %12lu\n", stop);
    ms = (stop-start)*1000/CLOCKS_PER_SEC;
    printf("Stop - Start --> %6.3f\n", ms);
    check(S);
    
    printf("inserção\n");
    for (i=0; i < TAMANHO; i++)
        S[i]=TAMANHO-i;
    start = clock();
    printf("Start -->  %12lu\n", start);
    insertion (S);
    stop = clock();
    printf("Stop --> %12lu\n", stop);
    ms = (stop-start)*1000/CLOCKS_PER_SEC;
    printf("Stop - Start --> %6.3f\n", ms);
    check(S);
    
    printf("Heap\n");
    for (i=0; i < TAMANHO; i++)
        S[i]=i;
    start = clock();
    printf("Start -->  %12lu\n", start);
    heap_sort (S);
    stop = clock();
    printf("Stop --> %12lu\n", stop);
    ms = (stop-start)*1000/CLOCKS_PER_SEC;
    printf("Stop - Start --> %6.3f\n", ms);
    check(S);
    
    printf("Merge\n");
    for (i=0; i < TAMANHO; i++)
        S[i]=TAMANHO-i;
    start = clock();
    printf("Start -->  %12lu\n", start);
    merge (S,0,TAMANHO-1);
    stop = clock();
    printf("Stop --> %12lu\n", stop);
    ms = (stop-start)*1000/CLOCKS_PER_SEC;
    printf("Stop - Start --> %6.3f\n", ms);
    check(S);
    return 0;

}
