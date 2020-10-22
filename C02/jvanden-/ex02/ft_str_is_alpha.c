/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 08:29:36 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/07 14:25:29 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int caractere;

	i = 0;
	caractere = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'z') || (str[i] > 'Z' && str[i] < 'a'))
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
