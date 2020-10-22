/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:35:14 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/17 17:04:34 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(src));
	if (dest != NULL)
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab_struc;
	int				i;

	i = 0;
	if (!(tab_struc = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		tab_struc[i].size = ft_strlen(av[i]);
		tab_struc[i].str = av[i];
		tab_struc[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_struc[i].str = 0;
	return (tab_struc);
}
