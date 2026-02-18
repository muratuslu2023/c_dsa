#ifndef L_LIST_H
#define L_LIST_H
#include <stdio.h>
#include "l_list_node.h"

typedef struct LinkedList{
    size_t size;
    LinkedListNode *head;
    LinkedListNode *tail;
} LinkedList;

void init_l_list(LinkedList *l_list);


#endif