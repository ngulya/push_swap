/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:14:52 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/07 15:14:52 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		correct_sort(t_stek *list, int len)
{
	t_stek	*a;
	int		l;

	l = len;
	a = list;
	if (l == 1 || l == 0)
		return (1);
	while (a && a->next && l > 0)
	{
		if (a->dig > a->next->dig)
			return (0);
		a = a->next;
		l--;
	}
	return (1);
}
