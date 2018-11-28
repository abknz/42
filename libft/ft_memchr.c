/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:56:44 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/24 17:56:45 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*ss;

	i = 0;
	ss = (char*)s;
	while (i < (int)n)
	{
		if (ss[i] == (char)c)
			return (ss + i);
		i++;
	}
	return (NULL);
}
