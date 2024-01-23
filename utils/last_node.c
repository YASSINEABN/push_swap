/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:34 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:23:38 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_l	*last_node(t_l *stack_a)
{
	t_l	*tmp;

	tmp = stack_a;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
