/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:30:30 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/21 09:03:35 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *tabbis;
	int i;

	i = 0;
	if (!(tabbis = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tabbis[i] = (*f)(tab[i]);
		i++;
	}
	return (tabbis);
}
