/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicoparsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:06:34 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 20:34:25 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dcpstr.h"
#include "dicoparsing.h"
#include "save_file_in_string.h"
#include "dicoparsing2.h"

int					count_lines(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == '\n')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != '\n')
			i++;
	}
	return (count);
}

void				split_n_cat(char *str, int *i, t_nbr_translation *line)
{
	line->nbr = copy_nbr(str, i);
	while (!(ft_str_is_double_point(str[*i])))
		(*i)++;
	(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	line->translation = copy_letters(str, i);
}

t_nbr_translation	**ft_split(char *str)
{
	t_nbr_translation		**dico;
	int						struct_n;
	int						i;

	i = 0;
	struct_n = 0;
	if (!(dico = malloc(sizeof(t_nbr_translation*) * (count_lines(str) + 1))))
		return (0);
	while (struct_n < count_lines(str))
	{
		while (str[i] && str[i] == '\n')
			i++;
		if (!(dico[struct_n] = malloc(sizeof(t_nbr_translation))))
			return (0);
		split_n_cat(str, &i, dico[struct_n]);
		struct_n++;
	}
	if (!(dico[struct_n] = malloc(sizeof(t_nbr_translation))))
		return (0);
	dico[struct_n]->translation = 0;
	return (dico);
}
