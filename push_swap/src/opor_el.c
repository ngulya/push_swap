/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opor_el.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 14:46:18 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/02 14:46:19 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			func_sorsta(int *a, int i)
{
	int l;

	l = 0;
	while (l + 1 < i)
	{
		if (a[l] <= a[l + 1])
			l++;
		else
			return (0);
	}
	return (1);
}

int			func_findsame(int *a, int i)
{
	int l;

	l = 0;
	while (l + 1 < i)
	{
		if (a[l] < a[l + 1])
			l++;
		else
			return (0);
	}
	return (1);
}

void		func_writeaall(int i, int *all, t_stek *t)
{
	int		z;
	t_stek	*tmp;

	tmp = t;
	z = 0;
	while (z < i && tmp)
	{
		all[z] = tmp->dig;
		z++;
		tmp = tmp->next;
	}
}

void		func_sortin_all(int *all, int i)
{
	int		z;
	int		aa;

	while (!func_sorsta(all, i))
	{
		z = 0;
		while (z + 1 < i)
		{
			if (all[z] > all[z + 1])
			{
				aa = all[z];
				all[z] = all[z + 1];
				all[z + 1] = aa;
			}
			z++;
		}
	}
}

int			opor_el(t_stek *list, int i, int first)
{
	int		*all;
	t_stek	*tmp;

	if (!list)
		return (0);
	tmp = list;
	all = (int *)malloc(sizeof(int) * i);
	func_writeaall(i, all, tmp);
	func_sortin_all(all, i);
	tmp = list;
	if (first == 1)
	{
		if (func_findsame(all, i))
		{
			free(all);
			return (1);
		}
		free(all);
		return (0);
	}
	while (tmp->dig != all[(i - 1) / 2])
		tmp = tmp->next;
	free(all);
	return (tmp->dig);
}
