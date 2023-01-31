/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_res_opti.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:13:52 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/12 11:38:02 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_res_opti	create_res(t_list_opti **res, t_list_opti **l_a, t_list_opti **l_b)
{
	t_res_opti	fini;

	*l_b = NULL;
	*l_a = NULL;
	*res = NULL;
	fini.res = res;
	fini.lst_a = l_a;
	fini.lst_b = l_b;
	return (fini);
}

void	clear_res(t_list_opti **res, t_list_opti **l_a, t_list_opti **l_b)
{
	clear_opti(res);
	clear_opti(l_a);
	clear_opti(l_b);
}
