/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:56:54 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/21 03:32:31 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	decimal_to_hexa(unsigned long n)
{
	char	*hexa;
	char	rslt[32];
	int		i;
	int		j;

	hexa = "0123456789abcdef";
	if (0 == n)
	{
		ft_putchar('0');
		return (1);
	}
	i = 0;
	while (n)
	{
		rslt[i] = hexa[n % 16];
		n = n / 16;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		ft_putchar(rslt[j]);
		j--;
	}
	return (i);
}

int	ft_print_address(unsigned long ptr)
{
	int	count;

	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count = ft_putstr("0x");
	count = count + decimal_to_hexa(ptr);
	return (count);
}
