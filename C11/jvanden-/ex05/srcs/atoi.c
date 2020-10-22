/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:50:17 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/20 09:07:14 by jvanden-         ###   ########.fr       */
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

int		atoint(char *str, int charnumber, int minus)
{
	int i;
	int return_value;

	return_value = 0;
	i = charnumber;
	while (str[i] >= '0' && str[i] <= '9')
	{
		return_value = return_value * 10 + (str[i] - 48);
		i++;
	}
	if (minus % 2 == 0)
		minus = 1;
	else
		minus = -1;
	return (return_value * minus);
}

int		ft_atoi(char *str)
{
	int i;
	int minus;
	int plus;

	minus = 0;
	i = 0;
	plus = 0;
	while (is_space(str[i]) || str[i] == '+' || str[i] == '-' ||
			(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			minus++;
		if (str[i] == '+')
			plus++;
		if (is_space(str[i]) && (minus > 0 || plus > 0))
			return (0);
		else if (str[i] >= '0' && str[i] <= '9')
		{
			return (atoint(str, i, minus));
		}
		i++;
	}
	return (0);
}
