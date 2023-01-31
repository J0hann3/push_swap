/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_position.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:21:54 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 16:01:25 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_position	create_position(t_list **begin)
{
	t_position	new;

	new.len = size_lst(*begin);
	new.begin = begin;
	new.b = 1;
	return (new);
}
