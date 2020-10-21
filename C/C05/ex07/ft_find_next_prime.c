/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:42:14 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/16 13:42:15 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);
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

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) != 1)
			nb++;
	}
	return (nb);
}
