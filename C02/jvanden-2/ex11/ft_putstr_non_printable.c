/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:25:28 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/09 16:27:18 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			printchar('\\');
			printchar(str[i] / 16 + 48);
			if ((str[i] % 16) <= 9)
			{
				printchar((str[i] % 16) + 48);
			}
			else
			{
				printchar((str[i] % 16) + 87);
			}
		}
		else
		{
			printchar(str[i]);
		}
		i++;
	}
}
