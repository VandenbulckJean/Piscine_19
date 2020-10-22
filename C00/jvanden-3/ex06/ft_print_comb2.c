/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 17:34:34 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/06 19:41:06 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	printint(int nb)
{
	char dizaine;
	char unite;

	dizaine = (nb / 10) + 48;
	unite = (nb % 10) + 48;
	printchar(dizaine);
	printchar(unite);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				printint(a);
				printchar(' ');
				printint(b);
				if (a != 98 || b != 99)
				{
					printchar(',');
					printchar(' ');
				}
			}
			b++;
		}
		a++;
	}
}
