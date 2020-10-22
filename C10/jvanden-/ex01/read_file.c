/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:34:48 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/24 11:04:15 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "read_file.h"

int read_from_file(char *path_to_file)
{
	int fd;
	int ret;
	char buffer[100];

	fd = open(path_to_file, O_RDONLY);
	if (fd != -1)
	{
		while ((ret = read(fd, buffer, 99)))
		{
			if (ret == -1)
				return (-1);
			buffer[ret] = '\0';
			ft_putstr(buffer);
		}
		if (close(fd) == -1)
			return (-1);
		return (0);
	}
	return (-1);
}


int read_from_standard(void)
{
	int ret;
	char buffer[100];

	while ((ret = read(0, buffer, 99)))
	{
		if (ret == -1)
			return (-1);
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	return (0);
}
