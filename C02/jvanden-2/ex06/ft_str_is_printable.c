/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:09:29 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/08 17:33:42 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int caractere;

	i = 0;
	caractere = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
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
