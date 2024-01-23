/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:43:54 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:51:49 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_list_value(t_l *stack_a, t_coords *coords, int *p)
{
	while (stack_a)
	{
		if (check_value(p, coords, stack_a->value))
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}
