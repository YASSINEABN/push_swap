#include "../push_swap.h"

void	ft_list_new(l **list, int a)
{
	l *current;
	current = *list;
	l *node = malloc(sizeof(l));
	node->value = a;
	node->next = NULL;
	while (current->next)
		current = current->next;
	current->next = node;
}