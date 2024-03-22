/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:45:10 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/21 23:25:44 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(const char *format, va_list args, int index)
{
	int	count;

	count = 0;
	if (format[index] == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (format[index] == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (format[index] == 'p')
		count = ft_print_address(va_arg(args, unsigned long));
	else if (format[index] == 'd' || format[index] == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (format[index] == 'u')
		count = ft_put_unsigned_nbr(va_arg(args, unsigned int));
	else if (format[index] == 'x')
		count = ft_decimal_to_hexa(va_arg(args, unsigned int), 0);
	else if (format[index] == 'X')
		count = ft_decimal_to_hexa(va_arg(args, unsigned int), 1);
	else if (format[index] == '%')
		count = ft_putchar('%');
	return (count);
}
