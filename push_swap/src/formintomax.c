/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formintomax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 16:31:12 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/22 16:31:12 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		recfuns_find(t_stek *a, t_stek *next)
{
	if (!next)
		return (1);
	else if (a->dig < next->dig)
		return (recfuns_find(next, next->next ? next->next : NULL));
	return (0);
}

int		formintomax(t_stek **a, t_stek **b)
{
	if ((!(*b)) && (*a))
	{
		if (recfuns_find(*a, (*a)->next ? (*a)->next : NULL))
			return (1);
	}
	return (0);
}
