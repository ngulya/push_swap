/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/26 15:17:30 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/26 15:17:30 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		func_find_same(int i, t_stek *a)
{
	if (!opor_el(a, i, 1))
	{
		clean_all_stek(&a);
		ERR;
	}
}

int			null_stack_a(t_stek **a, char **argv)
{
	(*a)->ok = 0;
	(*a)->next = NULL;
	(*a)->dig = 0;
	return (zap_in_stack_a(argv, a));
}

int			clean_all_ans(t_ans **list)
{
	t_ans	*t;

	if (!(*list))
		return (0);
	while (*list)
	{
		if ((*list)->next)
		{
			t = (*list);
			(*list) = (*list)->next;
			t->next = NULL;
			if (t)
				free(t);
			t = NULL;
		}
		else
		{
			(*list)->next = NULL;
			free((*list));
			(*list) = NULL;
			return (1);
		}
	}
	return (1);
}

int			main(int argc, char **argv)
{
	t_stek	*b;
	t_stek	*a;
	t_ans	*ans;
	t_ans	*del;
	int		i;

	if (argc == 1)
		;
	ans = NULL;
	b = NULL;
	a = (t_stek *)malloc(sizeof(a));
	func_find_same((i = null_stack_a(&a, argv)), a);
	a = recurs_first(&a, &b, i, &ans);
	ans = func_optimization(&ans);
	del = ans;
	while (ans)
	{
		func_show_answer(ans);
		ans = ans->next;
	}
	clean_all_ans(&del);
	clean_all_stek(&a);
	return (1);
}
