/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:26:46 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/17 13:48:05 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "print_answer.h"
#include "check_line.h"
#include "index.h"

int		set_combination_to_array(int index, int comb, int *solution)
{
	int *solutions;

	solutions = returncomb(index);
	if (solutions[comb] != 0)
	{
		solution[0] = solutions[comb] / 1000;
		solution[1] = (solutions[comb] / 100) % 10;
		solution[2] = (solutions[comb] / 10) % 10;
		solution[3] = solutions[comb] % 10;
		free(solutions);
		return (1);
	}
	else
		return (0);
}

int		set_column(int **game_board, int **povs, int x, int comb)
{
	int *solution;
	int povup;
	int povdown;
	int i;

	if (!(solution = malloc(sizeof(int) * 4)))
		return (0);
	povup = povs[0][x];
	povdown = povs[1][x];
	if (!(set_combination_to_array(povup * 9 + povdown, comb, solution)))
	{
		free(solution);
		return (0);
	}
	i = 0;
	while (i < 4)
	{
		game_board[i][x] = solution[i];
		i++;
	}
	free(solution);
	return (1);
}

void	reset_column(int **game_board, int x)
{
	int i;

	i = 0;
	while (i < 4)
	{
		game_board[i][x] = 0;
		i++;
	}
}

int		placement(int **game_board, int **povs, int x, int comb)
{
    print_board(game_board);
	if (are_lines_correct(game_board, povs))
		return (1);
	if (!(set_column(game_board, povs, x, comb)))
		return (0);
	if (x < 3)
	{
		if (placement(game_board, povs, x + 1, 0))
			return (1);
	}
	if (placement(game_board, povs, x, comb + 1))
		return (1);
	reset_column(game_board, x);
	return (0);
}
