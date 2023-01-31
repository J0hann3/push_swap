/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:14 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 16:01:06 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exception(t_position lst_a, t_position lst_b, t_res_opti res,
			int *cpt_rb)
{
	size_t	i;

	i = 0;
	lst_a.b = 0;
	lst_b.b = 0;
	lst_b.len = lst_b.len - *cpt_rb;
	quick_sort_a(lst_a, lst_b, res);
	quick_sort_b(lst_a, lst_b, res);
	while (i < lst_b.len)
	{
		pa(lst_a.begin, lst_b.begin, res);
		i++;
	}
	lst_b.len = *cpt_rb;
	quick_sort_b(lst_a, lst_b, res);
}
