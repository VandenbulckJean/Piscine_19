/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dcpstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 12:36:20 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/23 12:11:08 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char c)
{
	if (!(c > 31 && c < 127))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	return (1);
}

int	ft_str_is_double_point(char c)
{
	if (c == ':')
		return (1);
	return (0);
}
