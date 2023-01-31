/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <jvigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:26:59 by jvigny            #+#    #+#             */
/*   Updated: 2023/01/16 15:20:45 by jvigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putnbr(int n)
{
	unsigned int	nb;
	int				tmp;

	nb = n;
	if (n < 0)
	{
		nb = 0 - n;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		tmp = nb + '0';
		write(1, &tmp, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &(str[i]), 1);
		i++;
	}
	write(1, "\n", 1);
}
