#include "../push_swap.h"

void rotate_stack_large(l **stack_a) {
    if (*stack_a == NULL || (*stack_a)->next == NULL) {
        // Nothing to rotate if the stack is empty or has only one element
        return;
    }

    l *lastNode = *stack_a;
    while (lastNode->next->next) {
        lastNode = lastNode->next;
    }

    // Move the last node to the front
    l *firstNode = lastNode->next;
    lastNode->next = NULL;
    firstNode->next = *stack_a;
    *stack_a = firstNode;
}