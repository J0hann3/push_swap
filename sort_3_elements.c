/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elements.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:41:19 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 13:45:33 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_132(t_list **lst_a, t_list **lst_b, t_res_opti res)
{
	ra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
	rra(lst_a, lst_b, res);
}

void	sort_231(t_list **lst_a, t_list **lst_b, t_res_opti res)
{
	ra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
	rra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
}

void	sort_312(t_list **lst_a, t_list **lst_b, t_res_opti res)
{
	sa(lst_a, lst_b, res);
	ra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
	rra(lst_a, lst_b, res);
}

void	sort_321(t_list **lst_a, t_list **lst_b, t_res_opti res)
{
	sa(lst_a, lst_b, res);
	ra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
	rra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
}

void	sort_a(t_position lst_a, t_position lst_b, t_res_opti res)
{
	if (sort_a_only_3(lst_a, lst_b, res) == 1)
		return ;
	if ((*lst_a.begin)->nb < (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb > (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb < (*lst_a.begin)->next->next->nb)
		sort_132(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb < (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb > (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb > (*lst_a.begin)->next->next->nb)
		sort_231(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb > (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb < (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb < (*lst_a.begin)->next->next->nb)
		sa(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb > (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb < (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb > (*lst_a.begin)->next->next->nb)
		sort_312(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb > (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb > (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb > (*lst_a.begin)->next->next->nb)
		sort_321(lst_a.begin, lst_b.begin, res);
}
