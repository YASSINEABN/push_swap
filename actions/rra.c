/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:48:15 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:27:22 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_l **stack_a)
{
	t_l	*last_node;
	t_l	*first_node;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last_node = *stack_a;
	while (last_node->next->next)
		last_node = last_node->next;
	first_node = last_node->next;
	last_node->next = NULL;
	first_node->next = *stack_a;
	*stack_a = first_node;
	write(1,"rra\n",4);
}
