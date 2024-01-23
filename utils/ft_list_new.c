/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:15 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:27:45 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_list_new(t_l **list, int a)
{
	t_l	*current;
	t_l	*node;

	current = *list;
	node = malloc(sizeof(t_l));
	node->value = a;
	node->next = NULL;
	while (current->next)
		current = current->next;
	current->next = node;
}
