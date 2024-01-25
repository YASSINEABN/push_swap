/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:48:50 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 21:28:32 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

void	ft_free(char **argv)
{
	int	i;

	i = 0;
	if (NULL == argv || NULL == *argv)
		return ;
	while (argv[i])
		free(argv[i++]);
	free(argv);
	argv = NULL;
}

static long	ft_atol(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\f'
		|| *s == '\v')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (ft_isdigit(*s))
		result = result * 10 + (*s++ - '0');
	return (result * sign);
}

static void	append_node(t_l **stack, int n)
{
	t_l	*node;
	t_l	*last_nodee;

	if (!stack)
		return ;
	node = malloc(sizeof(t_l));
	if (!node)
		return ;
	node->next = NULL;
	node->value = n;
	if (!(*stack))
	{
		*stack = node;
	}
	else
	{
		last_nodee = last_node(*stack);
		last_nodee->next = node;
	}
}

void	init_stack_a(t_l **a, char **argv,int ac)
{
	long	n;
	int		i;

	i = 0;
	char **h;
	int k;
	k = 0;
	while( i < ac - 1)
	{
		h = ft_split(argv[i], ' ');
		k = 0;
		while(h[k])
		{
			if (error_syntax(h[k]))
			free_errors(a);
	 	n = ft_atol(h[k]);
		if (n > INT_MAX || n < INT_MIN)
	 		free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		k++;
		}
		ft_free(h);
		i++;
	}
}
