/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 12:46:58 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/09 15:45:09 by lplummer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int x, char extreme_gau, char milieu, char extreme_dro)
{
	int i;

	i = 2;
	if (x == 1)
	{
		ft_putchar(extreme_gau);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(extreme_gau);
		while (i < x)
		{
			ft_putchar(milieu);
			i++;
		}
		ft_putchar(extreme_dro);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	if (x > 0 && y > 0)
	{
		if (y == 1)
		{
			ft_printline(x, 'A', 'B', 'C');
		}
		else if (y == 2)
		{
			ft_printline(x, 'A', 'B', 'C');
			ft_printline(x, 'C', 'B', 'A');
		}
		else
		{
			ft_printline(x, 'A', 'B', 'C');
			while (i < y)
			{
				ft_printline(x, 'B', ' ', 'B');
				i++;
			}
			ft_printline(x, 'C', 'B', 'A');
		}
	}
}
