/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:45:10 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 02:10:29 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_conversion(char *fromat, va_list args, int index)
{
	int	count;

	count = 0;
	if (format[index] == c)
		count = count + ft_putchar(va_arg(args, char));
	else if (format[index] == s)
		count = count + ft_putstr(va_arg(args, char *));
	else if (format[index] == d)
		count = count + ft_putnbr(var_arg(args, int));
	else if (format[index] == x)
		count = count + decimal_to_hexa(va_arg(args, int));
	else if (format[index] == X)
		count = count + Decimal_To_Hexa(va_arg(args, int), x);
	else if (format[index] == '%')
		count = count + ft_putchar('%');
}
