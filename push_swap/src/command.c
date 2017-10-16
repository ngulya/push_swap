/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 16:17:06 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/22 16:17:07 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		funcforcommandinche(t_stek **a, t_stek **b, char **line)
{
	clean_all_stek(b);
	clean_all_stek(a);
	free(*line);
	ERR;
}

void		command(t_stek **a, t_stek **b, char **line)
{
	if (!ft_strcmp("sa", *line))
		sa(a);
	else if (!ft_strcmp("sb", *line))
		sb(b);
	else if (!ft_strcmp("ss", *line))
		ss(a, b);
	else if (!ft_strcmp("pa", *line))
		*a = pa(a, b);
	else if (!ft_strcmp("pb", *line))
		*b = pb(a, b);
	else if (!ft_strcmp("ra", *line))
		ra(a);
	else if (!ft_strcmp("rb", *line))
		rb(b);
	else if (!ft_strcmp("rr", *line))
		rr(a, b);
	else if (!ft_strcmp("rra", *line))
		rra(a);
	else if (!ft_strcmp("rrb", *line))
		rrb(b);
	else if (!ft_strcmp("rrr", *line))
		rrr(a, b);
	else
		funcforcommandinche(a, b, line);
	free(*line);
}
