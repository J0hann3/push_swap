/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:28:25 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:40:41 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

int	check_vide(t_list **lst)
{
	if (lst == NULL)
		return (1);
	if (*lst == NULL)
		return (1);
	else
		return (0);
}

int	is_sort_checker(t_list *lst)
{
	size_t	i;

	i = 0;
	if (lst == NULL)
		return (-1);
	while (i < size_lst(lst) - 1)
	{
		if (lst->nb > lst->next->nb)
			return (0);
		lst = lst->next;
		i++;
	}
	return (1);
}
