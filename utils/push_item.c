#include "../push_swap.h"

void	push_item(l **stack_a, l **stack_b,c_stacka **stack )
{
	int val = (*stack_b)->value; 
	if (val != (*stack)->max)
	{
		apply_actions("pa", stack_a, stack_b);
		apply_actions("ra", stack_a, stack_b);
		(*stack)->m = 1;
		(*stack)->tmp = val;
	}

	else
	{
		apply_actions("pa", stack_a, stack_b);
		(*stack)->st--;
	}
}