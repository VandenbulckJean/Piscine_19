/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:27:52 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/08 09:54:30 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char str)
{
	if ((str < 'A' || str > 'z') || (str > 'Z' && str < 'a'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int		ft_str_is_uppercase(char str)
{
	if (str < 'A' || str > 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int		ft_str_is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]))
		{
			if (ft_str_is_lowercase(str[i]))
			{
				str[i] = str[i] - 32;
			}
			i++;
			while (ft_str_is_alpha(str[i]))
			{
				if (ft_str_is_uppercase(str[i]))
				{
					str[i] = str[i] + 32;
				}
				i++;
			}
		}
		i++;
	}
	return (str);
}
