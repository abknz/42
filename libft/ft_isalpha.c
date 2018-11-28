/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 05:28:50 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/17 05:28:52 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	if (c)
	{
		if ((c > 64 && c < 91) || (c > 96 && c < 123))
			return (1);
		else
			return (0);
	}
	return (0);
}
