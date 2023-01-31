/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:33:40 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 13:11:00 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*lst_to_tab(t_position lst)
{
	size_t	i;
	size_t	size;
	int		*tab;
	t_list	*tmp;

	i = 0;
	size = lst.len;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	tmp = *(lst.begin);
	while (i < size)
	{
		tab[i] = tmp->nb;
		i++;
		tmp = tmp->next;
	}
	return (tab);
}

size_t	max(int *t, size_t size)
{
	size_t	i;
	size_t	index;
	int		m;

	i = 0;
	m = t[0];
	index = 0;
	while (i < size)
	{
		if (t[i] > m)
		{
			m = t[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	sort_int_tab(int *tab, size_t size)
{
	size_t	index_max;
	int		tmp;

	if (tab == NULL)
		return ;
	while (size > 1)
	{
		index_max = max(tab, size);
		tmp = tab[size - 1];
		tab[size - 1] = tab[index_max];
		tab[index_max] = tmp;
		size--;
	}
}

int	mediane(int *tab, size_t size)
{
	return (tab[size / 2]);
}
