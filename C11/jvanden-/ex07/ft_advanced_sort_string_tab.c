/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:05:10 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/20 18:13:27 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*buffer;
	int		is_perfect;

	i = 1;
	is_perfect = 1;
	while (is_perfect != 0)
	{
		is_perfect = 0;
		i = 0;
		while (tab[i] != 0)
		{
			if ((*cmp)(tab[i - 1], tab[i]) > 0)
			{
				buffer = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = buffer;
				is_perfect++;
			}
			i++;
		}
	}
}
