/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:50:59 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/05 20:38:47 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printcharscorrectly(char a, char b, char c, char d)
{
	char space;

	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &space, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	printprenextnumber(void)
{
	char comma;
	char space;

	comma = ',';
	space = ' ';
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	conditionprinting(char a, char b, char c, char d)
{
	if ((a <= c && b <= d) && (a != c || b != d))
	{
		printcharscorrectly(a, b, c, d);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			printprenextnumber();
		}
	}
}

void	numbersincrementing(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					conditionprinting(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	numbersincrementing(a, b, c, d);
}
