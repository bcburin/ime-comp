
#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

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

/***********************************
 *        FUNCOES PRIVDAS          *
 **********************************/

void _list_attach_nodes(Node *node1, Node *node2);

void _list_detach_nodes(Node *node1, Node *node2);

void _list_remove_node(Node *node);

Node* _list_create_node(void *data);

/***********************************
 *      INTERFACE PUBLICA          *
 **********************************/

/* FUNCOES CONSTRUTORA E DESTRUTORA */

List* list_create(void (*destroy)(void *data));

void list_destroy(List *list);

/* FUNCOES DE INSERCAO */

void list_push(List *list, void *data);

void list_unshift(List *list, void *data);

void list_insert(List *list, void *data, int index);

/* FUNCOES DE REMOCAO */

void* list_pop(List *list);

void* lsit_shift(List *list);

void* list_retrieve(List *list, int index);

void list_remove(List *list, int index);

/* FUNCOES DE BUSCA */

void* list_index(List *list, int index);

void* list_search(List *list, int (*condition)(void *data));

/* FUNCOES DE MODIFICACAO */

void list_apply(List *list, void (*applyf)(void *data));

#endif