/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:31:39 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/16 15:31:40 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tb;
	int i;

	i = 0;
	if (min >= max)
		return (tb);
	tb = (int *)malloc(sizeof(*tb) * max + 1);
	while (i < max - 1)
	{
		tb[i] = min;
		i++;
		min++;
	}s
	return (tb);
}

int main()
{
	int *tb;
	ft_range(1, 6);
	return (0);
}