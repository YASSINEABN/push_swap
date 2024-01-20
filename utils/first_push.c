#include "../push_swap.h"

void	first_push( l **stack_a, l **stack_b, int *sorted_list, c_stacka **stack)
{
	int st = (*stack)->st;
	find_best_move(stack_a, stack_b, pos(*stack_b, sorted_list[st]), size(*stack_b));
	(*stack)->st--;
}