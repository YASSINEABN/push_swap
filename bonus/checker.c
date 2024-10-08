/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:20:13 by yaboulan          #+#    #+#             */
/*   Updated: 2024/02/21 23:25:52 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "bonus.h"

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

void	execute2(t_l **stack_a, t_l **stack_b, char *line)
{
	if (!ft_strcmp(line, "pb\n"))
		pb(stack_a, stack_b, 1);
	if (!ft_strcmp(line, "rr\n"))
		rr(stack_a, stack_b, 1);
	if (!ft_strcmp(line, "rrr\n"))
	{
		rra(stack_a, 1);
		rrb(stack_b, 1);
	}
	if (!ft_strcmp(line, "ss\n"))
	{
		sa(stack_a, 1);
		sb(stack_b, 1);
	}
}

void	execute(t_l **stack_a, t_l **stack_b, char *line)
{
	if (!ft_strcmp(line, "ra\n"))
		ra(stack_a);
	if (!ft_strcmp(line, "rb\n"))
		rb(stack_b);
	if (!ft_strcmp(line, "sa\n"))
		sa(stack_a, 1);
	if (!ft_strcmp(line, "sb\n"))
		sb(stack_b, 1);
	if (!ft_strcmp(line, "rra\n"))
		rra(stack_a, 1);
	if (!ft_strcmp(line, "rrb\n"))
		rrb(stack_b, 1);
	if (!ft_strcmp(line, "pa\n"))
		pa(stack_a, stack_b, 1);
	execute2(stack_a, stack_b, line);
}

int	main(int argc, char *argv[])
{
	t_l		*stack_a;
	t_l		*stack_b;
	char	*line;
	int		check;

	check = 0;
	init_stacks(&stack_a, &stack_b);
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else
		init_stack_a(&stack_a, argv + 1, argc);
	line = get_next_line(0);
	process_line(&stack_a, &stack_b, &line, &check);
	check_error(check, stack_a, stack_b);
	free_stacks(&stack_a);
	free_stacks(&stack_b);
	free(line);
	return (0);
}
