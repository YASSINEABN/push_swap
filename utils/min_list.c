	#include "../push_swap.h"
	#include <stdlib.h>
l *min_list(l *list)
{
    int min= list->value;
    while(list)
    {
        if(min > list->value)
            min = list->value;
        list = list->next;
    }
    l *node = malloc(sizeof(l));
    node->value = min;
    node->next = NULL;
    return node ;
}