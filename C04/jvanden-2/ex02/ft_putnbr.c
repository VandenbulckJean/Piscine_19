/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:14:04 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/06 20:20:27 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nombre;

	if (nb < 0)
	{
		printchar('-');
		nombre = -nb;
	}
	else
	{
		nombre = nb;
	}
	if (nombre / 10 != 0)
	{
		ft_putnbr(nombre / 10);
		printchar((nombre % 10) + '0');
	}
	else
	{
		printchar(nombre + '0');
	}
}
