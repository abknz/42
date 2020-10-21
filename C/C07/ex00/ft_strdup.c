/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:28:57 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/16 14:28:58 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char *cpy;
	int length;
	int i;

	length = 0;
	i = 0;
	while(src[length] != '\0')
		length++;
	cpy = (char *)malloc(sizeof(*cpy) * length + 1)
	while (i < length)
	{
		cpy[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (cpy);
}