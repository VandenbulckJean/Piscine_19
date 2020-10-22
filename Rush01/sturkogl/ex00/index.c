/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndiaye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:09:43 by mndiaye           #+#    #+#             */
/*   Updated: 2020/02/16 20:09:46 by mndiaye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "index2.h"

int	*comb_13(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 2)))
		return (NULL);
	tab[0] = 4321;
	tab[1] = 0;
	return (tab);
}

int	*comb_37(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 2)))
		return (NULL);
	tab[0] = 1234;
	tab[1] = 0;
	return (tab);
}

int	*comb_11(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 3)))
		return (NULL);
	tab[0] = 4123;
	tab[1] = 4213;
	tab[2] = 0;
	return (tab);
}

int	*comb_19(void)
{
	int *tab;

	if (!(tab = malloc(sizeof(int) * 3)))
		return (NULL);
	tab[0] = 3124;
	tab[1] = 3214;
	tab[2] = 0;
	return (tab);
}

int	*returncomb(int index)
{
	if (index == 13)
		return (comb_13());
	if (index == 37)
		return (comb_37());
	if (index == 11)
		return (comb_11());
	if (index == 19)
		return (comb_19());
	if (index == 12)
		return (comb_12());
	if (index == 28)
		return (comb_28());
	if (index == 21)
		return (comb_21());
	if (index == 29)
		return (comb_29());
	return (comb_20());
}
