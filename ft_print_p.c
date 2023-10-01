/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:43:18 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:05:59 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_long_long_p(unsigned long int nb, int *count)
{
	if (nb <= 15)
	{
		ft_put_hexa_lowercase(nb);
		*count = *count + 1;
	}
	else
	{
		ft_put_long_long_p(nb / 16, count);
		ft_put_hexa_lowercase(nb % 16);
		*count = *count + 1;
	}
}

void	ft_put_p(char *s, int *count)
{
	unsigned long int	nb;

	nb = (unsigned long int)s;
	ft_putstr_count("0x", count);
	ft_put_long_long_p(nb, count);
}
