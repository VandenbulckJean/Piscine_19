/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:27:52 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/08 20:24:14 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	all_lower_case(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	all_lower_case(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || (str[i - 1] < '0' || str[i - 1] > 'z') ||
				((str[i - 1] > '9' && str[i - 1] < 'A') ||
					(str[i - 1] > 'Z' && str[i - 1] < 'a')))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
