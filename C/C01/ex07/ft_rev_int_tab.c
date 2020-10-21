/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:03:20 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/12 15:03:27 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int temporaire;

	n = 0;
	size--;
	while (n < size)
	{
		temporaire = tab[n];
		tab[n] = tab[size];
		tab[size] = temporaire;
		n++;
		size--;
	}
}
