/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringop.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 09:53:10 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 12:23:35 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGOP_H
# define FT_STRINGOP_H

# include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
