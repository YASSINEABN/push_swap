/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:24:34 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 17:37:14 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	free_stacks(l **stack)
{
	l	*tmp;
	l	*current;

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

int	main(int argc, char const *argv[])
{
	l		*stack_a;
	l		*stack_b;
	char	**arg;
	int		*sl;

	arg = (char **)argv;
	stack_a = NULL;
	stack_b = NULL;
	arg++;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		arg = ft_split(argv[1], ' ');
	init_stack_a(&stack_a, arg);
	sl = sorted_array(stack_a);
	if (!sorted_list(stack_a))
	{
		if (size(stack_a) == 2)
			sa(&stack_a);
		else if (size(stack_a) == 3)
			sorted_list_three(&stack_a);
		else if (size(stack_a) == 5)
			five_sort(&stack_a, &stack_b);
		else
			large_sort(&stack_a, &stack_b, sl);
	}
	free_stacks(&stack_a);
	free(sl);
	return (0);
}
