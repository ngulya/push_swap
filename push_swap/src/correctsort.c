/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correctsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 17:58:18 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/30 17:58:19 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		recfuns_findc(t_stek *a, t_stek *next)
{
	if (!next)
		return (1);
	else if (a && next && a->dig < next->dig)
		return (recfuns_findc(next, next->next));
	return (0);
}

int		correctsort(t_stek *a)
{
	t_stek	*tmp;

	tmp = a;
	if (tmp)
	{
		if (recfuns_findc(tmp, tmp && tmp->next ? tmp->next : NULL))
			return (1);
	}
	return (0);
}
