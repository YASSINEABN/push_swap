#include "../push_swap.h"
void rotate_stack(l **list)
{
    l *current = (*list);
    int first_value = current->value;

    while((*list)->next)
    {
        (*list)->value = (*list)->next->value;
        (*list) = (*list)->next;
    }
    (*list)->value = first_value;
    (*list) = current;

}