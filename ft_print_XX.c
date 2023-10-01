/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_XX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:46:11 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:06:13 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_xx(unsigned long int nb, int *count)
{
	if (nb <= 15)
	{
		ft_put_hexa_uppercase(nb);
		*count = *count + 1;
	}
	else
	{
		ft_put_xx(nb / 16, count);
		ft_put_hexa_uppercase(nb % 16);
		*count = *count + 1;
	}
}
