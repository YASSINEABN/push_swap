#include "../push_swap.h"

void	find_best_move(l **stack_a, l **stack_b, int pos, int size)
{
	if (pos > size / 2)
	{
		pos = size - pos;
		pos++;
		while (pos--)
			apply_actions("rrb", stack_a, stack_b);
	}
	else
	{
		while (pos-- > 1)
			apply_actions("rb", stack_a, stack_b);
	}
	apply_actions("pa", stack_a, stack_b);
}
