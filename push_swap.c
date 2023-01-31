/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:00:38 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/19 11:08:10 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quick_sort_opti(t_list **lst_a, t_list **lst_b, t_res_opti fini)
{
	quick_sort_a(create_position(lst_a), create_position(lst_b), fini);
	merge(fini);
	opti(fini.res);
	ft_print_opti(*fini.res);
}

int	main(int argc, char **argv)
{
	t_list		*lst_a;
	t_list		*lst_b;
	t_list_opti	*res;
	t_list_opti	*l_a;
	t_list_opti	*l_b;

	lst_a = NULL;
	lst_b = NULL;
	l_a = NULL;
	l_b = NULL;
	res = NULL;
	if (argc <= 1)
		return (EXIT_FAILURE);
	fill_pile_a(&lst_a, argc, argv);
	quick_sort_opti(&lst_a, &lst_b, create_res(&res, &l_a, &l_b));
	clear(&lst_a);
	clear(&lst_b);
	clear_res(&res, &l_a, &l_b);
	return (EXIT_SUCCESS);
}
