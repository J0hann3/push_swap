/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:10:20 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 13:10:55 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort_a(t_position lst_a)
{
	size_t	i;
	t_list	*current;

	current = *(lst_a.begin);
	i = 0;
	if (current == NULL)
		return (-1);
	while (i < lst_a.len - 1)
	{
		if (current->nb > current->next->nb)
			return (0);
		current = current->next;
		i++;
	}
	return (1);
}

int	is_sort_b(t_position lst_b)
{
	size_t	i;
	t_list	*current;

	current = *(lst_b.begin);
	i = 0;
	if (current == NULL)
		return (-1);
	while (i < lst_b.len - 1)
	{
		if (current->nb < current->next->nb)
			return (0);
		current = current->next;
		i++;
	}
	return (1);
}
