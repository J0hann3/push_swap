/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:19:40 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/12 14:34:41 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	find_begin_sign(char *str, int *sign)
{
	size_t	b_str;
	int		s;

	s = 1;
	b_str = 0;
	while (str[b_str] == ' ' || str[b_str] == '\f' || str[b_str] == '\r'
		|| str[b_str] == '\n' || str[b_str] == '\t' || str[b_str] == '\v')
		b_str++;
	while (str[b_str] == '-' || str[b_str] == '+')
	{
		if (str[b_str] == '-')
			s = s * -1;
		b_str++;
	}
	while (str[b_str] == '0')
		b_str++;
	*sign = s;
	return (b_str);
}

int	ft_cmp(const int nbr, char *str)
{
	size_t			len_str;
	size_t			b_str;
	int				sign;
	unsigned int	n;

	n = nbr;
	len_str = ft_strlen(str);
	b_str = find_begin_sign(str, &sign);
	if (nbr < 0)
	{
		n = -nbr;
		if (sign > 0)
			return (0);
	}
	while ((len_str > b_str && nbr > 0) || (len_str > b_str + 1 && nbr < 0))
	{
		if (str[len_str - 1] != n % 10 + '0')
			return (0);
		n = n / 10;
		len_str--;
	}
	return (1);
}
