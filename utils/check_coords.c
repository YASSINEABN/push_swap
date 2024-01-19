#include "../push_swap.h"

void	check_coords(int *start, int offset, int *end, l **stack_a,int i)
{

	*start -= offset;
	if (start < 0)
		*start = 0;

	*end += offset;
	if (*end == i)
		*end = i - 1;
}