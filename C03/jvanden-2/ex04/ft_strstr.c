/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 12:26:37 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/10 13:06:45 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strcomp(char *to_find, char *str)
{
	int i;

	i = 0;
	while (to_find[i])
	{
		if (to_find[i] != str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		if (strcomp(to_find, str + i))
			return (str + i);
		i++;
	}
	return (0);
}
