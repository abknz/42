/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:49:55 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/24 16:49:57 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	if (!(temp = (char*)malloc(sizeof(*temp) * n)))
		return (dest);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	return (dest);
}
