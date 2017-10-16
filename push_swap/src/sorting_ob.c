/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_ob.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:10:54 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/07 15:10:54 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek	*pa_fromb(t_stek **a, t_stek **b, t_ans **ans)
{
	*a = pa(a, b);
	*a = pa(a, b);
	*a = pa(a, b);
	func_write_answer(ans, 4);
	func_write_answer(ans, 4);
	func_write_answer(ans, 4);
	return (*a);
}

t_stek	*next_opor(t_stek **a, t_stek **b, t_ans **ans, int opor)
{
	rb(b);
	sb(b);
	func_write_answer(ans, 7);
	func_write_answer(ans, 2);
	return (sorting_ob(a, b, ans, opor));
}

t_stek	*sorting_ob(t_stek **a, t_stek **b, t_ans **ans, int opor)
{
	if ((*b)->dig > opor && (*b)->next->dig == opor)
		return (pa_fromb(a, b, ans));
	if ((*b)->dig < opor && (*b)->next->dig == opor)
		return (next_opor(a, b, ans, opor));
	if ((*b)->dig == opor && (*b)->next->dig < opor)
	{
		rrb(b);
		func_write_answer(ans, 10);
		return (sorting_ob(a, b, ans, opor));
	}
	if ((*b)->dig == opor && (*b)->next->dig > opor)
	{
		sb(b);
		func_write_answer(ans, 2);
		return (sorting_ob(a, b, ans, opor));
	}
	if (((*b)->dig < opor && (*b)->next->dig > opor) \
		|| ((*b)->dig > opor && (*b)->next->dig < opor))
	{
		rb(b);
		func_write_answer(ans, 7);
		return (sorting_ob(a, b, ans, opor));
	}
	return (*a);
}
