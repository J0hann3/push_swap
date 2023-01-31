/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:36:15 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:39:05 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_a_3(t_position lst_a, t_position lst_b, t_res_opti res)
{
	if (lst_a.len <= 3)
	{
		if (lst_a.len == 3)
			sort_a(lst_a, lst_b, res);
		else if (is_sort_a(lst_a) != 1)
		{
			sa(lst_a.begin, lst_b.begin, res);
		}
		return (1);
	}
	return (0);
}
