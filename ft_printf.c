/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:00:02 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:06:19 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_special(char c, va_list arg, int *count)
{
	if (c == 'c')
		ft_put_c(va_arg(arg, int), count);
	if (c == 's')
		ft_put_s(va_arg(arg, char *), count);
	if (c == 'p')
		ft_put_p(va_arg(arg, char *), count);
	if (c == 'd')
		ft_put_d(va_arg(arg, int), count);
	if (c == 'i')
		ft_put_i(va_arg(arg, int), count);
	if (c == 'u')
		ft_put_u(va_arg(arg, unsigned int), count);
	if (c == 'x')
		ft_put_x(va_arg(arg, unsigned int), count);
	if (c == 'X')
		ft_put_xx(va_arg(arg, unsigned int), count);
}

void	put_and_count(int *i, int *count)
{
	ft_putchar('%');
	*i = *i + 2;
	*count = *count + 1;
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] == '%')
			put_and_count(&i, &count);
		else if (s[i] != '%')
			ft_putchar_count(s[i++], &count);
		else
		{
			i = i + 1;
			if (chec_special(s[i]))
				ft_print_special(s[i++], arg, &count);
			else if (!chec_special(s[i - 1]) && s[i] != '\0')
				ft_putchar(s[i++]);
		}
	}
	va_end(arg);
	return (count);
}
