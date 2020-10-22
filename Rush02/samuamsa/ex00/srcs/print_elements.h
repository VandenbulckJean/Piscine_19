/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_elements.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbertoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:30:34 by rbertoui          #+#    #+#             */
/*   Updated: 2020/02/23 14:47:28 by rbertoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_ELEMENTS_H
# define PRINT_ELEMENTS_H

void	print_chiffre(char c, t_nbr_translation **index);
void	printbeforetwenty(t_nbr_translation **index, char d, int *i);
void	print_nbr(char c, char d, t_nbr_translation **index);
void	print_base(int base, int unite, t_nbr_translation **index);
void	print_block(char *block, int size, int multiple_mille,
		t_nbr_translation **index);

#endif
