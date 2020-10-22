/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:12:33 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/07 14:00:56 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int caractere;

	i = 0;
	caractere = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
