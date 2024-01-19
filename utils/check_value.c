#include "../push_swap.h"

int	check_value(int *p, int start, int end, int a, int *t, int mid)
{
	if (*t == 0)
		if (a < p[mid])
			*t = 1;
	while (start <= end)
	{
		if (p[start] == a)
			return (1);
		start++;
	}

	return (0);
}