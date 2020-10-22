/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_file_in_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:55:37 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 20:07:06 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "save_file_in_string.h"
#include "ft_stringop.h"

int		number_of_char(char *dico_path)
{
	int		fd;
	int		ret;
	int		count;
	char	buffer[100];

	fd = open(dico_path, O_RDONLY);
	if (fd != -1)
	{
		count = 0;
		while ((ret = read(fd, buffer, 100)))
		{
			if (ret == -1)
				return (-1);
			count += ret;
		}
		if (close(fd) != -1)
			return (count + 1);
	}
	return (-1);
}

void	setup_string(char *str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
}

char	*save_file(char *dico_path)
{
	char	*dico_in_string;
	int		fd;
	int		ret;
	char	buffer[100];
	int		size;

	if ((size = number_of_char(dico_path)) == -1)
		return (0);
	if (!(dico_in_string = malloc(sizeof(char) * size)))
		return (NULL);
	setup_string(dico_in_string, size);
	fd = open(dico_path, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buffer, 100)))
		{
			if (ret == -1)
				return (0);
			ft_strncat(dico_in_string, buffer, ret);
		}
		if (close(fd) != -1)
			return (dico_in_string);
	}
	return (0);
}
