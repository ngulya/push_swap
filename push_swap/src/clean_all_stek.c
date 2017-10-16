/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_all_stek.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 11:39:59 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/23 11:40:00 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		clean_all_stek(t_stek **list)
{
	t_stek	*t;

	if (!(*list))
		return (0);
	while (*list)
	{
		if ((*list)->next)
		{
			t = (*list);
			(*list) = (*list)->next;
			t->next = NULL;
			if (t)
				free(t);
			t = NULL;
		}
		else
		{
			(*list)->next = NULL;
			free((*list));
			(*list) = NULL;
			return (1);
		}
	}
	return (1);
}
