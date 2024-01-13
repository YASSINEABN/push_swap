#include "../push_swap.h"

void push_b(l **stack_a, l **stack_b)
{
    // if (*stack_a == NULL) {
    //     // If stack_a is empty, there's nothing to push
    //     return;
    // }

    // Pop from stack_a
    l *temp = *stack_a;
    *stack_a = (*stack_a)->next;

    // Push to stack_b
    temp->next = *stack_b;
    *stack_b = temp;
}