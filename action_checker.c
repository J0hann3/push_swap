/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:23:48 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:41:00 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker.h"

int	action(enum e_action mouv, t_list **lst_a, t_list **lst_b)
{
	if (mouv == e_ra)
		ra_checker(lst_a, lst_b);
	else if (mouv == e_rb)
		rb_checker(lst_a, lst_b);
	else if (mouv == e_rra)
		rra_checker(lst_a, lst_b);
	else if (mouv == e_rrb)
		rrb_checker(lst_a, lst_b);
	else if (mouv == e_pa)
		pa_checker(lst_a, lst_b);
	else if (mouv == e_pb)
		pb_checker(lst_a, lst_b);
	else if (mouv == e_sa)
		sa_checker(lst_a, lst_b);
	else if (mouv == e_sb)
		sb_checker(lst_a, lst_b);
	else
		return (0);
	return (1);
}

int	action_1(enum e_action mouv, t_list **lst_a, t_list **lst_b)
{
	if (mouv == e_rr)
	{
		ra_checker(lst_a, lst_b);
		rb_checker(lst_a, lst_b);
	}
	else if (mouv == e_rrr)
	{
		rra_checker(lst_a, lst_b);
		rrb_checker(lst_a, lst_b);
	}
	else if (mouv == e_ss)
	{
		sa_checker(lst_a, lst_b);
		sb_checker(lst_a, lst_b);
	}
	else
		return (0);
	return (1);
}
