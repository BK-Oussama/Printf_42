/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:42:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 03:21:59 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

/*  Functions   */
void	ft_conversion(char *fromat, va_list args, int index);
int		ft_decimal_to_hexa(unsigned long n, int lower_upper);
int		ft_print_address(void *ptr);
int		ft_printf(const char *format, ...);
int		ft_put_unsigned_nbr(unsigned int n);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);

#endif