/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:02:16 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/21 10:48:30 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	printstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	read_file(int fd)
{
	char	buffer[100];
	int		ret;

	while ((ret = read(fd, buffer, 99)))
	{
		if (ret == -1)
		{
			printstr("Cannot read file.\n");
			break ;
		}
		buffer[ret] = '\0';
		printstr(buffer);
	}
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
		printstr("File name missing.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			printstr("Cannot read file.\n");
			return (1);
		}
		else
			read_file(fd);
		if (close(fd) == -1)
		{
			printstr("Cannot read file.\n");
			return (1);
		}
	}
	else
		printstr("Too many arguments.\n");
	return (0);
}
