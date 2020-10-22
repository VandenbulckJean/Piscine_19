/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:14:04 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/06 08:52:24 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		logarithmebase10(int nombre)
{
	int a;

	a = 0;
	while (nombre / 10 != 0)
	{
		nombre = nombre / 10;
		a++;
	}
	return (a);
}

int		premierchiffredunombre(int nbdizaine)
{
	int a;

	a = 1;
	while (nbdizaine != 0)
	{
		a = a * 10;
		nbdizaine--;
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int		dizaine;
	int		numbertodisplay;
	char	negatif;

	negatif = '-';
	numbertodisplay = 0;
	dizaine = logarithmebase10(nb);
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, &negatif, 1);
	}
	while (dizaine != 0)
	{
		numbertodisplay = nb / premierchiffredunombre(dizaine);
		nb = nb - (numbertodisplay * premierchiffredunombre(dizaine));
		numbertodisplay = numbertodisplay + 48;
		write(1, &numbertodisplay, 1);
		dizaine--;
	}
	nb = nb + 48;
	write(1, &nb, 1);
}
