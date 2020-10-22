/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndiaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:09:54 by mndiaye           #+#    #+#             */
/*   Updated: 2020/02/16 20:09:56 by mndiaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*comb_12(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 4)))
		return (NULL);
	tab[0] = 4132;
	tab[1] = 4231;
	tab[2] = 4312;
	tab[3] = 0;
	return (tab);
}

int	*comb_28(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 4)))
		return (NULL);
	tab[0] = 1324;
	tab[1] = 2134;
	tab[2] = 2314;
	tab[3] = 0;
	return (tab);
}

int	*comb_21(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 4)))
		return (NULL);
	tab[0] = 1432;
	tab[1] = 2431;
	tab[2] = 3421;
	tab[3] = 0;
	return (tab);
}

int	*comb_29(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 4)))
		return (NULL);
	tab[0] = 1243;
	tab[1] = 1342;
	tab[2] = 2341;
	tab[3] = 0;
	return (tab);
}

int	*comb_20(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 7)))
		return (NULL);
	tab[0] = 1423;
	tab[1] = 2143;
	tab[2] = 2413;
	tab[3] = 3142;
	tab[4] = 3241;
	tab[5] = 3412;
	tab[6] = 0;
	return (tab);
}
