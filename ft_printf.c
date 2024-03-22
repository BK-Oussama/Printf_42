/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:45:19 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/22 02:52:09 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		n_printed_chars;
	size_t	length;

	va_start(args, format);
	index = 0;
	n_printed_chars = 0;
	length = ft_strlen(format);
	if (format == NULL || (format[index] == '%' && format[index + 1] == '\0')
		|| ((format[length] == '%') && (format[length + 1] == '\0')))
		return (-1);
	while (format[index])
	{
		if (format[index] == '%')
		{
			n_printed_chars += ft_conversion(format, args, (index + 1));
			index++;
		}
		else
			n_printed_chars = n_printed_chars + ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (n_printed_chars);
}
