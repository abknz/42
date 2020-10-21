/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 16:34:35 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/12 16:34:37 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 65 && str[n] <= 90)
			str[n] = str[n] + 32;
		n++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int n;

	n = 0;
	ft_strlowcase(str);
	while (str[n] != '\0')
	{
		if (str[n] >= 48 && str[n] <= 57)
			n++;
		if ((str[n - 1] <= 48 || (str[n - 1] >= 58 && str[n - 1] <= 64)
			|| (str[n - 1] >= 91 && str[n - 1] <= 96) || str[n - 1] >= 123) &&
			(str[n] >= 97 && str[n] <= 122))
		{
			str[n] = str[n] - 32;
		}
		if (str[n] == 32 && (str[n + 1] >= 97 && str[n + 1] <= 122))
		{
			n++;
			str[n] = str[n] - 32;
		}
		n++;
	}
	return (str);
}
