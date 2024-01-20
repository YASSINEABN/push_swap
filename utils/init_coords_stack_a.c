#include "../push_swap.h"

void	init_coords_stack_a(c_stacka **stack, l *stack_b)
{
	(*stack)->m = 0;
	(*stack)->st = size(stack_b) - 1;
}