#ifndef L_LIST_H
#define L_LIST_H
#include <stdio.h>
#include "l_list_node.h"

typedef struct LinkedList{
    size_t size;
    LinkedListNode *head;
    LinkedListNode *tail;
} LinkedList;

LinkedList *init_l_list();
void add_first(LinkedList *l_list, void *item);
void add_last(LinkedList *l_list, void *item);

void *get_first(LinkedList *l_list);
void *get_last(LinkedList *l_list);

void print_l_list(LinkedList *l_list);


#endif