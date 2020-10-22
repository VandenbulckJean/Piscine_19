/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:36:09 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/08 17:38:09 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
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
