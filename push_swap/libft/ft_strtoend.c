/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngulya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:00:17 by ngulya            #+#    #+#             */
/*   Updated: 2016/12/02 15:10:44 by ngulya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoend(const char *s)
{
	if (*s)
	{
		while (*s)
			s++;
		s--;
		return ((char *)s);
	}
	return ((char *)s);
}