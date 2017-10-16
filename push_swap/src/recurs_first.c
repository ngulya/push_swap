/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recurs_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 15:42:08 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/13 15:42:08 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			pb_in_reca_first(t_stek **a, t_stek **b, t_ans **ans, int lb)
{
	lb++;
	func_write_answer(ans, 5);
	*b = pb(a, b);
	return (lb);
}

int			ra_in_reca_first(t_stek **a, t_ans **ans, int la)
{
	la++;
	ra(a);
	func_write_answer(ans, 6);
	return (la);
}

t_stek		*rev_in_a_first(t_stek **a, t_ans **ans, int poz, int l_a)
{
	if (poz < l_a)
	{
		while (poz > 0)
		{
			func_write_answer(ans, 6);
			ra(a);
			poz--;
		}
	}
	else
	{
		while (l_a > 0)
		{
			func_write_answer(ans, 9);
			rra(a);
			l_a--;
		}
	}
	return (*a);
}

int			first_el_in_a(t_stek *a, int first_el)
{
	t_stek	*t;
	int		poz;

	poz = 0;
	t = a;
	while (t->dig != first_el)
	{
		poz++;
		t = t->next;
	}
	return (poz);
}

t_stek		*recurs_first(t_stek **a, t_stek **b, int la, t_ans **ans)
{
	int		opor;
	int		l_a;
	int		lb;
	int		first_el;
	int		tmp;

	if (la <= 3)
		return (sort_three_a(a, b, la, ans));
	obnul_first_opor(&first_el, &opor, la, a);
	func_obnulay(&la, &lb, &tmp, &l_a);
	while (l_a-- > 0)
	{
		if ((*a)->dig <= opor)
			lb = pb_in_reca_first(a, b, ans, lb);
		else
		{
			first_el = tmp == -1 ? (*a)->dig : first_el;
			tmp = 1;
			la = ra_in_reca_first(a, ans, la);
		}
	}
	*a = rev_in_a_first(a, ans, first_el_in_a(*a, first_el), la);
	*a = recurs_a(a, b, la, ans);
	*b = recurs_b(a, b, lb, ans);
	return (*a);
}
