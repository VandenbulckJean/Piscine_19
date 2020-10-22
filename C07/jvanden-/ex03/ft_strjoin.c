/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:38:15 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/14 09:22:01 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*answer;
	int		i;

	if (!(answer = malloc(sizeof(strs) + size * sizeof(sep))))
		return (0);
	if (size < 1)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ft_strcat(answer, strs[i]);
			if (i < size - 1)
				ft_strcat(answer, sep);
			i++;
		}
		return (answer);
	}
}
