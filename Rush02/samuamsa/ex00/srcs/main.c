/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 09:29:39 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 21:58:48 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dicoparsing.h"
#include "save_file_in_string.h"
#include "translation.h"
#include "ft_stringop.h"

void	freetabstruct(t_nbr_translation **index)
{
	int i;

	i = 0;
	while (index[i]->translation != 0)
	{
		free(index[i]->nbr);
		free(index[i]->translation);
		free(index[i]);
		i++;
	}
	free(index[i]->nbr);
	free(index[i]->translation);
	free(index[i]);
	free(index);
}

int		main(int argc, char **argv)
{
	t_nbr_translation	**index;
	char				*saved_file;

	if (argc == 2 || argc == 3)
	{
		if (argc == 2)
			saved_file = save_file("dico");
		else
			saved_file = save_file(argv[1]);
		if (saved_file == 0)
			ft_putstr("Dict Error\n");
		else
		{
			index = ft_split(saved_file);
			free(saved_file);
			if (argc == 2)
				print_all(index, argv[1]);
			else
				print_all(index, argv[2]);
			freetabstruct(index);
		}
	}
	else
		ft_putstr("Error\n");
	return (0);
}
