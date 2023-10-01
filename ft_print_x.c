/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:45:53 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:06:09 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_put_x(unsigned long int nb, int *count)
{
	if (nb <= 15)
	{
		ft_put_hexa_lowercase(nb);
		*count = *count + 1;
	}
	else
	{
		ft_put_x(nb / 16, count);
		ft_put_hexa_lowercase(nb % 16);
		*count = *count + 1;
	}
}
