/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:57:55 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:44:37 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "push_swap.h"

int	ft_strcmp(char *str, char *cmp)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0' || cmp[i] != 0)
	{
		if (str[i] != cmp[i])
			return (0);
		i++;
	}
	if (str[i] == cmp[i] && str[i] == 0)
		return (1);
	else
		return (0);
}

enum e_action	str_to_enum(char *str)
{
	char	action[11][5];
	int		i;

	i = 0;
	ft_strcpy(action[0], "ra\n");
	ft_strcpy(action[1], "rb\n");
	ft_strcpy(action[2], "rra\n");
	ft_strcpy(action[3], "rrb\n");
	ft_strcpy(action[4], "pa\n");
	ft_strcpy(action[5], "pb\n");
	ft_strcpy(action[6], "sa\n");
	ft_strcpy(action[7], "sb\n");
	ft_strcpy(action[8], "rr\n");
	ft_strcpy(action[9], "rrr\n");
	ft_strcpy(action[10], "ss\n");
	while (i < 11)
	{
		if (ft_strcmp(action[i], str) == 1)
			return (i);
		i++;
	}
	return (-1);
}

void	execute_instructions(t_list_opti **res, t_list **lst_a, t_list **lst_b)
{
	t_list_opti	*lst;

	if (res == NULL)
		return ;
	lst = *res;
	while (lst != NULL)
	{
		if (action(lst->mouv, lst_a, lst_b) == 0)
			action_1(lst->mouv, lst_a, lst_b);
		lst = lst->next;
	}
}

int	main(int argc, char **argv)
{
	t_list		*lst_a;
	t_list		*lst_b;
	t_list_opti	*res;

	lst_a = NULL;
	lst_b = NULL;
	res = NULL;
	if (argc <= 1)
		return (1);
	fill_pile_a(&lst_a, argc, argv);
	fill_list_opti(&lst_a, &res);
	execute_instructions(&res, &lst_a, &lst_b);
	if (check_vide(&lst_b) != 1 || is_sort_checker(lst_a) != 1)
	{
		clear_opti(&res);
		clear(&lst_a);
		clear(&lst_b);
		write(1, "KO\n", 3);
		return (1);
	}
	write(1, "OK\n", 3);
	clear_opti(&res);
	clear(&lst_a);
	return (0);
}
