/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:38:15 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/14 14:12:53 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

	if (!(answer = malloc(sizeof(strs) + size * sizeof(sep) + 1)))
		return (0);
	if (size < 0)
		return (0);
	if (size == 0)
	{
		answer[0] = '\0';
		return (answer);
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

int main(int argc, char **argv)
{
    printf("%s", ft_strjoin(argc - 1, &argv[1], ", "));
}
