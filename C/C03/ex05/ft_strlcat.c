/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:17:53 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/18 14:17:54 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size - 1 - i)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size - 1);
}

int main()
{
	char dest[20] = "kenza";
	char src[] = "kenzaaubry";
	printf("le mien : %u\n", ft_strlcat(dest, src, 20));
	char dest2[20] = "kenza";
	char src2[] = "kenzaaubry";
	printf("le leur : %lu\n", strlcat(dest2, src2, 20));
}