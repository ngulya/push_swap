/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recurs_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 15:46:36 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/13 15:46:36 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			pb_in_b(t_stek **a, t_stek **b, t_ans **ans, int la)
{
	la++;
	func_write_answer(ans, 4);
	*a = pa(a, b);
	return (la);
}

t_stek		*rev_in_b(t_stek **b, t_ans **ans, int poz, int l_b)
{
	if (poz < l_b)
	{
		while (poz > 0)
		{
			func_write_answer(ans, 7);
			rb(b);
			poz--;
		}
	}
	else
	{
		while (l_b > 0)
		{
			func_write_answer(ans, 10);
			rrb(b);
			l_b--;
		}
	}
	return (*b);
}

int			first_el_in_b(t_stek *b, int first_el)
{
	t_stek	*t;
	int		poz;

	poz = 0;
	t = b;
	while (t->dig != first_el)
	{
		poz++;
		t = t->next;
	}
	return (poz);
}

int			rb_in_rec(t_stek **b, t_ans **ans, int lb, int *tmp)
{
	func_write_answer(ans, 7);
	lb++;
	rb(b);
	*tmp = 1;
	return (lb);
}

t_stek		*recurs_b(t_stek **a, t_stek **b, int lb, t_ans **ans)
{
	int		opor;
	int		l_b;
	int		la;
	int		tmp;
	int		first_el;

	if (lb <= 3)
		return (sort_three_b(a, b, lb, ans));
	opor = opor_el(*b, lb, 2);
	nulllll(&l_b, &lb, &la, &tmp);
	first_el = 0;
	while (l_b-- > 0)
	{
		if ((*b)->dig > opor)
			la = pb_in_b(a, b, ans, la);
		else
		{
			first_el = tmp == -1 ? (*b)->dig : first_el;
			lb = rb_in_rec(b, ans, lb, &tmp);
		}
	}
	*b = rev_in_b(b, ans, first_el_in_b(*b, first_el), lb);
	*a = recurs_a(a, b, la, ans);
	*b = recurs_b(a, b, lb, ans);
	return (*b);
}
