#include "../push_swap.h"

void	init_coords_stack_a(c_stacka **stack, l *stack_b, int *sorted_list)
{
	(*stack)->m = 0;
	(*stack)->st = size(stack_b) - 1;
	(*stack)->pos_of_max = pos(stack_b, sorted_list[(*stack)->st]);
}