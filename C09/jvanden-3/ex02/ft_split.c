/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:15:07 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/20 15:38:49 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_char(char *str, char *charset, int i)
{
	int char_nbr;

	char_nbr = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset))
			break ;
		char_nbr++;
		i++;
	}
	return (char_nbr);
}

int		count_words(char *str, char *charset)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	return (count);
}

void	split_n_cat(char *str, char *charset, int *i, char *answer)
{
	int j;

	j = 0;
	while (str[*i] && !(is_charset(str[*i], charset)))
	{
		answer[j] = str[*i];
		j++;
		(*i)++;
	}
	answer[j] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**answer;
	int		mot;
	int		i;

	i = 0;
	mot = 0;
	if (!(answer = malloc(sizeof(char*) * (count_words(str, charset) + 1))))
		return (0);
	while (mot < count_words(str, charset))
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (!(answer[mot] = malloc(sizeof(char) *
					(count_char(str, charset, i) + 1))))
			return (0);
		split_n_cat(str, charset, &i, answer[mot]);
		mot++;
	}
	answer[mot] = 0;
	return (answer);
}
