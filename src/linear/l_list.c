#include <stdio.h>
#include <stdlib.h>
#include "linear/l_list.h"

LinkedList *init_l_list(){
    // create linked list
    LinkedList *l_list = malloc(sizeof(LinkedList));
    LinkedListNode *h_node = malloc(sizeof(LinkedListNode));
    LinkedListNode *t_node = malloc(sizeof(LinkedListNode));
    l_list->head = h_node;
    l_list->size = 0;
    l_list->tail = t_node;

    h_node->item = NULL;
    h_node->prev = NULL;
    h_node->succ = t_node;

    t_node->item = NULL;
    t_node->prev = h_node;
    t_node->succ = NULL;

    return l_list;
}


void add_first(LinkedList *l_list, void *item){
    // create new node
    LinkedListNode *new_node = malloc(sizeof(LinkedListNode));

    LinkedListNode *prev = l_list->head;
    LinkedListNode *succ = l_list->head->succ;

    new_node->prev = prev;
    new_node->succ = succ;

    succ->prev = new_node;
    prev->succ = new_node;


    new_node->item = item;

    l_list->size++;
}

void add_last(LinkedList *l_list, void *item){
    // create new node
    LinkedListNode *new_node = malloc(sizeof(LinkedListNode));

    LinkedListNode *prev = l_list->tail->prev;
    LinkedListNode *succ = l_list->tail;

    new_node->prev = prev;
    new_node->succ = succ;

    succ->prev = new_node;
    prev->succ = new_node;


    new_node->item = item;

    l_list->size++;

}

void *get_first(LinkedList *l_list){
    if(l_list == NULL)
        return NULL;

    if(l_list->size == 0)
        return NULL;

    return l_list->head->succ->item;
    
}

void *get_last(LinkedList *l_list){
    if(l_list == NULL)
        return NULL;
    if(l_list->size == 0)
        return NULL;
    
    return l_list->tail->prev->item;
}

void print_l_list(LinkedList *l_list){
    LinkedListNode *curr_node = l_list->head->succ;

    while(curr_node != l_list->tail){
        printf("%d\n", *(int *)curr_node->item);
        curr_node = curr_node->succ;
    }

}
