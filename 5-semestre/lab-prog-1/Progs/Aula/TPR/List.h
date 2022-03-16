
#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node_ {
  void *data;
  struct Node_ *next;
  struct Node_ *prev;
} Node;

typedef struct List_ {
  Node *head;
  Node *tail;
  int size;
  void (*destroy)(void *data);
} List;

/********************************************************
 *        FUNCOES PRIVADAS - MANIPULACAO DE NOS         *
 *******************************************************/

void _list_attach_nodes(Node *node1, Node *node2);

void _list_detach_nodes(Node *node1, Node *node2);

void _list_remove_node(List *list, Node *node);

Node* _list_create_node(void *data);

/***********************************
 *      INTERFACE PUBLICA          *
 **********************************/

/* FUNCOES CONSTRUTORA E DESTRUTORA */

/* Aloca memoria para a lista
 * A memoria para os elementos da lista deve ser alocada separadamente
 * Define a funcao que destroi (libera a memoria de) seus elementos
 * Se for passado o parametro NULL, os elementos nunca serao automaticamente destruidos
 */
List* list_create(void (*destroy)(void *data));

/* Desaloca a memoria para a lista
 * e para todos os seus elementos, usando a funcao destroy
 */
void list_destroy(List *list);


/* FUNCOES DE INSERCAO */


void list_push(List *list, void *data);              // Adiciona elemento no final da lista

void list_unshift(List *list, void *data);           // Adiciona elemento no comeco da lista

void list_insert(List *list, void *data, int index); // Adiciona elemento na posicao index


/* FUNCOES DE REMOCAO */


void* list_pop(List *list);                  // Retira ultimo elemento e o retorna

void* lsit_shift(List *list);                // Retira primeiro elemento e o retorna

void* list_retrieve(List *list, int index);  // Retira o elemento na posicao index e o retorna

void list_remove(List *list, int index);     // Reira elemento da posicao index e o destroi (libera memoria)

/* - Remove primeiro item satisfazendo certa condicao e o retorna
 *    - O primeiro argumento da condicao eh o valor contido no item da lista
 *    - O segundo argumento eh uma chave que pode ser utilizada para procurar o item
 * - A chave de procura deve ser fornecida
 */
void* list_retrieve_first(List *list, int (*condition)(void *data, void *key), void *key);

/* - Remove primeiro item satisfazendo certa condicao e o destroi (libera memoria)
 *    - O primeiro argumento da condicao eh o valor contido no item da lista
 *    - O segundo argumento eh uma chave que pode ser utilizada para procurar o item
 * - A chave de procura deve ser fornecida
 * - Retorna 0 se a remocao ocorrer com sucesso, 1 caso contrario
 */
int list_remove_first(List *list, int (*condition)(void *data, void *key), void *key); 


/* FUNCOES DE BUSCA */


void* list_index(List *list, int index);  // Retorna elemento na posicao index

/* Retorna primeiro elemento que retorne verdadeiro para condicao enviada
 * A condicao eh um ponteiro para funcao que retorna int e recebe parametro do tipo void* (cuidado!)
 */
void* list_search(List *list, int (*condition)(void *data, void *key), void *key);


/* FUNCOES DE MODIFICACAO */

/* Aplica a funcao applyf a cada elemento da lista
 * Pode ser utilizada para imprimir a lista fornecendo uma funcao que imprima seus elementos
 * Potencialmente, pode alterar a lista toda (cuidado!)
 */
void list_apply(List *list, void (*applyf)(void *data));


/* FUNCOES DE MANIPULACAO DE ARQUIVOS */

/* - Salva lista no caminho especificado
 * - NAO otimizada: mesmo que apenas algumas entradas tenham sido adicionadas
 *   ou alteradas, o arquivo sera reescrito por completo
 * - Requer funcao que implemente a escrita no arquivo
 * - OBS: escrita binaria
 */
void list_save(List *list, char *filename, void (*write)(FILE *fp, void *data));

/* - Carrega lista contida no caminho especificado
 * - Requer funcao que implemente a leitura do arquivo e retorne um ponteiro void* para os dados alocados
 * - Requer a funcao que libera a memoria dos dados alocados
 *    - Se forem dados primitivos, usar free
 *    - Se a lista nao tiver permissao para deletar dados, usar NULL
 * - OBS: leitura binaria
 */
List* list_load(char *filename, void* (*read)(FILE *fp), void (*destroy)(void *data));

#endif