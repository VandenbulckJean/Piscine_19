/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:37:15 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/11 13:00:10 by jvanden-         ###   ########.fr       */
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

int		check_base(char *base)
{
	int i;
	int j;
	int length;

	i = 0;
	length = 0;
	while (base[length])
		length++;
	if (length < 1)
		return (0);
	while (i < length)
	{
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		i++;
	}
	return (1);
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
	int base_len;

	base_len = 0;
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
		while (base[base_len])
			base_len++;
		return_value = return_value * base_len + j;
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
	if (check_base(base))
	{
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
	}
	return (0);
}
