/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboulan <yaboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:18:52 by yaboulan          #+#    #+#             */
/*   Updated: 2024/01/25 16:26:19 by yaboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct List
{
	int			value;
	struct List	*next;
}				t_l;
typedef struct coords
{
	int			midd;
	int			offset;
	int			start;
	int			end;
}				t_coords;
typedef struct coords_stack_a
{
	int			max;
	int			st;
	int			tmp;
	int			m;
	int			pos_of_max;
}				t_cstacka;

void			apply_actions(char *action, t_l **stack_a, t_l **stack_b);
void			pa(t_l **stack_a, t_l **stack_b, int checker);
void			pb(t_l **stack_a, t_l **stack_b, int checker);
int				sorted_list(t_l *list);
void			sorted_list_three(t_l **list);
void			sa(t_l **list, int checker);
void			check_min(t_l **list, int pos);
void			check_max(t_l **list, int pos);
t_l				*last_node(t_l *stack_a);
t_l				*min_list(t_l *list);
int				pos_list(int max, t_l *list);
t_l				*max_list(t_l *list);
void			ra(t_l **list);
void			rb(t_l **list);
int				*sorted_array(t_l *list);
void			rr(t_l **stack_a, t_l **stack_b, int checker);
void			ft_list_new(t_l **list, int a);
int				check_lastnode(t_l *stack_a, int a);
int				check_value(int *p, t_coords *coords, int a);
int				size(t_l *list);
int				pos(t_l *stack_a, int value);
int				check_list_value(t_l *stack_a, t_coords *coords, int *p);
void			find_best_move(t_l **stack_a, t_l **stack_b, int pos, int size);
void			check_coords(t_coords **coords, int i);
void			init_coords_stack_b(int i, t_coords **coords);
void			do_something(t_l **stack_a, t_l **stack_b, t_coords *coords,
					int *sorted_list);
void			make_stack_b(t_l **stack_a, t_l **stack_b, int *sorted_list);
void			init_coords_stack_a(t_cstacka **stack, t_l *stack_b,
					int *sorted_list);
void			first_push(t_l **stack_a, t_l **stack_b, int *sorted_list,
					t_cstacka **stack);
void			rotate_tmp(t_cstacka **stack, t_l **stack_a, t_l **stack_b,
					int *sorted_list);
void			push_max(t_cstacka **stack, t_l **stack_a, t_l **stack_b,
					int *sorted_list);
void			four_sort(t_l **stack_a, t_l **stack_b);
void			push_item(t_l **stack_a, t_l **stack_b, t_cstacka **stack);
void			init_svm(t_cstacka **stack, int *sorted_list);
void			make_stack_a(t_l **stack_a, t_l **stack_b, int *sorted_list);
void			five_sort(t_l **stack_a, t_l **stack_b);
char			**ft_split(char const *s, char c);
void			init_stack_a(t_l **a, char **argv, int ac);
int				error_syntax(char *str_n);
int				error_duplicate(t_l *a, int n);
void			free_stack(t_l **stack);
void			free_errors(t_l **a, char **s);
int				ft_isdigit(int c);
void			large_sort(t_l **stack_a, t_l **stack_b, int *sorted_list);
void			rra(t_l **stack_a, int checker);
void			rrb(t_l **stack_a, int checker);
int				ft_strcmp(char *str_1, char *str_2);
char			*get_next_line(int fd);
void			sb(t_l **list, int checker);
void			process_line(t_l **stack_a, t_l **stack_b, char **line,
					int *check);
void			check_error(int check, t_l *stack_a, t_l *stack_b);
int				check_command(char *line, int *check);

#endif
