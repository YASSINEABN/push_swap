/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:44:52 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/23 17:13:56 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdlib.h>

void	ft_swap(int *i, int *j)
{
	int	swap;

	if (*i > *j)
	{
		swap = *i;
		*i = *j;
		*j = swap;
	}
}

int	*sorted_array(l *list)
{
	int	*tab;
	int	i;
	int	j;
	int	k;

	tab = malloc(size(list) * sizeof(int));
	i = 0;
	while (list)
	{
		tab[i++] = list->value;
		list = list->next;
	}
	j = i;
	i = 0;
	while (i < j)
	{
		k = i + 1;
		while (k < j)
		{
			ft_swap(&tab[i], &tab[k]);
			k++;
		}
		i++;
	}
	return (tab);
}
