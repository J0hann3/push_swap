/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_elements.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:45:42 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 16:47:37 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	join_to_a(t_position lst_a, t_position lst_b, t_res_opti res)
{
	size_t	i;

	i = 0;
	while (i < lst_b.len)
	{
		pa(lst_a.begin, lst_b.begin, res);
		i++;
	}
}

void	join_to_b(t_position lst_a, t_position lst_b, t_res_opti res)
{
	size_t	i;

	i = 0;
	while (i < lst_a.len)
	{
		pb(lst_a.begin, lst_b.begin, res);
		i++;
	}
}
