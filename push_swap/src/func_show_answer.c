/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_show_answer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 17:45:13 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/06 17:45:14 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		func_show_answer(t_ans *s)
{
	if (!s || (s && s->vuv == 0) || (s && s->valid == 0))
		return (0);
	if (s->vuv == 1 && s->valid == 1)
		ft_putstr("sa\n");
	if (s->vuv == 2 && s->valid == 1)
		ft_putstr("sb\n");
	if (s->vuv == 3 && s->valid == 1)
		ft_putstr("ss\n");
	if (s->vuv == 4 && s->valid == 1)
		ft_putstr("pa\n");
	if (s->vuv == 5 && s->valid == 1)
		ft_putstr("pb\n");
	if (s->vuv == 6 && s->valid == 1)
		ft_putstr("ra\n");
	if (s->vuv == 7 && s->valid == 1)
		ft_putstr("rb\n");
	if (s->vuv == 8 && s->valid == 1)
		ft_putstr("rr\n");
	if (s->vuv == 9 && s->valid == 1)
		ft_putstr("rra\n");
	if (s->vuv == 10 && s->valid == 1)
		ft_putstr("rrb\n");
	if (s->vuv == 11 && s->valid == 1)
		ft_putstr("rrr\n");
	return (1);
}
