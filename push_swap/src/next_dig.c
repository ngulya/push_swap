/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_dig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:31:25 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/13 14:31:25 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek		*next_dig(t_stek **a, t_stek **b, int opor, t_ans **ans)
{
	t_stek	*tmp_s;

	tmp_s = *b;
	if (tmp_s->next->dig == opor)
	{
		func_write_answer(ans, 7);
		func_write_answer(ans, 2);
		rb(b);
		sb(b);
		*a = pa(a, b);
		*a = pa(a, b);
		func_write_answer(ans, 4);
		func_write_answer(ans, 4);
		if ((*b)->next)
		{
			func_write_answer(ans, 10);
			rrb(b);
		}
		func_write_answer(ans, 4);
		*a = pa(a, b);
		return (*b);
	}
	return (*b);
}
