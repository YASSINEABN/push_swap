#include "../push_swap.h"
# include <limits.h> 
static long	ft_atol(const char *s) //Define a function that converts every string into a long value
{
	long	result;
	int		sign;

	result = 0;
	sign = 1; 
	while (*s == ' ' || *s == '\t' || *s == '\n' || \
			*s == '\r' || *s == '\f' || *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
		result = result * 10 + (*s++ - '0');
	return (result * sign);
}

static void	append_node(l **stack, int n) //Define a function that searches for the last node to append to the linked list
{
	l	*node; //To store a pointer to the new node to be created with the value `n`
	l	*last_nodee; //To store a pointer to the current last node of the stack

	if (!stack)
		return ;
	node = malloc(sizeof(l)); //Allocate memory for the new node
	if (!node)
		return ;
	node->next = NULL; //Set the next pointer of the new node to NULL because it will be the last node in the list
	node->value = n; //Set the `next` data of of the new node to `n` value
	if (!(*stack)) //Check if the stack is empty or currently pointing to NULL, indicating a first node needs to be found
	{
		*stack = node; //If empty, update the pointer *stack to point to the node, effectively making it the new head of the linked list
	}
	else //If the stack is not empty, it means there are existing nodes in the linked list
	{
		last_nodee = last_node(*stack); //In which case, find the last node
		last_nodee->next = node; //Append the new node to the last node
	}
}

void	init_stack_a(l **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i]))
			free_errors(a);
		n = ft_atol(argv[i]);
		if (n > INT_MAX || n < INT_MIN) //Check for overflow
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a); 
		append_node(a, (int)n); //If no errors, append the node to the linked list by, taking a pointer to stack `a`, create a new node and assign `n` to that new node
		i++;
	}
}
