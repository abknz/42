/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 04:15:04 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/19 04:15:05 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (c)
	{
		if ((c > 64 && c < 91) || (c > 96 && c < 123))
			return (1);
		else if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}
	return (0);
}