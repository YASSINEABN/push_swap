#include "../push_swap.h"

void	first_push( l **stack_a, l **stack_b, int *sorted_list,
		int *pos_of_max, int size_stack_b, int *st)
{
	*pos_of_max = pos(*stack_b, sorted_list[*st]);
	find_best_move(stack_a, stack_b, *pos_of_max, size_stack_b);
	--*st;
}