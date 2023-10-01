/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:45:03 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:06:05 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u(unsigned int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		*count = *count + 1;
		nb = -nb;
	}
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
		*count = *count + 1;
	}
	else
	{
		ft_put_u(nb / 10, count);
		ft_putchar((nb % 10) + 48);
		*count = *count + 1;
	}
}
