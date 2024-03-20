/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:42:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/20 18:00:29 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

/*  Functions   */
int	ft_conversion(const char *format, va_list args, int index);
int	ft_decimal_to_hexa(unsigned int n, int upper_or_lower);
int	ft_print_address(unsigned long ptr);
int	ft_printf(const char *format, ...);
int	ft_put_unsigned_nbr(unsigned int n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

#endif
