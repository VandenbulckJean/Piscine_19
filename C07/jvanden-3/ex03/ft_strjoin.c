/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:38:15 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/17 19:25:32 by jvanden-         ###   ########.fr       */
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

int		ultimate_strlen(char **strs, int size)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

void	copy_to_answer(char **strs, int size, char *sep, char *answer)
{
	int		i;
	int		j;
	int		answer_pos;

	i = 0;
	answer_pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			answer[answer_pos] = strs[i][j];
			answer_pos++;
			j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			answer[answer_pos] = sep[j];
			answer_pos++;
			j++;
		}
		i++;
	}
	answer[answer_pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*answer;
    
    if (size == 0)
    {
        if (!(answer = malloc(sizeof(char))))
            return (0);
		return (answer);
    }
    if (!(answer = malloc(sizeof(char) * (ultimate_strlen(strs, size)
                            + (ft_strlen(sep) * (size - 1)) + 1))))
        return (0);
	copy_to_answer(strs, size, sep, answer)	;
	return (answer);
}

int main(int argc, char **argv)
{
    printf("%s", ft_strjoin(argc - 1, &argv[1], ", "));
}
