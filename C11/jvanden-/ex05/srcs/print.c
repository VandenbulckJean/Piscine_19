/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:48:10 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/20 09:09:37 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	printchar(char c)
{
	write(1, &c, 1);
}

void	printstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		printchar(str[i]);
		i++;
	}
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
