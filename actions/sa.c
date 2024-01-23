/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:46 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 13:57:03 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(l **list)
{
	int	val;

	val = (*list)->value;
	(*list)->value = (*list)->next->value;
	(*list)->next->value = val;
	printf("sa\n");
}
