/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:46:32 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 16:32:19 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_position lst_a, t_position lst_b, t_res_opti res)
{
	size_t	i;
	size_t	len_a;

	i = 0;
	len_a = size_lst(*lst_a.begin);
	if (len_a < lst_a.len)
	{
		while (i < (len_a - lst_a.len))
		{
			ra(lst_a.begin, lst_b.begin, res);
			i++;
		}
	}
	else
	{
		while (lst_a.len != len_a && i < lst_a.len)
		{
			rra(lst_a.begin, lst_b.begin, res);
			i++;
		}
	}
}

void	rev_rotate_b(t_position lst_a, t_position lst_b, t_res_opti res)
{
	size_t	i;
	size_t	len_b;

	i = 0;
	len_b = size_lst(*lst_b.begin);
	if (len_b < lst_b.len)
	{
		while (i < (len_b - lst_b.len))
		{
			rb(lst_a.begin, lst_b.begin, res);
			i++;
		}
	}
	else
	{
		while (lst_b.len != len_b && i < lst_b.len)
		{
			rrb(lst_a.begin, lst_b.begin, res);
			i++;
		}
	}
}
