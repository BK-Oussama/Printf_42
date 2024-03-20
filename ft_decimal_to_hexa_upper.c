/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexa_upper.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:03:14 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/20 00:33:45 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_to_hexa_upper(unsigned int n)
{
	char	*hexa;
	char	rslt[32];
	int		i;
	int		j;

	hexa = "0123456789ABCDEF";
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
