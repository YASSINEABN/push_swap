/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:41 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:25:08 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(l **list)
{
	l	*current;
	int	first_value;

	current = (*list);
	first_value = current->value;
	while ((*list)->next)
	{
		(*list)->value = (*list)->next->value;
		(*list) = (*list)->next;
	}
	(*list)->value = first_value;
	(*list) = current;
}
