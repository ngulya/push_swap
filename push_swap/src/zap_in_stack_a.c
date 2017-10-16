/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zap_in_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/02 13:14:18 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/02 13:14:18 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stek	*func_creat_a(t_stek **a)
{
	(*a)->next = (t_stek *)malloc(sizeof(*a));
	(*a) = (*a)->next;
	(*a)->next = NULL;
	(*a)->ok = 0;
	return (*a);
}

int		function_al(t_stek **a, char **argv, int i, int j)
{
	if ((*a)->ok)
		*a = func_creat_a(a);
	(*a)->dig = ft_atoi(&argv[i][j]);
	(*a)->ok = 1;
	if (argv[i][j] == '-')
		j++;
	return (j);
}

int		noname_func(char **argv, t_stek *a, int i, t_stek **list)
{
	int		all;
	int		j;

	j = 0;
	all = 0;
	while (argv[i][j])
	{
		while (argv[i][j] && argv[i][j] == ' ')
			j++;
		if (argv[i][j] && ((argv[i][j] == '-' && argv[i][j + 1] >= '0' && \
			argv[i][j + 1] <= '9') || (argv[i][j] >= '0' && argv[i][j] <= '9')))
		{
			j = function_al(&a, argv, i, j);
			all++;
		}
		else if (argv[i][j])
		{
			clean_all_stek(list);
			ERR;
		}
		while (argv[i][j] && argv[i][j] >= '0' && argv[i][j] <= '9')
			j++;
	}
	return (all);
}

int		zap_in_stack_a(char **argv, t_stek **list)
{
	int		j;
	int		i;
	int		all;
	t_stek	*a;

	i = 1;
	j = 0;
	all = 0;
	a = *list;
	while (argv[i])
	{
		if (a->ok)
			a = func_creat_a(&a);
		all = all + noname_func(argv, a, i, list);
		i++;
	}
	return (all);
}
