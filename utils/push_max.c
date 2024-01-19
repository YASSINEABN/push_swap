#include "../push_swap.h"

void	push_max(int size_stack_b, int *max, int *pos_of_max, l **stack_a,
		l **stack_b, int *st, int *sorted_list)
{
	*max = sorted_list[*st];
	*pos_of_max = pos(*stack_b, *max);
	find_best_move(stack_a, stack_b, *pos_of_max, size_stack_b);
	(*st)--;
}