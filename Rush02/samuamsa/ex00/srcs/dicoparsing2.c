/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicoparsing2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:53:45 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 15:49:03 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dicoparsing.h"
#include "ft_dcpstr.h"

int		count_char_in_nbr(char *str)
{
	int i;

	i = 0;
	while (str[i] && ft_str_is_numeric(str[i]))
		i++;
	return (i);
}

char	*copy_nbr(char *str, int *i)
{
	char	*nbr;
	int		j;
	int		size;

	j = 0;
	size = count_char_in_nbr(str + (*i));
	if (!(nbr = malloc(sizeof(char) * size + 1)))
		return (0);
	while (j < size)
	{
		nbr[j] = str[(*i)];
		j++;
		(*i)++;
	}
	nbr[j] = '\0';
	return (nbr);
}

int		count_char_letters(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

char	*copy_letters(char *str, int *i)
{
	char	*letters;
	int		j;
	int		size;

	j = 0;
	size = count_char_letters(str + (*i));
	if (!(letters = malloc(sizeof(char) * size + 1)))
		return (0);
	while (j < size)
	{
		letters[j] = str[(*i)];
		j++;
		(*i)++;
	}
	letters[j] = '\0';
	return (letters);
}
