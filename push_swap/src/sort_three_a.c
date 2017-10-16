/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:13:22 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/07 15:13:22 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek	*first_next_opor(t_stek **a, t_stek **b, t_ans **ans)
{
	*b = pb(a, b);
	*b = pb(a, b);
	sb(b);
	*a = pa(a, b);
	*a = pa(a, b);
	func_write_answer(ans, 5);
	func_write_answer(ans, 5);
	func_write_answer(ans, 2);
	func_write_answer(ans, 4);
	func_write_answer(ans, 4);
	return (*a);
}

t_stek	*first_opor_anuncco(t_stek **a, t_stek **b, t_ans **ans, t_stek *tmp_s)
{
	if (tmp_s->dig < tmp_s->next->dig)
	{
		func_write_answer(ans, 5);
		func_write_answer(ans, 1);
		func_write_answer(ans, 4);
		*b = pb(a, b);
		sa(a);
		*a = pa(a, b);
	}
	sa(a);
	func_write_answer(ans, 1);
	return (*a);
}

void	namefuncnae(t_stek **a, t_stek **b, int len, t_ans **ans)
{
	if (!(correct_sort(*a, len)))
	{
		*b = pb(a, b);
		sa(a);
		*a = pa(a, b);
		func_write_answer(ans, 5);
		func_write_answer(ans, 1);
		func_write_answer(ans, 4);
	}
}

t_stek	*lentwo(t_stek **a, t_ans **ans, t_stek **b, int len)
{
	int		opor;
	int		l;

	l = all_int_atack(a);
	opor = opor_el(*a, len, 2);
	if (len == 2)
	{
		if ((*a)->dig > (*a)->next->dig)
		{
			func_write_answer(ans, 1);
			sa(a);
		}
	}
	else if (l == len && len == 3)
		(*a) = sorting_oa(a, b, ans, opor);
	return (*a);
}

t_stek	*sort_three_a(t_stek **a, t_stek **b, int len, t_ans **ans)
{
	int		opor;
	t_stek	*tmp_s;
	int		l;

	if (len == 0 || correct_sort(*a, len))
		return (*a);
	opor = opor_el(*a, len, 2);
	tmp_s = *a;
	l = all_int_atack(a);
	if (len == 2 || (l == len && len == 3))
		return (lentwo(a, ans, b, len));
	else if (l > len)
	{
		if (tmp_s->next->dig == opor)
			*a = first_next_opor(a, b, ans);
		if (tmp_s->dig == opor && !(correct_sort(*a, len)))
			return (first_opor_anuncco(a, b, ans, tmp_s));
		if (!(correct_sort(*a, len)) && tmp_s->dig > opor)
		{
			sa(a);
			func_write_answer(ans, 1);
		}
		namefuncnae(a, b, len, ans);
	}
	return (*a);
}
