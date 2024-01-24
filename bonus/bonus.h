/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:36:35 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/24 16:45:02 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "../push_swap.h"

void	process_line(t_l **stack_a, t_l **stack_b, char **line, int *check);
void	check_error(int check, t_l *stack_a, t_l *stack_b);
int		check_command(char *line, int *check);
void	execute(t_l **stack_a, t_l **stack_b, char *line);
void	execute2(t_l **stack_a, t_l **stack_b, char *line);

#endif
