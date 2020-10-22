/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:19:48 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/27 16:13:21 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_list_size(t_list *begin_list)
{
	int count;
	t_list *ptr;

	count = 0;
	ptr = begin_list;
	while (ptr->next != 0)
	{
		count++;
		ptr = ptr_next;
	}
	return (count);
}
