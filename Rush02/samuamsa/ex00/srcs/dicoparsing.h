/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dicoparsing.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:06:51 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/23 18:36:59 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICOPARSING_H
# define DICOPARSING_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef	struct			s_nbr_translation
{
	char *nbr;
	char *translation;
}						t_nbr_translation;

t_nbr_translation		**ft_split(char *str);

#endif
