/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 14:15:07 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/14 09:18:27 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset, int n)
{
	if (c == charset[n])
		return (1);
	return (0);
}

int		split_ncat(char *str, char *charset, char *result, int n)
{
	int i;

	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
		if (is_charset(str[i], charset, n))
			break ;
	}
	result[i] = charset[n];
	result[i + 1] = '\0';
	return (i);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		countcharperstring(char *str, char *charset, int n)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
		if (is_charset(str[i], charset, n))
			break ;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		n;

	i = 0;
	n = 1;
	if (!(result = malloc(sizeof(str) + sizeof(charset) *
					ft_strlen(charset) + sizeof(int))))
		return (0);
	while (str[i] && charset[n])
	{
		if (is_charset(str[i], charset, n - 1))
		{
			if (!(result[n - 1] = malloc(sizeof(char) *
							countcharperstring(str, charset, n))))
				return (0);
			i += split_ncat(str + i, charset, result[n - 1], n);
			n++;
		}
		else
			i++;
	}
	result[n - 1] = 0;
	return (result);
}
