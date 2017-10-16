/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   now_big.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 14:32:51 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/13 14:32:52 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek		*now_big(t_stek **a, t_stek **b, t_ans **ans, int opor)
{
	t_stek	*tmp_s;

	tmp_s = *b;
	if (tmp_s->dig < opor)
	{
		func_write_answer(ans, 2);
		sb(b);
	}
	if (tmp_s->dig > opor)
	{
		*a = pa(a, b);
		sb(b);
		*a = pa(a, b);
		*a = pa(a, b);
		func_write_answer(ans, 4);
		func_write_answer(ans, 2);
		func_write_answer(ans, 4);
		func_write_answer(ans, 4);
	}
	return (*b);
}
