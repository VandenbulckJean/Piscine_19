/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:26:05 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/07 12:37:32 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int caractere;

	i = 0;
	caractere = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			caractere++;
		}
		i++;
	}
	if (caractere == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
