/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 10:57:58 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/12 17:36:25 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max || tab == NULL)
	{
		return (0);
	}
	else
	{
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
	}
}
