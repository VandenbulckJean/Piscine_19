/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 10:59:35 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/16 19:40:08 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "check_input.h"
#include "print_answer.h"
#include "backtracking.h"

int		**create_basis_board(void)
{
	int **game_board;
	int i;
	int j;

	i = 0;
	if (!(game_board = malloc(sizeof(int) * 16)))
		print_str("Error\n");
	while (i < 4)
	{
		if (!(game_board[i] = malloc(sizeof(int) * 4)))
			print_str("Error\n");
		i++;
	}
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			game_board[j][i] = 0;
			i++;
		}
		j++;
	}
	return (game_board);
}

void	split_n_save_line(char *str, int *line, int i)
{
	int chiffre;

	chiffre = 0;
	while (str[i] && chiffre < 4)
	{
		if (i == 0 || str[i - 1] == ' ')
		{
			line[chiffre] = (str[i] - '0');
			chiffre++;
		}
		i++;
	}
}

int		**get_n_save_pov(char *str)
{
	int **povs;
	int i;

	if (!(povs = malloc(sizeof(int) * 16)))
		print_str("Error\n");
	i = 0;
	while (i < 4)
	{
		if (!(povs[i] = malloc(sizeof(int) * 4)))
			print_str("Error\n");
		split_n_save_line(str, povs[i], i * 8);
		i++;
	}
	return (povs);
}

int		main(int argc, char **argv)
{
	int **game_board;

	game_board = create_basis_board();
    if (argc == 2)
    {
        if (check_input(argv[1]))
        {
            if (placement(game_board, get_n_save_pov(argv[1]), 0, 0))
                print_board(game_board);
            else
                print_str("Error\n");
        }
    }
	else
		print_str("Error\n");
	return (0);
}
