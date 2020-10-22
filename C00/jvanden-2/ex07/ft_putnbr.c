/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:14:04 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/06 15:18:32 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long	inversenb;
	int		buffer;
	long	longnb;

	inversenb = 0;
	longnb = nb;
	if (nb < 0)
	{
		printchar('-');
		longnb = longnb * -1;
	}
	while (longnb >= 1)
	{
		buffer = longnb % 10;
		longnb = longnb / 10;
		inversenb = buffer + inversenb * 10;
	}
	while (inversenb > 9)
	{
		printchar((inversenb % 10) + 48);
		inversenb = inversenb / 10;
	}
	printchar(48 + inversenb);
}
