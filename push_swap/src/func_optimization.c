/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_optimization.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:01:06 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/07 14:01:07 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cleansame(t_ans *first, t_ans *del)
{
	first->next = del->next;
	free(del);
	del = NULL;
}

t_ans	*del_two(t_ans *f, t_ans *tmp, t_ans **ans)
{
	t_ans	*sf;

	sf = tmp->next->next;
	free(tmp);
	free(tmp->next);
	if (f)
		f->next = sf;
	else
		f = sf;
	return (*ans);
}

int		fora_forb(t_ans *tmp)
{
	if ((tmp->vuv == 1 && tmp->next->vuv == 2) \
		|| (tmp->vuv == 2 && tmp->next->vuv == 1))
		return (3);
	else if ((tmp->vuv == 6 && tmp->next->vuv == 7) \
		|| (tmp->vuv == 7 && tmp->next->vuv == 6))
		return (8);
	else if ((tmp->vuv == 9 && tmp->next->vuv == 10) \
		|| (tmp->vuv == 10 && tmp->next->vuv == 9))
		return (11);
	else
		return (0);
}

int		del_pa_pb_and_other(t_ans *tmp)
{
	if ((tmp->vuv == 5 && tmp->next->vuv == 4) \
		|| (tmp->vuv == 4 && tmp->next->vuv == 5))
		return (1);
	if ((tmp->vuv == 6 && tmp->next->vuv == 9) \
		|| (tmp->vuv == 9 && tmp->next->vuv == 6))
		return (1);
	if ((tmp->vuv == 7 && tmp->next->vuv == 10) \
		|| (tmp->vuv == 10 && tmp->next->vuv == 7))
		return (1);
	if ((tmp->vuv == 8 && tmp->next->vuv == 11) \
		|| (tmp->vuv == 11 && tmp->next->vuv == 8))
		return (1);
	if ((tmp->vuv == 1 && tmp->next->vuv == 1) \
		|| (tmp->vuv == 2 && tmp->next->vuv == 2) \
		|| (tmp->vuv == 3 && tmp->next->vuv == 3))
		return (1);
	return (0);
}

t_ans	*func_optimization(t_ans **ans)
{
	t_ans	*tmp;
	t_ans	*f;

	f = *ans;
	tmp = *ans;
	while (tmp && tmp->next)
	{
		if (fora_forb(tmp))
		{
			tmp->vuv = fora_forb(tmp);
			cleansame(tmp, tmp->next);
			tmp = *ans;
		}
		else if (del_pa_pb_and_other(tmp))
			tmp = del_two(f, tmp, ans);
		else
		{
			f = tmp;
			tmp = tmp->next;
		}
	}
	if (f)
		return (*ans);
	return (NULL);
}
