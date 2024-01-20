#include "../push_swap.h"

int	check_value(int *p, coords *coords, int a)
{
	int start = coords->start;
	while (start <= coords->end)
	{
		if (p[start] == a)
			return (1);
		start++;
	}

	return (0);
}