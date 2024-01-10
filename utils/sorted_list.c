#include "../push_swap.h"

int sorted_list(l *list)
{
    while(list->next)
    {
        if(list->value > list->next->value)
            return 0;
            list = list->next;
    }
    return 1;
}