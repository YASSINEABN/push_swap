/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:43 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:44:44 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pos(l *stack_a, int value)
{
	int pos = 1;
	while (stack_a)
	{
		if (stack_a->value == value)
			return (pos);
		pos++;
		stack_a = stack_a->next;
	}
	return (0);
}