#include "../push_swap.h"

void	push_max( c_stacka **stack , l **stack_a, l **stack_b, int *sorted_list)
{
	(*stack)->max = sorted_list[(*stack)->st];
	(*stack)->pos_of_max = pos(*stack_b, (*stack)->max);
	find_best_move(stack_a, stack_b, (*stack)->pos_of_max, size(*stack_b));
	(*stack)->st--;
}