/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 18:23:41 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/06 19:00:24 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tableauinverse[size];
	int i;
	int memory;

	i = 0;
	memory = size;
	while (i < size)
	{
		tableauinverse[i] = tab[memory - 1];
		i++;
		memory--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tableauinverse[i];
		i++;
	}
}
