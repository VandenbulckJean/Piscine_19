/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:15:13 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/09 16:25:05 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srcsize;
	unsigned int	i;

	i = 0;
	srcsize = ft_strlen(src);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i - 1] = '\0';
	}
	return (srcsize);
}
