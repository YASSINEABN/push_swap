/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:34 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 15:58:15 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

l	*last_node(l *stack_a)
{
	l	*tmp;

	tmp = stack_a;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
