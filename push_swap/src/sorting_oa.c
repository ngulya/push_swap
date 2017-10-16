/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_oa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:10:05 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/07 15:10:06 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek	*first_opor(t_stek **a, t_ans **ans)
{
	sa(a);
	func_write_answer(ans, 1);
	return (*a);
}

t_stek	*first_opor_but_an(t_stek **a, t_ans **ans)
{
	rra(a);
	func_write_answer(ans, 9);
	return (*a);
}

t_stek	*sorting_oa(t_stek **a, t_stek **b, t_ans **ans, int opor)
{
	if ((*a)->dig == opor && (*a)->next->dig < opor)
		return (first_opor(a, ans));
	if ((*a)->dig == opor && (*a)->next->dig > opor)
		return (first_opor_but_an(a, ans));
	if ((*a)->next->dig == opor)
	{
		sa(a);
		func_write_answer(ans, 1);
		return (sorting_oa(a, b, ans, opor));
	}
	if ((*a)->dig > opor && (*a)->next->dig < opor)
	{
		ra(a);
		func_write_answer(ans, 6);
		return (*a);
	}
	if ((*a)->dig < opor && (*a)->next->dig > opor)
	{
		rra(a);
		func_write_answer(ans, 9);
		return (sorting_oa(a, b, ans, opor));
	}
	return (*a);
}
