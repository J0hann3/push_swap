/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_elements.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:47:08 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:59:51 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	divise_elements_a(t_position *lst_a, t_position *lst_b, t_res_opti res,
		int *cpt_rb)
{
	size_t	i;
	size_t	nb_a;
	int		pivot;
	int		p_2;

	i = -1;
	nb_a = 0;
	pivot = find_pivot_a(*lst_a, *lst_b, &p_2);
	while (++i < lst_a->len)
	{
		if ((*(lst_a->begin))->nb < pivot && nb_a <= lst_a->len / 2)
		{
			pb(lst_a->begin, lst_b->begin, res);
			if ((lst_a->b == 1 && lst_b->b == 1) && (*(lst_b->begin))->nb < p_2)
			{
				rb(lst_a->begin, lst_b->begin, res);
				*cpt_rb = *cpt_rb + 1;
			}
			nb_a++;
		}
		else
			ra(lst_a->begin, lst_b->begin, res);
	}
	lst_a->len = lst_a->len - nb_a;
	lst_b->len = nb_a;
}

void	divise_elements_b(t_position *lst_a, t_position *lst_b, t_res_opti res)
{
	size_t	i;
	size_t	nb_b;
	int		pivot;

	i = 0;
	nb_b = 0;
	pivot = find_pivot_b(*lst_b);
	while (i < lst_b->len && nb_b <= (lst_b->len + 1) / 2)
	{
		if ((*(lst_b->begin))->nb >= pivot)
		{
			pa(lst_a->begin, lst_b->begin, res);
			nb_b++;
		}
		else
			rb(lst_a->begin, lst_b->begin, res);
		i++;
	}
	lst_b->len = lst_b->len - nb_b;
	lst_a->len = nb_b;
}
