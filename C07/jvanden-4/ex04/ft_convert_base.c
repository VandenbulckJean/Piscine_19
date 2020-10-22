/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:54:46 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/18 09:10:29 by jvanden-         ###   ########.fr       */
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

int		check_base(char *base)
{
	int i;
	int j;
	int length;

	i = 0;
	length = ft_strlen(base);
	if (length <= 1)
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

	base_len = ft_strlen(base);
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
		return_value = return_value * base_len + j;
		i++;
	}
	if (minus % 2 == 0)
		minus = 1;
	else
		minus = -1;
	return (return_value * minus);
}
