/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:16:57 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 03:32:04 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_to_hexa(unsigned long n, int lower_upper)
{
	const char	hexa_lower[16] = "0123456789abcdef";
	const char	hexa_upper[16] = "0123456789ABCDEF";
	const char	*hexa;
	int			count;

	if (lower_upper == 1)
	{
		hexa = hexa_upper;
	}
	else if (lower_upper == 0)
	{
		hexa = hexa_lower;
	}
	count = 1;
	if (n > 15)
	{
		count = count + ft_decimal_to_hexa(n / 16, lower_upper);
	}
	ft_putchar(hexa[n % 16]);
	return (count);
}

