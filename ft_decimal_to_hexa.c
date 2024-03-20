/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:16:57 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/20 19:34:18 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_to_hexa(unsigned int n, int upper_or_lower)
{
	char	hexa_lower[16] = "0123456789abcdef";
	char	hexa_upper[16] = "0123456789ABCDEF";
	char	*hexa;
	int 	count;

	if (upper_or_lower)
		hexa = hexa_upper;
	else
		hexa = hexa_lower;
	
	if (0 == n)
	{
		ft_putchar('0');
		return (1);
	}
	count = 1;
	if (n > 15)
	{
		count = count + ft_decimal_to_hexa(n / 16, upper_or_lower);
	}
	ft_putchar(hexa[n % 16]);
	return (count);
}
