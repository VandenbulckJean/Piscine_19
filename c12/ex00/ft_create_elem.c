/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:33:08 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/27 14:37:28 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list *new_element;

	if(!(new_element = malloc(sizeof(t_list))))
		return (0);
	new_element->data = data;
	new_element->next = 0;
	return (new_element);
}
