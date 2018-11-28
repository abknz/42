/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 04:12:02 by kaubry            #+#    #+#             */
/*   Updated: 2018/11/19 04:12:05 by kaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isdigit(int c)
{
	if (c)
	{
		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}
	return (0);
}