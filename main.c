#include <stdio.h>
#include "include/linear/l_list.h"
#include <stdlib.h>

int main(){
    printf("Hello World!\n");

    LinkedList *l_list = init_l_list();

    for(int i = 0; i < 10; i++){
        int *value = malloc(sizeof(int));
        *value = i;
        add_last(l_list, value);
    }

    print_l_list(l_list);

    return 0;
}