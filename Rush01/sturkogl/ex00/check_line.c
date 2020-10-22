/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 19:49:33 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/16 19:32:56 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "backtracking.h"
#include "index.h"

int	are_tabs_equal(int *tab1, int *tab2)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		if (tab1[i] == tab2[i])
			count++;
		i++;
	}
	if (count == 4)
		return (1);
	return (0);
}

int	is_line_correct(int **game_board, int **povs, int y)
{
	int povl;
	int povr;
	int *solution;
	int i;

	if (!(solution = malloc(sizeof(int) * 4)))
		return (0);
	povl = povs[2][y];
	povr = povs[3][y];
	i = 0;
	while (set_combination_to_array(povl * 9 + povr, i, solution))
	{
		if (are_tabs_equal(solution, game_board[y]))
		{
			free(solution);
			return (1);
		}
		i++;
	}
	free(solution);
	return (0);
}

int	are_lines_correct(int **game_board, int **povs)
{
	int i;
	int nbr_line_correct;

	i = 0;
	nbr_line_correct = 0;
	while (i < 4)
	{
		if (is_line_correct(game_board, povs, i))
			nbr_line_correct++;
		i++;
	}
	if (nbr_line_correct == 4)
		return (1);
	return (0);
}
