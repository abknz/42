/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:47:08 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/24 18:47:10 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		found;

	i = 0;
	found = 0;
	if (!ft_strlen(b))
		return ((char*)a);
	while (a[i] && i < len)
	{
		j = 0;
		if (a[i] == b[0])
		{
			k = i;
			found = 1;
			while (a[k] && b[j] && j < len && k < len)
				if (a[k++] != b[j++])
					found = 0;
			if (found && !b[j])
				return ((char*)&a[i]);
		}
		i++;
	}
	return (NULL);
}
