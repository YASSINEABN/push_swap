/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:41 by yaboulan          #+#    #+#             */
/*   Updated: 2024/02/14 14:57:11 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_l **list)
{
	t_l	*current;
	int	first_value;

	if (*list == NULL || (*list)->next == NULL)
		return ;
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
