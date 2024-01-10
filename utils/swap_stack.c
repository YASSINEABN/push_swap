#include "../push_swap.h"
void swap_stack(l **list)
{
    int val = (*list)->value;
    (*list)->value = (*list)->next->value;
    (*list)->next->value = val;
}