/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 22:22:25 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/24 16:29:44 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char*)dest;
	src1 = (char*)src;
	i = 0;
	while (i < n)
	{
		(dest1[i] = src1[i]);
		i++;
	}
	return (dest);
}
