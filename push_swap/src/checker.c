/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 12:46:14 by ngulya            #+#    #+#             */
/*   Updated: 2017/03/15 12:46:14 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		func_cleanandokorko(t_stek **a, t_stek **b, int i)
{
	clean_all_stek(b);
	clean_all_stek(a);
	if (i == 1)
	{
		OK;
	}
	KO;
}

void		func_firsttime(t_stek *l)
{
	l->next = NULL;
	l->ok = 0;
	l->dig = 0;
}

void		func_find_same(int i, t_stek *a)
{
	if (!opor_el(a, i, 1))
	{
		clean_all_stek(&a);
		ERR;
	}
}

t_stek		*func_creata(t_stek **a)
{
	(*a)->next = (t_stek *)malloc(sizeof(*a));
	*a = (*a)->next;
	(*a)->next = NULL;
	return (*a);
}

int			main(int argc, char **argv)
{
	t_stek	*b;
	t_stek	*a;
	char	*line;
	int		i;

	if (argc == 1)
		exit(1);
	b = NULL;
	a = (t_stek *)malloc(sizeof(a));
	func_firsttime(a);
	i = zap_in_stack_a(argv, &a);
	func_find_same(i, a);
	while (get_next_line(0, &line) > 0)
		command(&a, &b, &line);
	if (formintomax(&a, &b))
		func_cleanandokorko(&a, &b, 1);
	else
		func_cleanandokorko(&a, &b, 0);
	return (0);
}
