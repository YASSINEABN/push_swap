/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:38 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:28:20 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

t_l	*min_list(t_l *list)
{
	int	min;
	t_l	*node;

	min = list->value;
	while (list)
	{
		if (min > list->value)
			min = list->value;
		list = list->next;
	}
	node = malloc(sizeof(t_l));
	node->value = min;
	node->next = NULL;
	return (node);
}
