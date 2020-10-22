/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strop.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:30:40 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/24 11:06:42 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strop.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putstronerror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_puterror(char *error, char *program_name, char *file_name)
{
	ft_putstronerror(program_name);
	ft_putstronerror(": ");
	ft_putstronerror(file_name);
	ft_putstronerror(": ");
	ft_putstronerror(error);
}
