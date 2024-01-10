#include "../push_swap.h"

void push_a(l **stack_a, l **stack_b)
{
    if (*stack_b == NULL) {
        return;
    }
    l *temp = *stack_b;
    *stack_b = (*stack_b)->next;

    temp->next = *stack_a;
    *stack_a = temp;
}