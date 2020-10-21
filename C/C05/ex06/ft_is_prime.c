/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:33:23 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/16 13:33:24 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb && i < 46341)
	{
		if (nb % i == 0 & nb != i)
			return (0);
		if (nb == i && nb % i == 0)
			return (1);
		i++;
	}
	return (1);
}