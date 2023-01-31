/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list_opti.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:29:58 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:46:22 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"
#include "get_next_line.h"

void	fill_list_opti(t_list **lst_a, t_list_opti **res)
{
	char	*str;
	int		tmp;

	str = get_next_line(0);
	while (str != NULL)
	{
		tmp = str_to_enum(str);
		if (tmp == -1)
		{
			free(str);
			clear(lst_a);
			clear_opti(res);
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		add_back_opti(res, new_opti(tmp));
		free(str);
		str = get_next_line(0);
	}
}
