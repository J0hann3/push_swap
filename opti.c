/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opti.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:19:40 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 15:28:32 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	supprime_elements(enum e_action find, enum e_action cmp)
{
	if ((find == e_pb && cmp == e_pa) || (find == e_pa && cmp == e_pb)
		|| (find == e_ra && cmp == e_rra) || (find == e_rra && cmp == e_ra)
		|| (find == e_rb && cmp == e_rrb) || (find == e_rrb && cmp == e_rb)
		|| (find == e_sb && cmp == e_sb) || (find == e_sa && cmp == e_sa)
		|| (find == e_ss && cmp == e_ss) || (find == e_rrr && cmp == e_rr)
		|| (find == e_rr && cmp == e_rrr))
		return (1);
	return (0);
}

void	opti(t_list_opti **res)
{
	t_list_opti	*ptr;

	ptr = *res;
	if (res == NULL || *res == NULL)
		return ;
	while (ptr != NULL && ptr->next != NULL)
	{
		if (supprime_elements(ptr->mouv, ptr->next->mouv) == 1)
			ptr = delete_2_opti(res, ptr);
		else if ((ptr->mouv == e_sa && ptr->next->mouv == e_sb)
			|| (ptr->mouv == e_sb && ptr->next->mouv == e_sa)
			|| (ptr->mouv == e_ra && ptr->next->mouv == e_rb)
			|| (ptr->mouv == e_rb && ptr->next->mouv == e_ra)
			|| (ptr->mouv == e_rra && ptr->next->mouv == e_rrb)
			|| (ptr->mouv == e_rrb && ptr->next->mouv == e_rra))
			replace_opti(ptr);
		else
			ptr = ptr->next;
	}
}
