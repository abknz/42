/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:57:06 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/12 18:57:07 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int temp;

	n = 0;
	while (n < size - 1)
	{
		if (tab[n] < tab[n + 1])
			n++;
		if (tab[n] > tab[n + 1])
		{
			temp = tab[n + 1];
			tab[n + 1] = tab[n];
			tab[n] = temp;
			n = 0;
		}
	}
}
