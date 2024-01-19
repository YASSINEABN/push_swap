#include "../push_swap.h"

void	do_something(int *test,l **stack_a, l **stack_b, int start, int end, int *sorted_list)
{
	if (*test == 1)
	{
		apply_actions("pb", stack_a, stack_b);
		if ((*stack_a) != NULL && !(check_value(sorted_list, start, end,
					(*stack_a)->value)))
			apply_actions("rr", stack_a, stack_b);
		else
			apply_actions("rb", stack_a, stack_b);

	}
	else
		apply_actions("pb", stack_a, stack_b);
}
