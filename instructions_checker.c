/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:35:57 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 13:39:49 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker.h"

void	rra_checker(t_list **list_a, t_list **list_b)
{
	(void)list_b;
	*list_a = (*list_a)->previous;
}

void	rrb_checker(t_list **list_a, t_list **list_b)
{
	(void)list_a;
	*list_b = (*list_b)->previous;
}

void	ra_checker(t_list **list_a, t_list **list_b)
{
	(void)list_b;
	*list_a = (*list_a)->next;
}

void	rb_checker(t_list **list_a, t_list **list_b)
{
	(void)list_a;
	*list_b = (*list_b)->next;
}
