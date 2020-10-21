/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:40:26 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/13 14:40:28 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() //ft_strcpy.c
{
	char *dest;
	char src[] = "essai";
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}

int main()//ft_strncpy.c
{
	char *dest;
	char src[] = "essai";
	int n = 4;
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}

int main()//ft_strlowcase.c
{
	char str[] = "AcdRTHVGD ..VGb";
	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}


int main()//ft_strupcase.c
{
	char str[] = "AcdrdhgbdVGD ..VGb";
	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}

int main()//ft_strcapitalize.c
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
	return (0);
}