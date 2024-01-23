/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:43:56 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:51:59 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_max(t_l **list, int pos)
{
	t_l	*stack_b;

	if (pos == 0)
	{
		apply_actions("ra", list, &stack_b);
	}
	else if (pos == 1)
	{
		rra(list);
	}
}
