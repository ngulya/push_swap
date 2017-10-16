/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_write_answer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:58:52 by ngulya            #+#    #+#             */
/*   Updated: 2017/04/07 11:58:53 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void					func_write_answer(t_ans **a, int i)
{
	t_ans *ans;

	if (!*a)
	{
		ans = (t_ans *)malloc(sizeof(ans));
		ans->valid = 1;
		ans->vuv = i;
		ans->next = NULL;
		*a = ans;
	}
	else
	{
		ans = *a;
		while (ans && ans->next)
			ans = ans->next;
		ans->next = (t_ans *)malloc(sizeof(ans));
		ans = ans->next;
		ans->valid = 1;
		ans->vuv = i;
		ans->next = NULL;
	}
}
