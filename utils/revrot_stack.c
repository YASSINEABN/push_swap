#include "../push_swap.h"
 void revrot_stack(l **list)
{
    swap_stack(list);
    rotate_stack(list);
    swap_stack(list);
}

