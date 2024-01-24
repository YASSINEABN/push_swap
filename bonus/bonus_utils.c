/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:43:02 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/24 16:43:44 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "bonus.h"

void	process_line(t_l **stack_a, t_l **stack_b, char **line, int *check)
{
	while (*line)
	{
		if (!check_command(*line, check))
			break ;
		execute(stack_a, stack_b, *line);
		free(*line);
		*line = get_next_line(0);
	}
}

void	check_error(int check, t_l *stack_a, t_l *stack_b)
{
	if (check == 1)
		write(1, "Error\n", 6);
	else if (sorted_list(stack_a) && !(stack_b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	check_command(char *line, int *check)
{
	if (!ft_strcmp(line, "ra\n"))
		return (1);
	else if (!ft_strcmp(line, "rb\n"))
		return (1);
	else if (!ft_strcmp(line, "sa\n"))
		return (1);
	else if (!ft_strcmp(line, "sb\n"))
		return (1);
	else if (!ft_strcmp(line, "rra\n"))
		return (1);
	else if (!ft_strcmp(line, "rrb\n"))
		return (1);
	else if (!ft_strcmp(line, "pa\n"))
		return (1);
	else if (!ft_strcmp(line, "pb\n"))
		return (1);
	else if (!ft_strcmp(line, "rr\n"))
		return (1);
	else if (!ft_strcmp(line, "rrr\n"))
		return (1);
	else if (!ft_strcmp(line, "ss\n"))
		return (1);
	else
		*check = 1;
	return (0);
}
