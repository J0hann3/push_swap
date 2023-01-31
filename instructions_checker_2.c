/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_checker_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:14:47 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 13:39:44 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "checker.h"

void	pa_checker(t_list **list_a, t_list **list_b)
{
	t_list	*tmp_b;

	if (list_b == NULL || *list_b == NULL)
		return ;
	tmp_b = (*list_b);
	if (*list_b == (*list_b)->next)
		*list_b = NULL;
	else
	{
		tmp_b->previous->next = tmp_b->next;
		tmp_b->next->previous = tmp_b->previous;
		*list_b = tmp_b->next;
	}
	tmp_b->next = tmp_b;
	tmp_b->previous = tmp_b;
	add_back(list_a, tmp_b);
	*list_a = tmp_b;
}

void	pb_checker(t_list **list_a, t_list **list_b)
{
	t_list	*tmp_a;

	if (list_a == NULL || *list_a == NULL)
		return ;
	tmp_a = (*list_a);
	if (*list_a == (*list_a)->next)
		*list_a = NULL;
	else
	{
		tmp_a->previous->next = tmp_a->next;
		tmp_a->next->previous = tmp_a->previous;
		*list_a = tmp_a->next;
	}
	tmp_a->next = tmp_a;
	tmp_a->previous = tmp_a;
	add_back(list_b, tmp_a);
	*list_b = tmp_a;
}

void	sa_checker(t_list **list_a, t_list **list_b)
{
	t_list	*first;
	t_list	*second;
	int		nb;

	(void)list_b;
	if (list_a == NULL || (*list_a) == NULL)
		return ;
	if ((*list_a)->next == *list_a)
		return ;
	first = *list_a;
	second = (*list_a)->next;
	nb = first->nb;
	first->nb = second->nb;
	second->nb = nb;
}

void	sb_checker(t_list **list_a, t_list **list_b)
{
	t_list	*first;
	t_list	*second;
	int		nb;

	(void)list_a;
	if (list_b == NULL || (*list_b) == NULL)
		return ;
	if ((*list_b)->next == *list_b)
		return ;
	first = *list_b;
	second = (*list_b)->next;
	nb = first->nb;
	first->nb = second->nb;
	second->nb = nb;
}
