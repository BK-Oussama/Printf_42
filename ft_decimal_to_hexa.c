/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:16:57 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/19 03:51:41 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_to_hexa(unsigned long n)
{
	char	hexa[] = "0123456789abcdef";
	char	rslt[32];
	int i;
	int j;
	
	if (0 == n)
	{
		ft_putchar('0');
		return 1;
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
	return (i + 1);
	
}

