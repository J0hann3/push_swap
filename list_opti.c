/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_opti.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:05:21 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 13:06:39 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_opti	*new_opti(enum e_action content)
{
	t_list_opti	*new;

	new = malloc(sizeof(t_list_opti));
	if (new == NULL)
		return (0);
	new->mouv = content;
	new->next = NULL;
	return (new);
}

int	size_lst_opti(t_list_opti *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

t_list_opti	*last_opti(t_list_opti *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	add_back_opti(t_list_opti **lst, t_list_opti *new)
{
	t_list_opti	*last;

	if (new == NULL || lst == NULL)
		return ;
	last = last_opti(*lst);
	if (last == NULL)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}

t_list_opti	*find_elem_opti(t_list_opti *lst, t_list_opti *find)
{
	if (lst == NULL)
		return (NULL);
	if (lst == find)
		return (lst);
	while (lst->next != find)
		lst = lst->next;
	return (lst);
}
