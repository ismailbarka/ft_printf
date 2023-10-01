/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:48:45 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:06:17 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	chec_special(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

void	ft_put_hexa_lowercase(long long nb)
{
	if (nb < 10)
		ft_putchar(nb + 48);
	if (nb == 10)
		ft_putchar('a');
	if (nb == 11)
		ft_putchar('b');
	if (nb == 12)
		ft_putchar('c');
	if (nb == 13)
		ft_putchar('d');
	if (nb == 14)
		ft_putchar('e');
	if (nb == 15)
		ft_putchar('f');
}

void	ft_put_hexa_uppercase(long long nb)
{
	if (nb < 10)
		ft_putchar(nb + 48);
	if (nb == 10)
		ft_putchar('A');
	if (nb == 11)
		ft_putchar('B');
	if (nb == 12)
		ft_putchar('C');
	if (nb == 13)
		ft_putchar('D');
	if (nb == 14)
		ft_putchar('E');
	if (nb == 15)
		ft_putchar('F');
}

void	ft_putstr_count(char *s, int *count)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		*count = *count + 1;
	}
}
