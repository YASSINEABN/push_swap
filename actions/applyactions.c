/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   applyactions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:00 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 19:47:56 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	apply_actions(char *action, t_l **stack_a, t_l **stack_b)
{
	if (!ft_strcmp(action, "pb"))
		pb(stack_a, stack_b);
	if (!ft_strcmp(action, "pa"))
		pa(stack_a, stack_b);
	if (!ft_strcmp(action, "ra"))
	{
		write(1,"ra\n",3);
		ra(stack_a);
	}
	if (!ft_strcmp(action, "rb"))
	{
		write(1,"rb\n",3);
		rb(stack_b);
	}
	if (!ft_strcmp(action, "rrb"))
		rrb(stack_b);
	if (!ft_strcmp(action, "rra"))
		rra(stack_a);
	if (!ft_strcmp(action, "rr"))
		rr(stack_a, stack_b);
	if (!ft_strcmp(action, "sa"))
		sa(stack_a);
}
