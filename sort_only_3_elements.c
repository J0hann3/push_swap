/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_only_3_elements.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:13:32 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 13:44:43 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_only_132(t_list **lst_a, t_list **lst_b, t_res_opti res)
{
	rra(lst_a, lst_b, res);
	sa(lst_a, lst_b, res);
}

void	sort_only_321(t_list **lst_a, t_list **lst_b, t_res_opti res)
{
	sa(lst_a, lst_b, res);
	rra(lst_a, lst_b, res);
}

int	sort_a_only_3(t_position lst_a, t_position lst_b, t_res_opti res)
{
	if (size_lst(*lst_a.begin) != lst_a.len)
		return (0);
	if ((*lst_a.begin)->nb < (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb > (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb < (*lst_a.begin)->next->next->nb)
		sort_only_132(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb < (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb > (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb > (*lst_a.begin)->next->next->nb)
		rra(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb > (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb < (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb < (*lst_a.begin)->next->next->nb)
		sa(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb > (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb < (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb > (*lst_a.begin)->next->next->nb)
		ra(lst_a.begin, lst_b.begin, res);
	else if ((*lst_a.begin)->nb > (*lst_a.begin)->next->nb
		&& (*lst_a.begin)->next->nb > (*lst_a.begin)->next->next->nb
		&& (*lst_a.begin)->nb > (*lst_a.begin)->next->next->nb)
		sort_only_321(lst_a.begin, lst_b.begin, res);
	return (1);
}

/*				A				|	Only A	|		B
123								|			|	/sb, rb, sb, rrb, sb
132		ra, sa, rra				|	rra, sa	|	/sb, rb, sb, rrb
231		ra, sa, rra, sa			|	rra		|	/sb
213		sa						|	sa		|	/rb, sb, rrb, sb
312		sa, ra, sa, rra			|	ra		|	/rb, sb, rrb
321		sa, ra, sa, rra, sa		|	sa, rra	|	/
*/