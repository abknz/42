/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 16:26:44 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/12 16:26:46 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 32 && str[n] <= 127)
			n++;
		else
			return (0);
	}
	return (1);
}