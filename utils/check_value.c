#include "../push_swap.h"

int	check_value(int *p, int start, int end, int a)
{

	while (start <= end)
	{
		if (p[start] == a)
			return (1);
		start++;
	}

	return (0);
}