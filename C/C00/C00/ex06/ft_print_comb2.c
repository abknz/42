/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:03:58 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/11 20:04:01 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int premier;
	int second;

	premier = 0;
	while (premier <= 98)
	{
		second = premier + 1;
		while (second <= 99)
		{
			ft_putchar((premier / 10) + 48);
			ft_putchar((premier % 10) + 48);
			ft_putchar(' ');
			ft_putchar((second / 10) + 48);
			ft_putchar((second % 10) + 48);
			if (premier != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		premier++;
	}
}
