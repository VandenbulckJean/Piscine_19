/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_answer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sturkogl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:11:43 by sturkogl          #+#    #+#             */
/*   Updated: 2020/02/16 20:11:45 by sturkogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		print_char(str[i]);
		i++;
	}
}

void	print_int_in_char(int chiffre)
{
	char c;

	c = chiffre + '0';
	print_char(c);
}

void	print_line(int *board_line)
{
	int i;

	i = 0;
	while (i < 4)
	{
		print_int_in_char(board_line[i]);
		if (i != 3)
			print_char(' ');
		i++;
	}
	print_char('\n');
}

void	print_board(int **game_board)
{
	int i;

	i = 0;
	while (i < 4)
	{
		print_line(game_board[i]);
		i++;
	}
    print_char('\n');
}
