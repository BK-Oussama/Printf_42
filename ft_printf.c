/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:45:19 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 03:47:51 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int index;
	int n_printed_chars;

	index = 0;
	if (format == NULL || (format[index] == '%' && format[index + 1] == '\0'))
		return (-1);
	va_start(args, format);

	while (format[index])
	{
		if(format[index] != '%')
		{
			n_printed_chars = ft_putchar(format[index]);
			index++;
		}
		else if(format[index] == '%' && format[index + 1] != '\0')
		{
			n_printed_chars = ft_conversion(format, args, index);
		}
	}
	while ()
	va_end(args);
	return (n_printed_chars);
}
