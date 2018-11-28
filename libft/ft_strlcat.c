/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:53:51 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/24 17:53:52 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dest_len;
	size_t src_len;

	i = 0;
	dest_len = ft_strlen(dst);
	j = dest_len;
	src_len = ft_strlen((char *)src);
	if (size > dest_len + 1)
	{
		while (src[i] && j < (size - 1))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (size >= dest_len)
		return (dest_len + src_len);
	return (src_len + size);
}
