/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 09:07:09 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/24 11:06:39 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"
#include <stdio.h>

int main(int argc, char ** argv)
{
	if (argc == 1)
	{
		if (read_from_standard() == -1)
		{
			ft_puterror(strerror(errno), argv[0], "standard_input");
			return (1);
		}
	}
	else if (argc == 2)
	{
		if (read_from_file(argv[1]) == -1)
		{
			ft_puterror(strerror(errno), argv[0], argv[1]);
			return (1);
		}
	}
	else
	{

	}
}
