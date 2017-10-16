/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 13:12:35 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/10 13:12:35 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek		*write_in_a(t_stek **a, t_stek **b, int len, t_ans **ans)
{
	int		l;

	l = len;
	while (l > 0 && *b)
	{
		func_write_answer(ans, 4);
		*a = pa(a, b);
		l--;
	}
	return (*b);
}

int			correct_sort_b(t_stek *list, int len)
{
	t_stek	*b;
	int		l;

	l = len;
	b = list;
	if (l == 1 || l == 0)
		return (1);
	while (b && b->next && l > 0)
	{
		if (b->dig < b->next->dig)
			return (0);
		b = b->next;
		l--;
	}
	return (1);
}

t_stek		*now_di(t_stek **a, t_stek **b, int len, t_ans **ans)
{
	t_stek	*tmp_s;

	tmp_s = *b;
	if (tmp_s->dig < tmp_s->next->dig)
	{
		func_write_answer(ans, 2);
		sb(b);
		return (write_in_a(a, b, len, ans));
	}
	*a = pa(a, b);
	func_write_answer(ans, 4);
	sb(b);
	func_write_answer(ans, 2);
	*a = pa(a, b);
	func_write_answer(ans, 4);
	sa(a);
	func_write_answer(ans, 1);
	*a = pa(a, b);
	func_write_answer(ans, 4);
	return (*b);
}

t_stek		*two(t_stek **a, t_stek **b, int len, t_ans **ans)
{
	t_stek	*tmp_s;

	tmp_s = *b;
	if (tmp_s->dig < tmp_s->next->dig)
	{
		func_write_answer(ans, 2);
		sb(b);
	}
	return (write_in_a(a, b, len, ans));
}

t_stek		*sort_three_b(t_stek **a, t_stek **b, int len, t_ans **ans)
{
	int		opor;
	t_stek	*tmp_s;
	int		l;

	l = len;
	if (l <= 0)
		return (*b);
	opor = opor_el(*b, len, 2);
	if (correct_sort_b(*b, len))
		return (write_in_a(a, b, len, ans));
	tmp_s = *b;
	l = num_all_b(b);
	if (len == 2)
		return (two(a, b, len, ans));
	if (l == len)
		return (sorting_ob(a, b, ans, opor));
	if (tmp_s->next->dig == opor)
		return (next_dig(a, b, opor, ans));
	if (tmp_s->dig == opor)
		return (now_di(a, b, len, ans));
	if (tmp_s->dig < opor || tmp_s->dig > opor)
		return (now_big(a, b, ans, opor));
	return (*b);
}
