/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:43:14 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 16:00:45 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pivot_a(t_position lst_a, t_position lst_b, int *pivot_2)
{
	int		*tab;
	int		pivot;

	tab = lst_to_tab(lst_a);
	sort_int_tab(tab, lst_a.len);
	pivot = mediane(tab, lst_a.len);
	if (lst_a.b == 1 && lst_b.b == 1)
		*pivot_2 = tab[lst_a.len / 4];
	free(tab);
	return (pivot);
}

int	find_pivot_b(t_position lst_b)
{
	int		*tab;
	int		pivot;

	tab = lst_to_tab(lst_b);
	sort_int_tab(tab, lst_b.len);
	pivot = mediane(tab, lst_b.len);
	free(tab);
	return (pivot);
}
