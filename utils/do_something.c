/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_something.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:04 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:59:49 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_mid(int val, int *p, t_coords *coords)
{
	if (val < p[coords->midd])
		return (1);
	return (0);
}

void	do_something(t_l **stack_a, t_l **stack_b, t_coords *coords,
		int *sorted_list)
{
	if (check_mid((*stack_a)->value, sorted_list, coords))
	{
		apply_actions("pb", stack_a, stack_b);
		if ((*stack_a) != NULL && !(check_value(sorted_list, coords,
					(*stack_a)->value)))
			apply_actions("rr", stack_a, stack_b);
		else
			apply_actions("rb", stack_a, stack_b);
	}
	else
		apply_actions("pb", stack_a, stack_b);
}
