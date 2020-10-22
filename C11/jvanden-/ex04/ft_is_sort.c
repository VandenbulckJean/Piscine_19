/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:42:00 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/20 18:13:58 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int croissant;
	int decroissant;

	i = 0;
	croissant = 0;
	decroissant = 0;
	while (tab[i])
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			decroissant++;
		else if ((*f)(tab[i], tab[i + 1]) < 0)
			croissant++;
		i++;
	}
	if (decroissant != 0 && croissant != 0)
		return (0);
	return (1);
}
