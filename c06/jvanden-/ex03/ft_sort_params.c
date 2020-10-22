/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 08:33:05 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/12 10:37:53 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

void		initialize_tab_ordre(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		tab[i] = i + 1;
		i++;
	}
}

void		order_tab(int *tab, int argc, char **argv)
{
	int i;
	int swap_amount;
	int buffer;

	swap_amount = 1;
	while (swap_amount > 0)
	{
		swap_amount = 0;
		i = 0;
		while (i < argc - 2)
		{
			if (ft_strcmp(argv[tab[i]], argv[tab[i + 1]]) > 0)
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
				swap_amount++;
			}
			i++;
		}
	}
}

int			main(int argc, char **argv)
{
	int		ordre_d_affichage[argc - 1];
	int		i;
	char	c;

	c = '\n';
	initialize_tab_ordre(ordre_d_affichage, argc - 1);
	order_tab(ordre_d_affichage, argc, argv);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[ordre_d_affichage[i]]);
		write(1, &c, 1);
		i++;
	}
}
