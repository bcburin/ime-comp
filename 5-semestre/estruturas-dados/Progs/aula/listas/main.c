//
//  main.c
//  lista-enc-2021
//
//  Created by Luiz Araujo on 23/03/22.
//

#include <stdio.h>
#include <stdlib.h>

struct no {
    int chave;
    struct no *prox;
};

struct no *lista = NULL;

struct no *busca (int ch, struct no *l, struct no **ant)
{
    struct no *aux = l;
    *ant = NULL;
    while (aux != NULL && aux->chave != ch) //(*aux).chave
    {
        *ant = aux;
        aux = aux->prox;
    }
    return aux;
}

int inserir (int ch, struct no **l)
{
    struct no *novo_no;
    struct no *aux;
    struct no *ant;
    
    aux = busca (ch, *l, &ant);
    
    if (aux != NULL) // encontrei a chave
        return 0; // erro chave presente
    else
    {
        novo_no = malloc (sizeof(struct no));
        novo_no->chave = ch;
        novo_no->prox = NULL; // Estou inserindo na última posição
        if (ant == NULL) // Lista é vazia
            *l = novo_no;
        else
            ant->prox = novo_no;
        return 1; // Sucesso!
    }
}

int remover (int ch, struct no **l)
{
    struct no *aux;
    struct no *ant;
    
    aux = busca (ch, *l, &ant);
    
    if (aux == NULL) // Não encontrei
        return 0;
    else
    {
        if (ant == NULL) // remoção do 1º elemento
        {
            *l = aux->prox;
            free (aux);
        }
        else
        {
            ant->prox = aux->prox;
            free (aux);
        }
        return 1;
    }
}

int main(int argc, const char * argv[]) {
    struct no *aux;
    struct no *ant;
    
    inserir (10,&lista);
    inserir (20,&lista);
    inserir (30,&lista);
    inserir (40,&lista);
    
    aux = busca (30, lista, &ant);
    
    printf("%d\n",aux->chave);
    
    remover (10,&lista);
    remover (40,&lista);
    remover (20,&lista);
    remover (30,&lista);
    
    printf("Hello, World!\n");
    return 0;
}
