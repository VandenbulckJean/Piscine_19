/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:37:15 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/10 19:46:17 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
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

int		is_in_base(char c, char *base)
{
	int i;
	int is_in_base;

	i = 0;
	is_in_base = 0;
	while (base[i])
	{
		if (c == base[i])
			is_in_base++;
		i++;
	}
	if (is_in_base)
		return (1);
	return (0);
}

int		atoint(char *str, int i, char *base, int minus)
{
	int return_value;
	int j;

	return_value = 0;
	while (is_in_base(str[i], base))
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
				break ;
			j++;
		}
		return_value = return_value * ft_strlen(base) + j;
		i++;
	}
	if (minus % 2 == 0)
		minus = 1;
	else
		minus = -1;
	return (return_value * minus);
}

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
		{
			return (atoint(str, i, base, minus));
		}
		i++;
	}
	return (0);
}
