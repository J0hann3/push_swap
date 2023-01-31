/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_opti_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:06:59 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/14 15:09:42 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_opti	*delete_2_opti(t_list_opti **begin, t_list_opti *ptr)
{
	t_list_opti	*tmp;
	t_list_opti	*elem;

	if (begin == NULL || ptr == NULL)
		return (NULL);
	if (*begin == NULL)
		return (NULL);
	tmp = ptr->next->next;
	free(ptr->next);
	ptr->next = tmp;
	elem = find_elem_opti(*begin, ptr);
	if (elem == *begin)
	{
		tmp = (*begin)->next;
		free(elem);
		*begin = tmp;
		return (*begin);
	}
	tmp = elem->next->next;
	free(elem->next);
	elem->next = tmp;
	return (elem);
}

void	replace_opti(t_list_opti *ptr)
{
	t_list_opti	*tmp;

	tmp = ptr->next->next;
	free(ptr->next);
	ptr->next = tmp;
	if (ptr->mouv == e_sa || ptr->mouv == e_sb)
		ptr->mouv = e_ss;
	if (ptr->mouv == e_ra || ptr->mouv == e_rb)
		ptr->mouv = e_rr;
	if (ptr->mouv == e_rra || ptr->mouv == e_rrb)
		ptr->mouv = e_rrr;
}

void	clear_opti(t_list_opti **lst)
{
	t_list_opti	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
}

void	ft_print_opti(t_list_opti *lst)
{
	char	action[11][4];

	ft_strcpy(action[0], "ra");
	ft_strcpy(action[1], "rb");
	ft_strcpy(action[2], "rra");
	ft_strcpy(action[3], "rrb");
	ft_strcpy(action[4], "pa");
	ft_strcpy(action[5], "pb");
	ft_strcpy(action[6], "sa");
	ft_strcpy(action[7], "sb");
	ft_strcpy(action[8], "rr");
	ft_strcpy(action[9], "rrr");
	ft_strcpy(action[10], "ss");
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		ft_putstr(action[lst->mouv]);
		lst = lst->next;
	}
}
