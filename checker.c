#include "push_swap.h"

void	init_stacks(t_l **stack_a, t_l **stack_b)
{
	*stack_a = NULL;
	*stack_b = NULL;
}

void	free_stacks(t_l **stack)
{
	t_l	*tmp;
	t_l	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		current->value = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void execute(t_l **stack_a , t_l **stack_b , char *line)
{
    if(!strcmp)

}
int	main(int argc, char *argv[])
{
	t_l	*stack_a;
	t_l	*stack_b;
	int	*sl;
    char *line;

	init_stacks(&stack_a, &stack_b);
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		init_stack_a(&stack_a, ft_split(argv[1], ' '), 1);
	else
		init_stack_a(&stack_a, argv + 1, 0);

    while (line = get_next_line(0))
    {
        execute(&stack_a,&stack_b,line);
    }
    
		
	free_stacks(&stack_a);

	return (0);
}