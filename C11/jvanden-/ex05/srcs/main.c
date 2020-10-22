/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:50:57 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/20 10:52:36 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"
#include "print.h"
#include "operations.h"

int		pop_index(char *str)
{
	char	*index;
	int		i;

	i = 0;
	index = "+-*/%";
	while (str[i])
		i++;
	if (i != 1)
		return (6);
	i = 0;
	while (i < 5)
	{
		if (str[0] == index[i])
			return (i);
		i++;
	}
	return (6);
}

int		main(int argc, char **argv)
{
	int		(*pop[5])(int, int);
	int		a;
	int		b;

	if (argc == 4)
	{
		pop[0] = &add;
		pop[1] = &sub;
		pop[2] = &time;
		pop[3] = &div;
		pop[4] = &modulo;
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (pop_index(argv[2]) == 3 && b == 0)
			printstr("Stop : division by zero");
		else if (pop_index(argv[2]) == 4 && b == 0)
			printstr("Stop : modulo by zero");
		else if (pop_index(argv[2]) == 6)
			printstr("0");
		else
			ft_putnbr((pop[pop_index(argv[2])](a, b)));
		printchar('\n');
	}
	return (0);
}
