/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:38 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:44:39 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

l	*min_list(l *list)
{
	int min = list->value;
	while (list)
	{
		if (min > list->value)
			min = list->value;
		list = list->next;
	}
	l *node = malloc(sizeof(l));
	node->value = min;
	node->next = NULL;
	return (node);
}