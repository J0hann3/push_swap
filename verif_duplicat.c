/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_duplicat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:55:09 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/12 14:35:20 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_duplicat(const int nbr, const t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (-1);
	last = lst->previous;
	while (lst != last)
	{
		if (lst->nb == nbr)
			return (0);
		lst = lst->next;
	}
	if (lst->nb == nbr)
		return (0);
	return (1);
}
