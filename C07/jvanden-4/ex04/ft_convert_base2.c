/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:03:25 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/17 18:38:02 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c);
int		ft_strlen(char *str);
int		check_base(char *base);
int		is_in_base(char c, char *base);
int		atoint(char *str, int i, char *base, int minus);

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int minus;
	int plus;

	i = 0;
	minus = 0;
	plus = 0;
	while (is_space(str[i]) || is_in_base(str[i], base)
			|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		if (str[i] == '+')
			plus++;
		if (is_space(str[i]) && (minus > 0 || plus > 0))
			return (0);
		if (is_in_base(str[i], base))
			return (atoint(str, i, base, minus));
		i++;
	}
	return (0);
}

char	*ft_putnbr_base(int nbr, char *base, char *int_in_char)
{
	unsigned int	nombre;
	int				charinbase;

	if (int_in_char == NULL)
		return (NULL);
	charinbase = ft_strlen(base);
	if (nbr < 0)
	{
		int_in_char[ft_strlen(int_in_char)] = '-';
		nombre = -nbr;
	}
	else
	{
		nombre = nbr;
	}
	if (nombre / charinbase != 0)
	{
		ft_putnbr_base(nombre / charinbase, base, int_in_char);
	}
	int_in_char[ft_strlen(int_in_char)] = base[nombre % charinbase];
	return (int_in_char);
}

void	setvalue(char *str, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nbr_to_base;
	int		nbr_to_int;
	int		n;
	int		i;

	if (check_base(base_from) && check_base(base_to))
	{
		nbr_to_int = ft_atoi_base(nbr, base_from);
		n = nbr_to_int;
		i = 1;
		while (n / 10 != 0)
		{
			n = n / 10;
			i++;
		}
		n = ((i * 10 / ft_strlen(base_to)));
		if (!(nbr_to_base = malloc(sizeof(char) * (n + 5))))
			return (NULL);
		setvalue(nbr_to_base, n + 5);
		nbr_to_base = ft_putnbr_base(nbr_to_int, base_to, nbr_to_base);
	}
	else
		nbr_to_base = NULL;
	return (nbr_to_base);
}
