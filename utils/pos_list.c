/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:41 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 15:47:42 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pos_list(int max, l *list)
{
	int	pos;

	pos = 0;
	while (list)
	{
		if (list->value == max)
			return (pos);
		pos++;
		list = list->next;
	}
	return (0);
}
