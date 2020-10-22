/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:43:48 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/17 17:00:57 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	printchar(char c)
{
	write(1, &c, 1);
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

void	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		printchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		print_str(par[i].str);
		printchar('\n');
		ft_putnbr(par[i].size);
		printchar('\n');
		print_str(par[i].copy);
		printchar('\n');
		i++;
	}
}
