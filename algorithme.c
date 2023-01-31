/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithme.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:17:46 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 16:00:30 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick_sort_a(t_position lst_a, t_position lst_b, t_res_opti res)
{
	size_t	len_a;
	int		cpt_rb;

	cpt_rb = 0;
	len_a = lst_a.len;
	if (is_sort_a(lst_a) == 1)
		return ;
	if (sort_a_3(lst_a, lst_b, res) == 1)
		return ;
	divise_elements_a(&lst_a, &lst_b, res, &cpt_rb);
	rev_rotate_a(lst_a, lst_b, res);
	if (lst_a.b == 1 && lst_b.b == 1)
		exception(lst_a, lst_b, res, &cpt_rb);
	else
	{
		quick_sort_a(lst_a, lst_b, res);
		quick_sort_b(lst_a, lst_b, res);
	}
	join_to_a(lst_a, lst_b, res);
}

void	quick_sort_b(t_position lst_a, t_position lst_b, t_res_opti res)
{
	if (is_sort_b(lst_b) == 1)
		return ;
	if (lst_b.len < 3)
	{
		if (is_sort_b(lst_b) != 1)
			sb(lst_a.begin, lst_b.begin, res);
		return ;
	}
	divise_elements_b(&lst_a, &lst_b, res);
	rev_rotate_b(lst_a, lst_b, res);
	quick_sort_a(lst_a, lst_b, res);
	quick_sort_b(lst_a, lst_b, res);
	join_to_b(lst_a, lst_b, res);
}
