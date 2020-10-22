/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 15:39:33 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/05 21:04:35 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnumbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	printprenumber(char a, char b, char c)
{
	char comma;
	char space;

	comma = ',';
	space = ' ';
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '9')
	{
		b = '1';
		while (b <= '9')
		{
			c = '2';
			while (c <= '9')
			{
				if (b > a && c > b)
				{
					printnumbers(a, b, c);
					printprenumber(a, b, c);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
