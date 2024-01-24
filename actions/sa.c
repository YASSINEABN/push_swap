/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:46 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:50:49 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_l **list)
{
	int	val;

	val = (*list)->value;
	(*list)->value = (*list)->next->value;
	(*list)->next->value = val;
	write(1,"sa\n",3);
}
