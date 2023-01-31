/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:35:57 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/17 13:30:04 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **list_a, t_list **list_b, t_res_opti res)
{
	(void)list_b;
	if (*list_a == (*list_a)->next)
		return ;
	*list_a = (*list_a)->previous;
	add_back_opti(res.lst_a, new_opti(e_rra));
}

void	rrb(t_list **list_a, t_list **list_b, t_res_opti res)
{
	(void)list_a;
	if (*list_b == (*list_b)->next)
		return ;
	*list_b = (*list_b)->previous;
	add_back_opti(res.lst_b, new_opti(e_rrb));
}

void	ra(t_list **list_a, t_list **list_b, t_res_opti res)
{
	(void)list_b;
	if (*list_a == (*list_a)->next)
		return ;
	*list_a = (*list_a)->next;
	add_back_opti(res.lst_a, new_opti(e_ra));
}

void	rb(t_list **list_a, t_list **list_b, t_res_opti res)
{
	(void)list_a;
	if (*list_b == (*list_b)->next)
		return ;
	*list_b = (*list_b)->next;
	add_back_opti(res.lst_b, new_opti(e_rb));
}
