/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:52:36 by isbarka           #+#    #+#             */
/*   Updated: 2022/11/22 21:06:23 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>
# include<limits.h>

void	ft_putchar(char c);
void	ft_put_c(char c, int *count);
void	ft_put_s(char *s, int *count);
void	ft_put_i(int n, int *count);
void	ft_put_p(char *s, int *count);
void	ft_put_s(char *s, int *count);
void	ft_put_u(unsigned int n, int *count);
void	ft_put_x(unsigned long int nb, int *count);
void	ft_put_xx(unsigned long int nb, int *count);
void	ft_putstr(char *s);
void	ft_putchar_count(char c, int *count);
void	ft_putstr_count(char *s, int *count);
void	ft_put_hexa_uppercase(long long nb);
void	ft_put_hexa_lowercase(long long nb);
int		chec_special(char c);
int		ft_printf(const char *s, ...);
void	ft_put_d(int n, int *count);
void	ft_print_special(char c, va_list arg, int *count);

#endif