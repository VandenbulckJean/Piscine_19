/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:30:40 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/17 17:59:36 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int length;

	i = 0;
	length = max - min;
	if (length <= 0)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * length)))
		return (-1);
	while (i < length)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (length);
}
