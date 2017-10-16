/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 13:36:43 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/22 13:36:44 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek		*pb(t_stek **a, t_stek **b)
{
	t_stek	*tmp;

	if (*a && *b)
	{
		tmp = *a;
		(*a) = (*a)->next;
		tmp->next = *b;
		return (tmp);
	}
	else if (!(*b) && (*a))
	{
		tmp = *a;
		(*a) = (*a)->next;
		tmp->next = NULL;
		return (tmp);
	}
	return (*b);
}
