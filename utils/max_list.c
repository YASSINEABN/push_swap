/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:36 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:44:37 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

l	*max_list(l *list)
{
	int	max;
	l	*node;

	max = list->value;
	while (list)
	{
		if (max < list->value)
			max = list->value;
		list = list->next;
	}
	node = malloc(sizeof(l));
	node->value = max;
	node->next = NULL;
	return (node);
}
