/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 14:51:58 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/14 14:52:01 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int main(void)//ft_strcmp.c
{
	char s1[] = "abcdefgh";
	char s2[] = "abcuu";
	ft_strcmp(s1, s2);
	return (0);
}

int main(void)//ft_strncmp.c
{
	char s1[] = "aubry";
	char s2[] = "";
	printf("%i\n", ft_strncmp(s1, s2, 5));
	printf("%i\n", strncmp(s1, s2, 5));
	return (0);
}

int main()//ft_strcat.c
{
	char dest[] = "abcdef";
	char src[] = "ghijkl";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}


int main()//ft_strncat.c
{
	char dest[10] = "abcdef";
	char src[] = "kenzakenzakenza";
	printf("%s\n", ft_strncat(dest, src, 11));
	printf("%s\n", strncat(dest, src, 10));
}

int main()//ft_strstr.c
{
	char str[] = "salut tout le monde aujourd'hui on se le retrouve pour une nouvelle video";
	char to_find[] = "le";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}
