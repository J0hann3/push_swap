/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:47:54 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:40:21 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_pile_a(t_list **lst_a, int argc, char **argv)
{
	int		i;
	int		j;
	int		nbr;
	char	**str;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j] != NULL)
		{
			nbr = ft_atoi(str[j], str, lst_a);
			if (ft_cmp(nbr, str[j]) == 0 || verif_duplicat(nbr, *lst_a) == 0)
			{
				clear(lst_a);
				free_split(str);
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			add_back(lst_a, new(nbr));
			j++;
		}
		free_split(str);
	}
}
