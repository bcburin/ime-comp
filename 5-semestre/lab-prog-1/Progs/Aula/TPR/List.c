#include "List.h"


void _list_attach_nodes(Node *node1, Node *node2) {
  node1->next = node2;
  node2->prev = node1;
}


void _list_detach_nodes(Node *node1, Node *node2) {
  node1->next = NULL;
  node2->prev = NULL;
}

void _list_remove_node(List *list, Node *node) {
  Node *prev = node->prev;
  Node *next = node->next;

  // Realocar inicio/fim da lista
  if(list->head == node) list->head = node->next;
  if(list->tail == node) list->tail = node->prev;


  // Desfazer ligacoes antigas e criar a nova
  if(prev)
    _list_detach_nodes(prev, node);
  if(next)
    _list_detach_nodes(node, next);
  if(prev && next)
    _list_attach_nodes(prev,next);

  // Desalocar memoria para o no (mas nao os dados contidos nele!)
  free(node);

}


Node* _list_create_node(void *data) {
  Node *node = (Node*) malloc(sizeof(Node)); 
  node->data = data;
  node->prev = NULL;
  node->next = NULL;
  return node;
}

List* list_create(void (*destroy)(void *data)) {
  List *list = malloc(sizeof(List));
  list->head = NULL;
  list->tail = NULL;
  list->size = 0;
  list->destroy = destroy;
  return list;
}


void list_destroy(List *list) {
  Node *curr = list->head;
  Node *next = list->head;

  while(curr) {
    if (list->destroy) list->destroy(curr->data);
    next = curr->next;
    free(curr);
    curr = next;
  }
}


void list_push(List *list, void *data) {
  Node *node = _list_create_node(data);

  if (list->size == 0) {
    list->head = node;
    list->tail = node;
    list->size++;
    return;
  }

  _list_attach_nodes(list->tail, node);
  
  list->tail = node;
  list->size++;

}


void* list_pop(List *list) {
  if(list->size == 0) return NULL;

  Node *node = list->tail;
  void *data = node->data;

  list->tail = node->prev;
  list->size--;

  _list_detach_nodes(list->tail, node);

  free(node);

  return data;
}

void list_unshift(List *list, void *data) {
  if (list->size == 0) {
    list_push(list, data);
    return;
  }

  Node *node = _list_create_node(data);
  
  _list_attach_nodes(node,list->head);

  list->head = node;
}


void* list_shift(List *list) {
  if(list->size == 0) return NULL;

  Node *node = list->head;
  void *data = node->data;

  list->head = node->next;
  list->size--;

  _list_detach_nodes(node, list->head);

  free(node);

  return data;
}



void list_insert(List *list, void *data, int index) {
  if (index < 0 || index > list->size) return;

  // Caso: adicao no comeco da lista
  if (index == 0) {
    list_unshift(list, data);
  }

  // Caso: adicao no fim da lista
  if (index == list->size) {
    list_push(list, data);
    return;
  }

  Node *node = _list_create_node(data);

  // Otimizacao: comecar travessia do extremo mais proximo
  if(index < list->size/2) {
    int i = 0;
    for (Node *cur = list->head; cur; cur = cur->next )
      if (++i == index) {
        Node *next = cur->next;
        _list_attach_nodes(cur,node);
        _list_attach_nodes(node,next);
      }
  } else {
    int i = list->size;
    for (Node *cur = list->tail; cur; cur = cur->prev )
      if(--i == index) {
        Node *prev = cur->prev;
        _list_attach_nodes(prev,node);
        _list_attach_nodes(node,cur);
      }
  }

  list->size++;
}


void* list_retrieve(List *list, int index) {
  if (index < 0 || index > list->size - 1) return NULL;

  // Caso: remocao no comeco da lista
  if (index == 0) return list_shift(list);

  // Caso: remocao no fim da lista
  if (index == list->size-1) return list_pop(list);


  // Otimizacao: comecar travessia do extremo mais proximo
  void *data;
  if(index < list->size/2) {
    int i = 0;
    for (Node *cur = list->head; cur; cur = cur->next )
      if (i++ == index) {
        data = cur->data;
        _list_remove_node(list, cur);
        break;
      }
  } else {
    int i = list->size-1;
    for (Node *cur = list->tail; cur; cur = cur->prev )
      if(i-- == index) {
        data = cur->data;
        _list_remove_node(list, cur);
        break;
      }
  }

  list->size--;

  return data;
}


void list_remove(List *list, int index) {
  void *data = list_retrieve(list, index);
  if(list->destroy && data) list->destroy(data);
}


void* list_retrieve_first(List *list, int (*condition)(void *data, void *key), void *key) {
  for (Node *curr = list->head; curr; curr = curr->next) {
    if(condition(curr->data, key)) {
      void *data = curr->data;
      _list_remove_node(list, curr);
      list->size--;
      return data;
    }
  }

  // Caso nao seja encontrado nenhum elemento satisfazendo a condicao fornecida
  return NULL;
} 


int list_remove_first(List *list, int (*condition)(void *data, void *key), void *key) {
  void *data = list_retrieve_first(list, condition, key);

  if(!data) return 1;
  
  if(list->destroy && data) list->destroy(data);
  
  return 0;
}


void* list_index(List *list, int index) {
  if (index < 0 || index > list->size-1 ) return NULL;

  if (index == list->size-1) return list->tail;

  // Otimizacao: comecar travessia do extremo mais proximo
  if(index < list->size/2) {
    int i = 0;
    for (Node *cur = list->head; cur; cur = cur->next )
      if (i++ == index)  return cur->data;
  } else {
    int i = list->size-1;
    for (Node *cur = list->tail; cur; cur = cur->prev )
      if(i-- == index) return cur->data;
  }
}


void* list_search(List *list, int (*condition)(void *data, void *key), void *key) {
  for (Node *cur = list->head; cur; cur = cur->next) {
    if ( condition(cur->data, key) ) return cur->data;
  }
  return NULL;
}


void list_apply(List *list, void (*applyf)(void *data)) {
  for (Node *cur = list->head; cur; cur = cur->next) {
    applyf(cur->data);
  }
}


void list_save(List *list, char *filename, void (*write)(FILE *fp, void *data)) {
  FILE *fp = fopen(filename, "wb");

  if(!fp) {
    printf("Failed to open file %s", filename);
    return;
  }


  fwrite(&list->size, sizeof(int), 1, fp);

  for( Node *curr = list->head; curr; curr = curr->next) {
    if(curr == NULL) {
      printf("\nNULL Node!\n");
    }
    write(fp, curr->data);
  }

  fclose(fp);
}

List* list_load(char *filename, void* (*read)(FILE *fp), void (*destroy)(void *data)) {
  FILE* fp = fopen(filename, "rb");

  if(!fp) {
    printf("-- Failed to open file %s --\n", filename);
    printf("-- Returning empty list... --\n");
    return list_create(destroy);
  }

  int size = 0;
  
  fread(&size, sizeof(int), 1, fp);


  List *list = list_create(destroy);

  for(int i = 0; i != size; ++i) {
    void *data = read(fp);
    list_push(list, data);
  }

  fclose(fp);

  return list;
}
