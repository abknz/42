/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:54:23 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/15 13:54:25 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_isvalid(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] < 32 || base[i] > 126))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int sizebase;
	int nbrbase[100];
	int i;

	i = -1;
	sizebase = 0;
	if (base_isvalid(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[sizebase])
			sizebase++;
		while (nbr)
		{
			nbrbase[++i] = nbr % sizebase;
			nbr = nbr / sizebase;
		}
	}
	while (i >= 0)
		ft_putchar(base[nbrbase[i--]]);
}

int main()//ft_putnbr_base
{
	int nbr = 8956;
	char base[] = "01234567";
	ft_putnbr_base(nbr, base);
	return (0);
}
