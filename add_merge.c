/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_merge.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:27:28 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/11 15:27:58 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_ba(t_res_opti res, int max_a)
{
	int			i;
	t_list_opti	*ptr_b;
	t_list_opti	*ptr_a;

	i = 0;
	ptr_a = *res.lst_a;
	ptr_b = *res.lst_b;
	add_back_opti(res.res, ptr_b);
	while (i < max_a && ptr_b != NULL)
	{
		ptr_b = ptr_b->next;
		i++;
	}
	*res.lst_b = (ptr_b->next);
	ptr_b->next = NULL;
	add_back_opti(res.res, *res.lst_a);
	*res.lst_a = (ptr_a->next);
	ptr_a->next = NULL;
}

void	add_ab(t_res_opti res, int max_b)
{
	int			i;
	t_list_opti	*ptr_b;
	t_list_opti	*ptr_a;

	i = 0;
	ptr_a = *res.lst_a;
	ptr_b = *res.lst_b;
	add_back_opti(res.res, ptr_a);
	i = 0;
	while (i < max_b && ptr_a != NULL)
	{
		ptr_a = ptr_a->next;
		i++;
	}
	*res.lst_a = (ptr_a->next);
	ptr_a->next = NULL;
	add_back_opti(res.res, *res.lst_b);
	*res.lst_b = (ptr_b->next);
	ptr_b->next = NULL;
}

void	add_equal(t_res_opti res, int max_a, int max_b)
{
	int			i;
	t_list_opti	*ptr_b;
	t_list_opti	*ptr_a;

	i = 0;
	ptr_a = *res.lst_a;
	ptr_b = *res.lst_b;
	add_back_opti(res.res, ptr_a);
	i = 0;
	while (i < max_b && ptr_a != NULL)
	{
		ptr_a = ptr_a->next;
		i++;
	}
	*res.lst_a = (ptr_a->next);
	ptr_a->next = NULL;
	add_back_opti(res.res, ptr_b);
	i = 0;
	while (i < max_a && ptr_b != NULL)
	{
		ptr_b = ptr_b->next;
		i++;
	}
	*res.lst_b = (ptr_b->next);
	ptr_b->next = NULL;
}

void	add_one_one(t_res_opti res)
{
	t_list_opti	*ptr_b;
	t_list_opti	*ptr_a;

	ptr_a = *res.lst_a;
	ptr_b = *res.lst_b;
	add_back_opti(res.res, *res.lst_b);
	*res.lst_b = (ptr_b->next);
	ptr_b->next = NULL;
	add_back_opti(res.res, *res.lst_a);
	*res.lst_a = (ptr_a->next);
	ptr_a->next = NULL;
}
