/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keaubry <marvin@42lyon.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:29:35 by keaubry           #+#    #+#             */
/*   Updated: 2020/10/15 16:29:36 by keaubry          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int main()//ft_iterative_factorial
{
	printf("12 : %d\n",ft_iterative_factorial(12));
	printf("11 : %d\n",ft_iterative_factorial(11));
	printf("10 : %d\n",ft_iterative_factorial(10));
	printf("9 : %d\n",ft_iterative_factorial(9));
	printf("8 : %d\n",ft_iterative_factorial(8));
	printf("7 : %d\n",ft_iterative_factorial(7));
	printf("6 : %d\n",ft_iterative_factorial(6));
	return (0);
}

int main()//ft_recursive_factorial
{
	printf("12 : %d\n",ft_recursive_factorial(12));
	printf("11 : %d\n",ft_recursive_factorial(11));
	printf("10 : %d\n",ft_recursive_factorial(10));
	printf("9 : %d\n",ft_recursive_factorial(9));
	printf("8 : %d\n",ft_recursive_factorial(8));
	printf("7 : %d\n",ft_recursive_factorial(7));
	printf("6 : %d\n",ft_recursive_factorial(6));
	return (0);
}

int main()//ft_iterative_power
{
	printf("4^10 : %d (1048576)\n", ft_iterative_power(4, 10));
	printf("2^4 : %d (16)\n", ft_iterative_power(2, 4));
	printf("10^0 : %d (1)\n", ft_iterative_power(10, 0));
	printf("7^1 : %d (7)\n", ft_iterative_power(7, 1));
	printf("27^3 : %d (19683)\n", ft_iterative_power(27, 3));
	printf("8^2 : %d (64)\n", ft_iterative_power(8, 2));
	return (0);
}

int main()//ft_recursive_power
{
	printf("4^10 : %d (1048576)\n", ft_recursive_power(4, 10));
	printf("2^4 : %d (16)\n", ft_recursive_power(2, 4));
	printf("10^0 : %d (1)\n", ft_recursive_power(10, 0));
	printf("7^1 : %d (7)\n", ft_recursive_power(7, 1));
	printf("27^3 : %d (19683)\n", ft_recursive_power(27, 3));
	printf("8^2 : %d (64)\n", ft_recursive_power(8, 2));
	return (0);
}

int main()//ft_fibonacci
{
	printf("F0 = %d (0)\n", ft_fibonacci(0));
	printf("F1 = %d (1)\n", ft_fibonacci(1));
	printf("F2 = %d (1)\n", ft_fibonacci(2));
	printf("F3 = %d (2)\n", ft_fibonacci(3));
	printf("F4 = %d (3)\n", ft_fibonacci(4));
	printf("F6 = %d (8)\n", ft_fibonacci(6));
	printf("F10 = %d (55)\n", ft_fibonacci(10));
	printf("F12 = %d (144)\n", ft_fibonacci(12));
	printf("F14 = %d (377)\n", ft_fibonacci(14));
	printf("F16 = %d (987)\n", ft_fibonacci(16));
	return (0);
}

int main()//ft_sqrt
{
	printf("racine de 64 = %d (8)\n", ft_sqrt(64));
	printf("racine de 81 = %d (9)\n", ft_sqrt(81));
	printf("racine de 93 = %d (0)\n", ft_sqrt(93));
	printf("racine de 36 = %d (6)\n", ft_sqrt(36));
	printf("racine de 25 = %d (5)\n", ft_sqrt(25));
	printf("racine de 61 = %d (0)\n", ft_sqrt(61));
	printf("racine de 144 = %d (12)\n", ft_sqrt(144));
	printf("racine de 86 = %d (0)\n", ft_sqrt(86));
	printf("racine de 94 = %d (0)\n", ft_sqrt(94));
	printf("racine de 26 = %d (0)\n", ft_sqrt(26));
	return (0);
}

int main()//ft_is_prime
{
	printf("%d\n", ft_is_prime(30));//0
	printf("%d\n", ft_is_prime(31));//1
	printf("%d\n", ft_is_prime(33));//0
	printf("%d\n", ft_is_prime(37));//1
	printf("%d\n", ft_is_prime(96));//0
	printf("%d\n", ft_is_prime(97));//1
	return (0);
}

int main ()//ft_find_next_prime
{
	printf("5 = %d (5)\n", ft_find_next_prime(5));//5
	printf("43 = %d (43)\n", ft_find_next_prime(43));//43
	printf("77 = %d (79)\n", ft_find_next_prime(77));//79
	printf("80 = %d (83)\n", ft_find_next_prime(80));//83
	printf("95 = %d (97)\n", ft_find_next_prime(95));//97
	printf("97 = %d (97)\n", ft_find_next_prime(97));//97
	return (0);
}