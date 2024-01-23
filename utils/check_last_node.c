/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_last_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:43:51 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:51:38 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_lastnode(t_l *stack_a, int a)
{
	while (stack_a->next)
	{
		stack_a = stack_a->next;
	}
	if (stack_a->value > a)
		return (0);
	else
		return (1);
}
