/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:15 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 14:44:16 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_list_new(l **list, int a)
{
	l *current;
	current = *list;
	l *node = malloc(sizeof(l));
	node->value = a;
	node->next = NULL;
	while (current->next)
		current = current->next;
	current->next = node;
}