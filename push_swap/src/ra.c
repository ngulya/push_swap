/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 13:51:47 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/22 13:51:48 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ra(t_stek **list)
{
	int		tmp;
	t_stek	*top;

	top = *list;
	if (top && top->next)
	{
		tmp = top->dig;
		while (top && top->next)
		{
			top->dig = top->next->dig;
			top = top->next;
		}
		top->dig = tmp;
	}
}
