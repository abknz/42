/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:24:16 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/24 17:24:18 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest2;
	char	*src2;
	int		i;

	i = 0;
	src2 = (char*)src;
	dest2 = (char*)dest;
	while (i < (int)n)
	{
		dest2[i] = src2[i];
		if (src2[i] == (char)c)
			return (dest2 + i + 1);
		i++;
	}
	return (NULL);
}
