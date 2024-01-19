/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:41 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/19 13:51:36 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_stack(l **list)
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

