#include "../push_swap.h"
#include <stdlib.h>
l *max_list(l *list)
{
    int max= list->value;
    while(list)
    {
        if(max < list->value)
            max = list->value;
        list = list->next;
    }
    l *node = malloc(sizeof(l));
    node->value = max;
    node->next = NULL;
    return node ;
}
