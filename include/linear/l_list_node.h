#ifndef L_LIST_NODE_H
#define L_LIST_NODE_H

typedef struct LinkedListNode{
    void *item;
    struct LinkedListNode *prev;
    struct LinkedListNode *succ;
} LinkedListNode;

#endif