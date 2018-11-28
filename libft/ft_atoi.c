/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 22:41:39 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/15 22:41:41 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int a;
	int b;
	int neg;

	a = 0;
	b = 0;
	neg = 1;
	while (nptr[a] == ' ' || nptr[a] == '\t' || nptr[a] == '\f' ||
		nptr[a] == '\n' || nptr[a] == '\r' || nptr[a] == '\v')
		a++;
	if (nptr[a] == '-')
		neg = -1;
	if (nptr[a] == '+' || nptr[a] == '-')
		a++;
	while (nptr[a] >= 48 && nptr[a] <= 57)
	{
		b = b * 10;
		b = b + (nptr[a] - '0');
		a++;
	}
	return (b * neg);
}
