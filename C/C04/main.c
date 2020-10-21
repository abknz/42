/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:47:36 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/15 13:47:37 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		main()//ft_atoi
{
	char str[] = "   -+-+-+-1234ancjdu4";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}

int main()//ft_putnbr_base
{
	int nbr = 8956;
	char base[] = "01234567";
	ft_putnbr_base(nbr, base);
	return (0);
}
