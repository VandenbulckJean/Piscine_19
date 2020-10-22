/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 12:46:58 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/09 15:08:55 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int x, char extreme, char milieu)
{
	int i;

	i = 2;
	if (x == 1)
	{
		ft_putchar(extreme);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(extreme);
		while (i < x)
		{
			ft_putchar(milieu);
			i++;
		}
		ft_putchar(extreme);
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
			ft_printline(x, 'A', 'B');
		}
		else if (y == 2)
		{
			ft_printline(x, 'A', 'B');
			ft_printline(x, 'C', 'B');
		}
		else
		{
			ft_printline(x, 'A', 'B');
			while (i < y)
			{
				ft_printline(x, 'B', ' ');
				i++;
			}
			ft_printline(x, 'C', 'B');
		}
	}
}
