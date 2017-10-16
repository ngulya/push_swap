/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 13:09:07 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/22 13:09:07 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek		*clean(t_stek **list)
{
	t_stek	*tmp;
	t_stek	*t;

	tmp = *list;
	if (tmp)
	{
		if (tmp->next)
		{
			t = tmp;
			tmp = tmp->next;
			t->next = NULL;
			free(t);
			t = NULL;
		}
		else
		{
			tmp->next = NULL;
			free(tmp);
			tmp = NULL;
		}
	}
	return (tmp);
}
