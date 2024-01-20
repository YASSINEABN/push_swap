#include "../push_swap.h"

void	push_max( c_stacka **stack , int *pos_of_max, l **stack_a, l **stack_b, int *sorted_list)
{
	(*stack)->max = sorted_list[(*stack)->st];
	*pos_of_max = pos(*stack_b, (*stack)->max);
	find_best_move(stack_a, stack_b, *pos_of_max, size(*stack_b));
	(*stack)->st--;
}