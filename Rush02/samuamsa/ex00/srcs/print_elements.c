/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 13:03:07 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/23 20:17:51 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringop.h"
#include "dicoparsing.h"
#include "translation.h"

void	print_chiffre(char c, t_nbr_translation **index)
{
	int i;

	i = 0;
	while (index[i]->translation != 0)
	{
		if (index[i]->nbr[0] == c && index[i]->nbr[1] == '\0')
		{
			ft_putstr(index[i]->translation);
		}
		i++;
	}
}

void	printbeforetwenty(t_nbr_translation **index, char d, int *i)
{
	while (index[*i]->translation != 0)
	{
		if (index[*i]->nbr[1] == d && index[*i]->nbr[2] == '\0')
			ft_putstr(index[*i]->translation);
		(*i)++;
	}
}

void	print_nbr(char c, char d, t_nbr_translation **index)
{
	int i;

	i = 0;
	if (c == '0' && d != '0')
		print_chiffre(d, index);
	else if (c != '0')
	{
		if (c == '1' && d != '0')
			printbeforetwenty(index, d, &i);
		else
		{
			while (index[i]->translation != 0)
			{
				if (index[i]->nbr[0] == c && index[i]->nbr[1] == '0'
						&& index[i]->nbr[2] == '\0')
					ft_putstr(index[i]->translation);
				i++;
			}
			if (d != '0')
			{
				ft_putchar(' ');
				print_chiffre(d, index);
			}
		}
	}
}

void	print_base(int base, int unite, t_nbr_translation **index)
{
	int		i;
	char	*nbre;

	i = 0;
	nbre = ft_recursive_power(base * unite);
	while (index[i]->translation != 0)
	{
		if (ft_strcmp(index[i]->nbr, nbre) == 0)
		{
			ft_putstr(index[i]->translation);
		}
		i++;
	}
	free(nbre);
}

void	print_block(char *block, int size, int multiple_mille,
		t_nbr_translation **index)
{
	if (block[0] != '0')
	{
		if (size != 3 && ft_strlen(block) != size)
			ft_putchar(' ');
		print_chiffre(block[0], index);
		ft_putchar(' ');
		print_base(1, 2, index);
	}
	if (block[0] != '0' || block[1] != '0' || block[2] != '0')
		if (!(ft_strlen(block) == 3 && block[1] == '0' && block[2] == '0'))
			ft_putchar(' ');
	print_nbr(block[1], block[2], index);
	if (ft_strlen(block) > 3 && (block[0] != '0'
				|| block[1] != '0' || block[2] != '0'))
	{
		if (block[1] != '0' || block[2] != '0')
			ft_putchar(' ');
		print_base(multiple_mille, 3, index);
	}
}
