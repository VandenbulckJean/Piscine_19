/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:03:30 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/10 16:47:24 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (i < ft_strlen(base))
	{
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_n_base_char(char *base, int n_char)
{
	printchar(base[n_char]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nombre;
	int				charinbase;

	if (check_base(base))
	{
		charinbase = ft_strlen(base);
		if (nbr < 0)
		{
			printchar('-');
			nombre = -nbr;
		}
		else
		{
			nombre = nbr;
		}
		if (nombre / charinbase != 0)
		{
			ft_putnbr_base(nombre / charinbase, base);
			print_n_base_char(base, (nombre % charinbase));
		}
		else
		{
			print_n_base_char(base, nombre);
		}
	}
}
