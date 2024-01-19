#include "../push_swap.h"

int	size(l *list)
{
	int count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}