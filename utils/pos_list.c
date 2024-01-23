/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:41 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:54:57 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pos_list(int max, t_l *list)
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
