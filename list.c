/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:41:13 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/14 15:09:00 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*new(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (0);
	new->nb = content;
	new->next = new;
	new->previous = new;
	return (new);
}

size_t	size_lst(t_list *lst)
{
	size_t	i;
	t_list	*begin;

	i = 1;
	if (lst == NULL)
		return (0);
	begin = lst->previous;
	while (lst != begin)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	add_back(t_list **lst, t_list *new)
{
	t_list	*begin;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	begin = *lst;
	*lst = (*lst)->previous;
	new->next = begin;
	new->previous = *lst;
	(*lst)->next = new;
	begin->previous = new;
	*lst = begin;
}

void	clear(t_list **lst)
{
	t_list	*last;
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	last = (*lst)->previous;
	while (*lst != last)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	free(*lst);
}

void	ft_print(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return ;
	last = lst->previous;
	while (lst != last)
	{
		ft_putnbr(lst->nb);
		lst = lst->next;
	}
	ft_putnbr(lst->nb);
}
