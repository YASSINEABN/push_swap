#include "../push_swap.h"
int	check_mid(int val, int *p, coords *coords)
{
	if (val < p[coords->midd])
		return 1;
	return (0);
}
void	do_something(l **stack_a, l **stack_b, coords *coords, int *sorted_list)
{
	if (check_mid((*stack_a)->value,sorted_list,coords))
	{
		apply_actions("pb", stack_a, stack_b);
		if ((*stack_a) != NULL && !(check_value(sorted_list, coords,
					(*stack_a)->value)))
			apply_actions("rr", stack_a, stack_b);
		else
			apply_actions("rb", stack_a, stack_b);

	}
	else
		apply_actions("pb", stack_a, stack_b);
}
