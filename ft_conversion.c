/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:45:10 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/16 16:46:49 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_conversion(const char *format, va_list args, int index)
{
	int	count;

	count = 0;
	if (format[index] == 'c')
		count = count + ft_putchar(va_arg(args, int));
	else if (format[index] == 's')
		count = count + ft_putstr(va_arg(args, char *));
	else if (format[index] == 'p')
		count = count + ft_print_address(va_arg(args, unsigned long long));
	else if (format[index] == 'd' || format[index] == 'i')
		count = count + ft_putnbr(va_arg(args, int));
	else if (format[index] == 'u')
		count = count + ft_put_unsigned_nbr(va_arg(args, unsigned int));
	else if (format[index] == 'x')
		count = count + ft_decimal_to_hexa(va_arg(args, unsigned long), 0);
	else if (format[index] == 'X')
		count = count + ft_decimal_to_hexa(va_arg(args, unsigned long), 1);
	else if (format[index] == '%')
		count = count + ft_putchar('%');
	return (count);
}
