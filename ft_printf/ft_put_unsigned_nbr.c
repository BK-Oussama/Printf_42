/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <ouboukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 01:42:53 by ouboukou          #+#    #+#             */
/*   Updated: 2024/03/15 02:30:39 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// first check if you can use the same putnbr
// with calling va_arg(args,	unsigned int)
int	ft_put_unsigned_nbr(unsigned int n)
{
	long	nbr;
	int		count;

	count = 1;
	nbr = n;
	if (nbr > 9)
	{
		count = count + ft_put_unsigned_nbr(nbr / 10);
		ft_put_unsigned_nbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
	return (count);
}
