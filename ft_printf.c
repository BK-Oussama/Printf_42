/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:45:19 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/28 18:05:18 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		n_printed_chars;

	va_start(args, format);
	index = 0;
	n_printed_chars = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				break ;
			}
			n_printed_chars += ft_conversion(format, args, (index));
		}
		else
			n_printed_chars = n_printed_chars + ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (n_printed_chars);
}
