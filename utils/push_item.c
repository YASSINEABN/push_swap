#include "../push_swap.h"

void	push_item(int val, int max, l **stack_a, l **stack_b, int *tmp, int *m,
		int *st)
{
	if (val != max)
	{
		apply_actions("pa", stack_a, stack_b);
		apply_actions("ra", stack_a, stack_b);
		*m = 1;
		*tmp = val;
	}

	else
	{
		apply_actions("pa", stack_a, stack_b);
		(*st)--;
	}
}