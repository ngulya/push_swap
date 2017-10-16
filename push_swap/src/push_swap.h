/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 22:42:32 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/15 22:42:33 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "get_next_line.h"
# include "../libft/libft.h"

# define ERR ft_putstr("Error\n"); exit(1);
# define OK ft_putstr("OK\n"); exit(1);
# define KO ft_putstr("KO\n"); exit(1);

typedef struct		s_stek
{
	int				dig;
	int				ok;
	struct s_stek	*next;
}					t_stek;

typedef struct		s_ans
{
	int				valid;
	int				vuv;
	struct s_ans	*next;
}					t_ans;

t_stek				*clean(t_stek **list);
t_stek				*pa(t_stek **a, t_stek **b);
t_stek				*pb(t_stek **a, t_stek **b);
int					clean_all_stek(t_stek **list);
int					correctsort(t_stek *a);
int					formintomax(t_stek **a, t_stek **b);
void				sa(t_stek **list);
void				sb(t_stek **list);
void				ss(t_stek **a, t_stek **b);
void				ra(t_stek **list);
void				rb(t_stek **list);
void				rr(t_stek **a, t_stek **b);
void				rra(t_stek **a);
void				rrb(t_stek **b);
void				rrr(t_stek **a, t_stek **b);
void				command(t_stek **a, t_stek **b, char **line);
int					zap_in_stack_a(char **argv, t_stek **list);
int					opor_el(t_stek *list, int i, int first);
int					func_show_answer(t_ans *s);
void				func_write_answer(t_ans **a, int i);
t_stek				*sorting_oa(t_stek **a, t_stek **b, t_ans **ans, int opor);
t_stek				*sorting_ob(t_stek **a, t_stek **b, t_ans **ans, int opor);
t_ans				*func_optimization(t_ans **ans);
t_stek				*sort_three_a(t_stek **a, t_stek **b, int len, t_ans **ans);
int					correct_sort(t_stek *list, int len);
t_stek				*sort_three_b(t_stek **a, t_stek **b, int len, t_ans **ans);
int					all_int_atack(t_stek **a);
t_stek				*now_big(t_stek **a, t_stek **b, t_ans **ans, int opor);
t_stek				*next_dig(t_stek **a, t_stek **b, int opor, t_ans **ans);
int					num_all_b(t_stek **b);
t_stek				*recurs_a(t_stek **a, t_stek **b, int la, t_ans **ans);
t_stek				*recurs_first(t_stek **a, t_stek **b, int la, t_ans **ans);
t_stek				*recurs_b(t_stek **a, t_stek **b, int lb, t_ans **ans);
void				obnul_first_opor(int *first_el, \
					int *opor, int la, t_stek **a);
void				func_obnulay(int *la, int *lb, int *tmp, int *l_a);
void				nulllll(int *l_b, int *lb, int *la, int *tmp);
#endif
