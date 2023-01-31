/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:25:44 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/12 16:59:21 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	opposition(enum e_action mouv, enum e_action cmp)
{
	if (mouv == e_pa && cmp == e_pb)
		return (0);
	else if (mouv == e_pb && cmp == e_pa)
		return (0);
	else if (mouv == e_rb && cmp == e_ra)
		return (0);
	else if (mouv == e_ra && cmp == e_rb)
		return (0);
	else if (mouv == e_rrb && cmp == e_rra)
		return (0);
	else if (mouv == e_rra && cmp == e_rrb)
		return (0);
	else if (mouv == e_sb && cmp == e_sa)
		return (0);
	else if (mouv == e_sa && cmp == e_sb)
		return (0);
	else
		return (-1);
}

int	find_distance_a(t_list_opti *lst_a, t_list_opti *lst_b)
{
	int	max_a;

	max_a = 0;
	while (lst_b != NULL && opposition(lst_a->mouv, lst_b->mouv) != 0)
	{
		max_a++;
		lst_b = lst_b->next;
	}
	if (lst_b == NULL)
		return (-1);
	return (max_a);
}

int	find_distance_b(t_list_opti *lst_a, t_list_opti *lst_b)
{
	int	max_b;

	max_b = 0;
	while (lst_a != NULL && opposition(lst_b->mouv, lst_a->mouv) != 0)
	{
		max_b++;
		lst_a = lst_a->next;
	}
	if (lst_a == NULL)
		return (-1);
	return (max_b);
}

void	merge_opti(t_res_opti res)
{
	int	max_a;
	int	max_b;

	while ((*res.lst_a) != NULL && (*res.lst_b) != NULL)
	{
		max_a = find_distance_a(*res.lst_a, *res.lst_b);
		max_b = find_distance_b(*res.lst_a, *res.lst_b);
		if ((max_a < max_b && max_a != -1) || (max_b == -1 && max_a > 0))
			add_ba(res, max_a);
		else if ((max_b < max_a && max_b != -1) || (max_a == -1 && max_b > 0))
			add_ab(res, max_b);
		else if (max_a == max_b && max_a != -1)
			add_equal(res, max_a, max_b);
		else
			add_one_one(res);
	}
}

void	merge(t_res_opti res)
{
	if (res.lst_a == NULL || res.lst_b == NULL || res.res == NULL)
		return ;
	if (*res.lst_a == NULL && *res.lst_b == NULL)
		return ;
	opti(res.lst_a);
	opti(res.lst_b);
	merge_opti(res);
	if (*res.lst_a == NULL && *res.lst_b != NULL)
	{
		add_back_opti(res.res, *res.lst_b);
		*res.lst_b = NULL;
	}
	else if (*res.lst_b == NULL && *res.lst_a != NULL)
	{
		add_back_opti(res.res, *res.lst_a);
		*res.lst_a = NULL;
	}
}
