/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:42:06 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:05:56 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_i(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		*count = *count + 1;
		nb = -nb ;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
		*count = *count + 1;
	}
	else
	{
		ft_put_i(nb / 10, count);
		ft_putchar((nb % 10) + 48);
		*count = *count + 1;
	}
}
