/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:11:20 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 20:18:12 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringop.h"
#include "ft_dcpstr.h"
#include "dicoparsing.h"
#include "print_elements.h"

char		*ft_recursive_power(int power)
{
	char	*str;
	int		i;

	i = 1;
	if (!(str = malloc(sizeof(char) * (power + 2))))
		return (0);
	str[0] = '1';
	while (i < power + 1)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}

void		firstblocksize_2(int *i, int *multiple_mille,
		t_nbr_translation **index, char *str)
{
	print_nbr(str[*i], str[*i + 1], index);
	if (*multiple_mille > 0)
	{
		ft_putchar(' ');
		print_base(*multiple_mille, 3, index);
		(*multiple_mille)--;
	}
	*i = *i + 2;
}

void		firstblocksize_1(int *i, int *multiple_mille,
		t_nbr_translation **index, char *str)
{
	print_chiffre(str[*i], index);
	if (*multiple_mille > 0)
	{
		ft_putchar(' ');
		print_base(*multiple_mille, 3, index);
		(*multiple_mille)--;
	}
	(*i)++;
}

int			check_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(ft_str_is_numeric(str[i])) ||
				str[0] == '0' || (ft_strlen(str) > 39))
			return (0);
		i++;
	}
	return (1);
}

void		print_all(t_nbr_translation **index, char *str)
{
	int size;
	int multiple_mille;
	int firstblocksize;
	int i;

	if (check_str(str))
	{
		i = 0;
		size = ft_strlen(str);
		multiple_mille = (size - 1) / 3;
		firstblocksize = size % 3;
		if (firstblocksize == 2)
			firstblocksize_2(&i, &multiple_mille, index, str);
		else if (firstblocksize == 1)
			firstblocksize_1(&i, &multiple_mille, index, str);
		while (str[i])
		{
			print_block(str + i, size, multiple_mille, index);
			i = i + 3;
			multiple_mille--;
		}
	}
	else
		ft_putstr("Error\n");
}
